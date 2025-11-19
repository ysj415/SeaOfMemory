// Fill out your copyright notice in the Description page of Project Settings.


#include "FishSwarmSubsystem.h"
#include "SwarmIntelligenceTrait.h"
void UFishSwarmSubsystem::InitializeRelationships()
{

}

void UFishSwarmSubsystem::UpdateSwarmCenter(const TArrayView<FishAttributes>& Attributes)
{
    UEnum* EnumPtr = StaticEnum< ESpecies>();

    for (int32 i = 0; i < EnumPtr->NumEnums() - 1; ++i)
    {
        ESpecies type = static_cast<ESpecies>(EnumPtr->GetValueByIndex(i));
        FishSwarmData[type].SwarmCenter = FVector::ZeroVector;
        FishSwarmData[type].TotalWeight = 0.0f;
    }

    //for (ESpecies type : { ESpecies::Fish1, ESpecies::Fish2, ESpecies::Fish3,
    //    ESpecies::Fish4})
    //{
    //    FishSwarmData[type].SwarmCenter = FVector::ZeroVector;
    //    FishSwarmData[type].TotalWeight = 0.0f;
    //}

    for (const FishAttributes& Fish : Attributes)
    {
        FishSwarmData[Fish.Type].SwarmCenter += Fish.CurrentPosition * Fish.Weight;
        FishSwarmData[Fish.Type].TotalWeight += Fish.Weight;
    }

    for (int32 i = 0; i < EnumPtr->NumEnums() - 1; ++i)
    {
        ESpecies type = static_cast<ESpecies>(EnumPtr->GetValueByIndex(i));
        if (FishSwarmData[type].first)
        {
            FishSwarmData[type].ResetTargetLocation(GetWorld());
            FishSwarmData[type].first = false;
        }
        if (FishSwarmData[type].TotalWeight > 0)
        {
            //FVector StartLoc = FishSwarmData[type].SwarmCenter;
            //FVector EndLoc = FishSwarmData[type].SwarmCenter / FishSwarmData[type].TotalWeight;
            //FishSwarmData[type].Velocity = (EndLoc - StartLoc).GetSafeNormal();
            //float Speed = FMath::FRandRange(0.7, 1.5);
            //FishSwarmData[type].SwarmCenter = EndLoc + FishSwarmData[type].Velocity * Speed;
            FishSwarmData[type].Velocity = FMath::VInterpTo(FishSwarmData[type].Velocity, FishSwarmData[type].TargetVelocity, GetWorld()->GetDeltaSeconds(), 1);
            if (FishSwarmData[type].SwarmCenter.Equals(FishSwarmData[type].TargetLocation, 100) || FishSwarmData[type].SwarmCenter.Equals(FVector::ZeroVector, 100))
                FishSwarmData[type].ResetTargetLocation(GetWorld());
        }
    }

    //for (ESpecies type : { ESpecies::Fish1, ESpecies::Fish2, ESpecies::Fish3,
    //    ESpecies::Fish4})
    //{
    //    if (FishSwarmData[type].first)
    //    {
    //        FishSwarmData[type].ResetTargetLocation(GetWorld());
    //        FishSwarmData[type].first = false;
    //    }
    //    if (FishSwarmData[type].TotalWeight > 0)
    //    {
    //        //FVector StartLoc = FishSwarmData[type].SwarmCenter;
    //        //FVector EndLoc = FishSwarmData[type].SwarmCenter / FishSwarmData[type].TotalWeight;
    //        //FishSwarmData[type].Velocity = (EndLoc - StartLoc).GetSafeNormal();
    //        //float Speed = FMath::FRandRange(0.7, 1.5);
    //        //FishSwarmData[type].SwarmCenter = EndLoc + FishSwarmData[type].Velocity * Speed;
    //        FishSwarmData[type].Velocity = FMath::VInterpTo(FishSwarmData[type].Velocity, FishSwarmData[type].TargetVelocity, GetWorld()->GetDeltaSeconds(), 1);
    //        if (FishSwarmData[type].SwarmCenter.Equals(FishSwarmData[type].TargetLocation, 100) || FishSwarmData[type].SwarmCenter.Equals(FVector::ZeroVector, 100))
    //            FishSwarmData[type].ResetTargetLocation(GetWorld());
    //    }
    //}
}

FishSwarm UFishSwarmSubsystem::GetFishSwarm(ESpecies type) const
{
    return FishSwarmData[type];
}

void UFishSwarmSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    
    UEnum* EnumPtr = StaticEnum< ESpecies>();

    for (int32 i = 0; i < EnumPtr->NumEnums() - 1; ++i)
    {
        FishSwarmData.Add(static_cast<ESpecies>(EnumPtr->GetValueByIndex(i)), FishSwarm());
    }
}

void UFishSwarmSubsystem::Deinitialize()
{
    Super::Deinitialize();

}

void FishSwarm::ResetTargetLocation(UWorld* world)
{
    FVector RandomVector = FVector(FMath::RandRange(-0.5, 0.5), FMath::RandRange(-0.5, 0.5), FMath::RandRange(-0.1, 0.1));
    RandomVector.Normalize();
    TargetLocation += RandomVector * FMath::RandRange(100, 500);

    TargetVelocity = TargetLocation - SwarmCenter;
    TargetVelocity.Normalize();

    FHitResult HitResult;
    FVector StartLocation = SwarmCenter;
    FVector tvel = Velocity;
    tvel.Normalize();
    FVector EndLocation = StartLocation + 600.f * tvel;
    bool bHit = world->LineTraceSingleByChannel(HitResult, StartLocation, EndLocation, ECC_Visibility);

    if (bHit)
    {
        TargetLocation = SwarmCenter - (TargetVelocity * FMath::RandRange(100, 500));
    }

}
