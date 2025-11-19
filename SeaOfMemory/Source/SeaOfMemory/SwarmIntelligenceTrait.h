// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "MassEntityTypes.h"
#include "MassProcessor.h"
#include "Public/SpeciesType.h"
#include "SOMGameDataBase.h"
#include "SwarmIntelligenceTrait.generated.h"



/**
 *
 */


/*--------------------- Trait ------------------*/
UCLASS()
class SEAOFMEMORY_API USwarmIntelligenceTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()

protected:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const override;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float MinWeight = 0.3f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float MaxWeight = 1.f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float BoidsWeight = 0.7f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float MinSpeed = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float Speed = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float MaxSpeed = 1.0f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	ESpecies Type;

	UPROPERTY(EditAnywhere, Category = "Attribute")
	bool MoveSwarm = false;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float InterpSpeed = 1.f;

	UPROPERTY(EditAnywhere, Category = "Attribute")
	float SightRange = 100.f;

	UPROPERTY(EditAnywhere, Category = "Attribute")
	TArray<ESpecies> Avoids;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	TArray<ESpecies> Chases;

	UPROPERTY(EditAnywhere, Category = "Attribute")
	float CollisionAvoidTime = 1.0f; // 충돌 회피 유지 시간

	UPROPERTY(EditAnywhere, Category = "Attribute")
	float TargetRange = 200.f;

	UPROPERTY(EditAnywhere, Category = "Attribute")
	float MoveDistanceFromCharacter = 9000.f;

	UPROPERTY(EditAnywhere, Category = "Attribute")
	bool UseLODMove = true;
};

/*--------------------- Fragment ------------------*/
USTRUCT()
struct FishAttributes : public FMassFragment
{
	GENERATED_BODY()
public:
	FishAttributes();

	FVector CurrentPosition;

	float MinLength = 1.f;

	float Size = 100.f;
	float Weight = 0.f;
	UPROPERTY(EditAnywhere, Category = "Weight")
	float MinWeight = 0.3f;
	UPROPERTY(EditAnywhere, Category = "Weight")
	float MaxWeight = 1.f;
	UPROPERTY(EditAnywhere, Category = "Attribute")
	float BoidsWeight = 0.7f;

	float HungerLevel = 0.f;
	UPROPERTY(EditAnywhere, Category = "Speed")
	float MinSpeed = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Speed")
	float Speed = 0.5f;
	UPROPERTY(EditAnywhere, Category = "Speed")
	float MaxSpeed = 100.0f;
	float CurrentSpeed = 0.5f;

	EFishBehaviorState CurrentState = EFishBehaviorState::Searching;
	UPROPERTY(EditAnywhere, Category = "Type")
	ESpecies Type ;

	FVector RandVelocity = FVector::ZeroVector;

	FVector TargetVelocity = FVector::ZeroVector;
	FVector TargetLocation = FVector::ZeroVector;

	bool MoveSwarm;

	float InterpSpeed;
	float SightRange;

	bool IsStart = true;

	FIntVector GridIndex = FIntVector(0,0,0);

	float CollisionAvoidTime = 1.0f; // 충돌 회피 유지 시간
	float CollisionTimer = 0.0f;

	FVector dir;
	//UInstancedStaticMeshComponent* ISMComponent;

	TArray<ESpecies> Avoids;
	TArray<ESpecies> Chases;

	float TargetRange;

	float MoveDistanceFromCharacter;

	bool UseLODMove;
};

USTRUCT()
struct FFishPerceptionFragment : public FMassFragment
{
	GENERATED_BODY()
	float DetectionRadius = 10000.f;
};



/*--------------------- Proceessor ------------------*/
UCLASS()
class USwarmIntelligenceProceessor : public UMassProcessor
{
	GENERATED_BODY()
public:
	USwarmIntelligenceProceessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	virtual void Initialize(UObject& Owner) override;

	class UFishSwarmSubsystem* SwarmSubsystem;
	class USpeciesRelationshipManager* RelationshipManager;
	class UGridSubsystem* GridManager;

	TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;

private:
	FMassEntityQuery EntityQuery;

	FVector SeparationRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight);	// boids알고리즘 - 분리
	FVector AlignmentRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight);		// boids알고리즘 - 정렬
	FVector CohesionRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight);		// boids알고리즘 - 응집력

	FTransform FindClosestTransform(const TArray<FTransform>& TransformArray, const FTransform& TargetTransform);
};

