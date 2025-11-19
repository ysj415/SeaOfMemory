// Fill out your copyright notice in the Description page of Project Settings.


#include "UnderWaterMovementAnimNotify.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"

void UUnderWaterMovementAnimNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    if (!MeshComp || !MeshComp->GetOwner()) return;

    AActor* Owner = MeshComp->GetOwner();
    if (!Owner) return;

    SwimSoundCue.LoadSynchronous();
    if (SwimSoundCue)
    {
        UE_LOG(LogTemp, Log, TEXT("Notify: SwimSoundCue is valid"))

            UGameplayStatics::PlaySoundAtLocation(Owner->GetWorld(), SwimSoundCue.Get(), Owner->GetActorLocation());
    }
}

