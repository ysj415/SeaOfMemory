// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Public/SpeciesType.h"
#include "SOMGameDataBase.h"
#include "FishSwarmSubsystem.generated.h"

USTRUCT()
struct FishSwarm
{
	GENERATED_BODY()
	FVector SwarmCenter = FVector(0.f, 0.f, 0.f);
	float TotalWeight = 0.f;
	FVector Velocity = FVector::ZeroVector;
	FVector TargetVelocity = FVector::ZeroVector;

	FVector TargetLocation = FVector::ZeroVector;

	void ResetTargetLocation(UWorld* world);

	bool first = true;
};


/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UFishSwarmSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	TMap<ESpecies, FishSwarm> FishSwarmData;
	void InitializeRelationships();
	void UpdateSwarmCenter(const TArrayView<struct FishAttributes>& Attributes);
	FishSwarm GetFishSwarm(ESpecies type) const;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};


