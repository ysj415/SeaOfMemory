// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "MassEntityTypes.h"
#include "MassProcessor.h"
#include "SOMGameDataBase.h"
#include "BehaviorMassProcessor.generated.h"

/**
 * 
 */
 // 주변 엔티티 인지 trait
UCLASS()
class SEAOFMEMORY_API UFishRecognizeTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()

protected:
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const override;

	UPROPERTY(EditAnywhere, Category = "DetectRadius")
	float BoidsDetectRadius = 2000.f;

	UPROPERTY(EditAnywhere, Category = "DetectRadius")
	float AvoidsDetectRadius = 1000.f;

	UPROPERTY(EditAnywhere, Category = "DetectRadius")
	float ChasesDetectRadius = 700.f;

	UPROPERTY(EditAnywhere, Category = "DetectRadius")
	Place place = Place::Start;
};

USTRUCT()
struct FFishRecognizeFragment : public FMassFragment
{
	GENERATED_BODY()
	float BoidsDetectRadius;
	float AvoidsDetectRadius;
	float ChasesDetectRadius;
};
USTRUCT()
struct FFishPlaceFragment : public FMassFragment
{
	GENERATED_BODY()
	Place place;
};
UCLASS()
class SEAOFMEMORY_API UBehaviorMassProcessor : public UMassProcessor
{
	GENERATED_BODY()
public:
	UBehaviorMassProcessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	virtual void Initialize(UObject& Owner) override;

	class UGridSubsystem* GridManager;

private:
	FMassEntityQuery EntityQuery;

	FVector SeparationRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight);	// boids알고리즘 - 분리
	FVector AlignmentRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight);		// boids알고리즘 - 정렬
	FVector CohesionRule(FTransform agent, TArray<FTransform> neighbors, float BoidsWeight);		// boids알고리즘 - 응집력

	FTransform FindClosestTransform(const TArray<FTransform>& TransformArray, const FTransform& TargetTransform);

	void BoidMovement(int32 EntityIndex, struct FishAttributes& Attribute, FTransform& t, FFishRecognizeFragment& Recognize);

	//void BoidMovement(int32 EntityIndex, struct FishAttributes& Attribute, FTransform& t, FFishRecognizeFragment& Recognize);

	ECollisionChannel GetPlaceChannel(Place place);
};
