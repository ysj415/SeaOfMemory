// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Public/SpeciesType.h"
#include "SpeciesRelationshipManager.generated.h"


/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API USpeciesRelationshipManager : public UGameInstanceSubsystem
{
    GENERATED_BODY()
public:
    TMap<ESpeciesType, TArray<ESpeciesType>> PredatorPreyRelationships;

    void InitializeRelationships();

    bool CanPredate(ESpeciesType Predator, ESpeciesType Prey);
    bool CanPrey(ESpeciesType Prey, ESpeciesType Predator);

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
};
