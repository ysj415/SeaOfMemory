// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeciesRelationshipManager.h"

void USpeciesRelationshipManager::InitializeRelationships()
{

}

bool USpeciesRelationshipManager::CanPredate(ESpeciesType Predator, ESpeciesType Prey)
{
    const TArray<ESpeciesType>* PreyList = PredatorPreyRelationships.Find(Predator);
    return PreyList && PreyList->Contains(Prey);
}

bool USpeciesRelationshipManager::CanPrey(ESpeciesType Prey, ESpeciesType Predator)
{
    const TArray<ESpeciesType>* PreyList = PredatorPreyRelationships.Find(Predator);
    return PreyList && PreyList->Contains(Prey);
}

void USpeciesRelationshipManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    //PredatorPreyRelationships.Add(ESpeciesType::Predator, { ESpeciesType::Prey });
    //PredatorPreyRelationships.Add(ESpeciesType::Prey, {});
    //PredatorPreyRelationships.Add(ESpeciesType::Neutral, {});
}

void USpeciesRelationshipManager::Deinitialize()
{
    Super::Deinitialize();
}