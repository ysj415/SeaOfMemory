// Fill out your copyright notice in the Description page of Project Settings.


#include "SwarmIntelligenceTrait.h"
#include "MassEntityTemplateRegistry.h"
#include "MassMovementFragments.h"
#include "MassCommonFragments.h"
#include "MassEntitySubsystem.h"
#include "SpeciesRelationshipManager.h"
#include "FishSwarmSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UGridSubsystem.h"
#include "MassRepresentationFragments.h"
#include "MassRepresentationSubsystem.h"
#include "MassSpawnerTypes.h"


void USwarmIntelligenceTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	//UE_LOG(LogTemp, Warning, TEXT("BuildTemplate"));

	//BuildContext.AddFragment< FishAttributes>();

	FishAttributes& FishAttributes_Reg = BuildContext.AddFragment_GetRef< FishAttributes>();
	//FMassVelocityFragment& VelocityTemplate = BuildContext.AddFragment_GetRef<FMassVelocityFragment>();

	BuildContext.AddFragment< FFishPerceptionFragment>();

	FishAttributes_Reg.MinWeight = MinWeight;
	FishAttributes_Reg.MaxWeight = MaxWeight; 
	FishAttributes_Reg.BoidsWeight = BoidsWeight;
	FishAttributes_Reg.MinSpeed = MinSpeed;
	FishAttributes_Reg.MaxSpeed = MaxSpeed;
	FishAttributes_Reg.Speed = FMath::FRandRange(MinSpeed, MaxSpeed);
	FishAttributes_Reg.CurrentSpeed = FMath::FRandRange(MinSpeed, MaxSpeed);
	FishAttributes_Reg.Type = Type;
	FishAttributes_Reg.MinLength = FMath::FRandRange(10.f, 100.f);
	FishAttributes_Reg.MoveSwarm = MoveSwarm;
	FishAttributes_Reg.InterpSpeed = InterpSpeed;
	FishAttributes_Reg.SightRange = SightRange;


	FishAttributes_Reg.Avoids = Avoids;
	FishAttributes_Reg.Chases = Chases;
	FishAttributes_Reg.CollisionAvoidTime = CollisionAvoidTime;

	FishAttributes_Reg.TargetRange = TargetRange;
	FishAttributes_Reg.MoveDistanceFromCharacter = MoveDistanceFromCharacter;
	FishAttributes_Reg.UseLODMove = UseLODMove;

}

USwarmIntelligenceProceessor::USwarmIntelligenceProceessor()
{

	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
	ExecutionOrder.ExecuteBefore.Add(UE::Mass::ProcessorGroupNames::Avoidance);

	SwarmSubsystem =nullptr;
	RelationshipManager = nullptr;
	GridManager = nullptr;
	//RelationshipManager = UGameplayStatics::GetGameInstance(GetWorld())->GetSubsystem<USpeciesRelationshipManager>();
}

void USwarmIntelligenceProceessor::ConfigureQueries()
{
	EntityQuery.RegisterWithProcessor(*this);

	EntityQuery.AddRequirement<FishAttributes>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FFishPerceptionFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FMassVelocityFragment>(EMassFragmentAccess::ReadWrite);
	
	EntityQuery.AddRequirement<FMassRepresentationFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FMassRepresentationLODFragment>(EMassFragmentAccess::ReadWrite);
}

void USwarmIntelligenceProceessor::Initialize(UObject& Owner)
{
	//UE_LOG(LogTemp, Warning, TEXT("Initialize"));

	SwarmSubsystem = UGameInstance::GetSubsystem<UFishSwarmSubsystem>(GetWorld()->GetGameInstance());
	RelationshipManager = UGameInstance::GetSubsystem<USpeciesRelationshipManager>(GetWorld()->GetGameInstance());
	GridManager = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());
	RepresentationSubsystemClass = UMassRepresentationSubsystem::StaticClass();

}

FVector USwarmIntelligenceProceessor::SeparationRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight)
{
	if (neighbors.Num() == 0)
		return FVector::ZeroVector;

	FVector dir = FVector::ZeroVector;
	for(const FTransform& neighbor : neighbors)
	{
		dir += agent.GetLocation() - neighbor.GetLocation();

	}
	//dir.Normalize();

	//dir *= (1 - BoidsWeight);

	return dir;
}

FVector USwarmIntelligenceProceessor::AlignmentRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight)
{
	// 이웃이 없다면, 전방으로 진행
	if (neighbors.Num() == 0)
		return agent.GetRotation().Vector();

	FVector neighborDir = FVector::ZeroVector;

	for (const FTransform& neighbor : neighbors)
	{
		neighborDir += neighbor.GetRotation().Vector();

		//UE_LOG(LogTemp, Warning, TEXT("AlignmentRule for loop"));

	}

	neighborDir = neighborDir / neighbors.Num();
	//neighborDir.Normalize();

	//UE_LOG(LogTemp, Warning, TEXT("AlignmentRule: %f, %f ,%f"), neighborDir.X, neighborDir.Y, neighborDir.Z);

	return neighborDir;
}

FVector USwarmIntelligenceProceessor::CohesionRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight)
{
	if (neighbors.Num() == 0)
		return FVector::ZeroVector;

	FVector averagePos = FVector::ZeroVector;

	for (const FTransform& neighbor : neighbors)
	{
		averagePos += neighbor.GetLocation();
		//UE_LOG(LogTemp, Warning, TEXT("CohesionRule for loop"));

	}

	averagePos /= neighbors.Num();
	averagePos = averagePos - agent.GetLocation();
	//averagePos.Normalize();

	//averagePos *= BoidsWeight;

	return averagePos;
}

FTransform USwarmIntelligenceProceessor::FindClosestTransform(const TArray<FTransform>& TransformArray, const FTransform& TargetTransform)
{
	if (TransformArray.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("TransformArray is empty"));
		return FTransform(); 
	}

	float MinDistance = FLT_MAX;
	FTransform ClosestTransform;

	FVector TargetLocation = TargetTransform.GetLocation();

	for (const FTransform& Transform : TransformArray)
	{
		float Distance = FVector::Dist(TargetLocation, Transform.GetLocation());

		if (Distance < MinDistance)
		{
			MinDistance = Distance;
			ClosestTransform = Transform;
		}
	}

	return ClosestTransform;
}

void USwarmIntelligenceProceessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FishAttributes> Attributes = Context.GetMutableFragmentView<FishAttributes>();
			const TArrayView<FFishPerceptionFragment> Perceptions = Context.GetMutableFragmentView<FFishPerceptionFragment>();
			const TArrayView<FTransformFragment> Tranform = Context.GetMutableFragmentView<FTransformFragment>();
			const TArrayView<FMassVelocityFragment> VelocityList = Context.GetMutableFragmentView<FMassVelocityFragment>();
			const TArrayView<FMassRepresentationFragment> RepresentationList = Context.GetMutableFragmentView<FMassRepresentationFragment>();
			const TArrayView<FMassRepresentationLODFragment> RepresentationLODList = Context.GetMutableFragmentView<FMassRepresentationLODFragment>();

			const float WorldDeltaTime = Context.GetDeltaTimeSeconds();

			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{
				FMassVelocityFragment& Velocity = VelocityList[EntityIndex];
				FishAttributes& Attribute = Attributes[EntityIndex];
				FTransform& t = Tranform[EntityIndex].GetMutableTransform();

				Attributes[EntityIndex].CurrentPosition = t.GetLocation();

				/*-------------------------------------위치 변환 --------------------------------------*/
				
				bool b = true;

				if (Attribute.UseLODMove)
				{
					if (GridManager->IsFishCanMove(t, Attribute.MoveDistanceFromCharacter))
					{
						b = true;
					}
					else
					{
						b = false;
					}
				}

				if (b)
				{
					//FVector OldDirection = Velocity.Value.GetSafeNormal(); // 이전 방향

					FVector OldDirection = t.GetRotation().GetForwardVector();

					FVector newdir = FMath::VInterpTo(OldDirection, Attribute.dir, WorldDeltaTime, Attributes[EntityIndex].InterpSpeed);

					Velocity.Value = newdir * Attribute.CurrentSpeed;

					t.SetRotation(newdir.Rotation().Quaternion());

					FVector CurrentLocation = t.GetLocation();
					CurrentLocation += (Velocity.Value) * WorldDeltaTime;
					t.SetLocation(CurrentLocation);


					// 그리드 매니저 업데이트
					GridManager->UpdateEntityLocation(EntityIndex, t, Attribute.Type, Attribute.GridIndex);
					Attribute.GridIndex = GridManager->GetGridIndex(t.GetLocation());
				}
			}
		}));
}

FishAttributes::FishAttributes()
{
}

