// Fill out your copyright notice in the Description page of Project Settings.


#include "BehaviorMassProcessor.h"
#include "../SwarmIntelligenceTrait.h"
#include "MassEntityTemplateRegistry.h"
#include "MassMovementFragments.h"
#include "MassCommonFragments.h"
#include "MassEntitySubsystem.h"
#include "UGridSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

void UFishRecognizeTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	FFishRecognizeFragment& FishRecognize_Reg = BuildContext.AddFragment_GetRef< FFishRecognizeFragment>();
	FFishPlaceFragment& FishPlace_Reg = BuildContext.AddFragment_GetRef< FFishPlaceFragment>();

	FishRecognize_Reg.BoidsDetectRadius = BoidsDetectRadius;
	FishRecognize_Reg.AvoidsDetectRadius = AvoidsDetectRadius;
	FishRecognize_Reg.ChasesDetectRadius = ChasesDetectRadius;

	FishPlace_Reg.place = place;
}


UBehaviorMassProcessor::UBehaviorMassProcessor()
{
	bAutoRegisterWithProcessingPhases = true;
	ExecutionFlags = (int32)EProcessorExecutionFlags::All;
	ExecutionOrder.ExecuteBefore.Add(UE::Mass::ProcessorGroupNames::Avoidance);

	GridManager = nullptr;
}

void UBehaviorMassProcessor::ConfigureQueries()
{
	EntityQuery.RegisterWithProcessor(*this);

	EntityQuery.AddRequirement<FishAttributes>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FFishPerceptionFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FMassVelocityFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FFishRecognizeFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FFishPlaceFragment>(EMassFragmentAccess::ReadWrite);

}

void UBehaviorMassProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	if (!GridManager)
	{
		UE_LOG(LogTemp, Error, TEXT("GridManager is nullptr in UBehaviorMassProcessor::Execute"));
		return;
	}

	//const int32 NumEntities = Context.GetNumEntities();
	//if (NumEntities == 0)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("No entities in BehaviorMassProcessor"));
	//	return;
	//}

	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
		{
			const TArrayView<FishAttributes> Attributes = Context.GetMutableFragmentView<FishAttributes>();
			const TArrayView<FTransformFragment> Tranform = Context.GetMutableFragmentView<FTransformFragment>();
			const TArrayView<FMassVelocityFragment> VelocityList = Context.GetMutableFragmentView<FMassVelocityFragment>();
			const TArrayView<FFishRecognizeFragment> Recognizes = Context.GetMutableFragmentView<FFishRecognizeFragment>();
			const TArrayView<FFishPlaceFragment> Places = Context.GetMutableFragmentView<FFishPlaceFragment>();

			const float WorldDeltaTime = Context.GetDeltaTimeSeconds();

			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{

				FMassVelocityFragment& Velocity = VelocityList[EntityIndex];
				FishAttributes& Attribute = Attributes[EntityIndex];
				FTransform& t = Tranform[EntityIndex].GetMutableTransform();
				FFishRecognizeFragment& Recognize = Recognizes[EntityIndex];
				FFishPlaceFragment& Place = Places[EntityIndex];

				Attributes[EntityIndex].CurrentPosition = t.GetLocation();

				bool b = true;

				if (Attribute.UseLODMove)
				{
					if (!GridManager->IsFishCanMove(t, Attribute.MoveDistanceFromCharacter))
					{
						b = false;
					}
				}


				if (b)
				{
					//// 트레이싱 검사
					FHitResult HitResult;
					FVector StartLocation = t.GetLocation();
					FVector vel = Velocity.Value;
					vel.Normalize();
					FVector EndLocation = StartLocation + Attribute.TargetRange * vel;

					bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, GetPlaceChannel(Place.place));


					if (bHit)
					{
						Attribute.CurrentSpeed = 0;
						// 충돌이 감지된 경우, 반사 벡터 계산
						FVector SurfaceNormal = HitResult.ImpactNormal; // 충돌 표면의 노멀 벡터
						// 반사 벡터 계산
						Attribute.dir = vel - 2 * FVector::DotProduct(vel, SurfaceNormal) * SurfaceNormal;
						Attribute.dir.Normalize();

						// 충돌 회피 시간 초기화
						Attribute.CollisionTimer = Attribute.CollisionAvoidTime;
					}
					else if (Attribute.CollisionTimer > 0.0f)
					{
						Attribute.CurrentSpeed = Attribute.Speed;

						// 충돌 회피 유지
						Attribute.CollisionTimer -= WorldDeltaTime;

						// 이전 회피 방향 유지
						Attribute.dir.Normalize();
					}
					else
					{
						Attribute.CurrentSpeed = Attribute.Speed;

						/*-------------------------------------이동 알고리즘--------------------------------------*/
						BoidMovement(EntityIndex, Attribute, t, Recognize);

					}
				}
			}
		}));
}

void UBehaviorMassProcessor::Initialize(UObject& Owner)
{
	GridManager = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());
}

FVector UBehaviorMassProcessor::SeparationRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight)
{
	if (neighbors.Num() == 0)
		return FVector::ZeroVector;

	FVector dir = FVector::ZeroVector;
	for (const FTransform& neighbor : neighbors)
	{
		dir += agent.GetLocation() - neighbor.GetLocation();

	}
	//dir.Normalize();

	//dir *= (1 - BoidsWeight);

	return dir;
}

FVector UBehaviorMassProcessor::AlignmentRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight)
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

	return neighborDir;
}

FVector UBehaviorMassProcessor::CohesionRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight)
{
	if (neighbors.Num() == 0)
		return FVector::ZeroVector;

	FVector averagePos = FVector::ZeroVector;

	for (const FTransform& neighbor : neighbors)
	{
		averagePos += neighbor.GetLocation();

	}

	averagePos /= neighbors.Num();
	averagePos = averagePos - agent.GetLocation();
	//averagePos.Normalize();

	//averagePos *= BoidsWeight;

	return averagePos;
}

FTransform UBehaviorMassProcessor::FindClosestTransform(const TArray<FTransform>& TransformArray, const FTransform& TargetTransform)
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

void UBehaviorMassProcessor::BoidMovement(int32 EntityIndex, FishAttributes& Attribute, FTransform& t, FFishRecognizeFragment& Recognize)
{
	/*-------------------------------------이동 알고리즘--------------------------------------*/
	FVector LastPostion = Attribute.CurrentPosition;
	FVector CurrentVelocity;
	FVector RandomVelocity;
	// 그리드 매니저 업데이트
	GridManager->UpdateEntityLocation(EntityIndex, t, Attribute.Type, Attribute.GridIndex);

	Attribute.GridIndex = GridManager->GetGridIndex(t.GetLocation());

	// 군체 알고리즘
	TArray<FTransform> neighbors;
	TArray<FTransform> Avoids;
	TArray<FTransform> Chases;

	float BoidsDetectRadius = Recognize.BoidsDetectRadius;
	float AvoidsDetectRadius = Recognize.AvoidsDetectRadius;
	float ChasesDetectRadius = Recognize.ChasesDetectRadius;

	Attribute.dir = FVector::ZeroVector;
	float BoidsWeight = Attribute.BoidsWeight;

	GridManager->FindEntitiesTransformInRadius(t.GetLocation(),
		BoidsDetectRadius, AvoidsDetectRadius, ChasesDetectRadius,
		neighbors, Avoids, Chases, Attribute.Type);
	if (!Avoids.IsEmpty())
	{
		Attribute.dir += SeparationRule(t, Avoids, BoidsWeight);
	}
	else if (!Chases.IsEmpty())
	{
		FTransform chasesTarget = FindClosestTransform(Chases, t);

		Attribute.dir = chasesTarget.GetLocation() - t.GetLocation();
	}
	else
	{
		Attribute.dir += SeparationRule(t, neighbors, BoidsWeight);
		Attribute.dir += AlignmentRule(t, neighbors, BoidsWeight);
		Attribute.dir += CohesionRule(t, neighbors, BoidsWeight);
	}
	Attribute.dir.Normalize();
}

ECollisionChannel UBehaviorMassProcessor::GetPlaceChannel(Place place)
{
	switch (place)
	{
	case Place::Start:
		return ECC_GameTraceChannel2;
		break;
	case Place::Ship:
		return ECC_GameTraceChannel4;
		break;
	case Place::PlayGround:
		return ECC_GameTraceChannel5;
		break;
	}
	return ECollisionChannel();
}
