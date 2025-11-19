// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnNotify.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "../SOMBaseCharacter.h"

void UTurnNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
    if (!MeshComp || !MeshComp->GetOwner()) return;

    AActor* Owner = MeshComp->GetOwner();
    if (!Owner) return;
    ASOMBaseCharacter* Character = Cast<ASOMBaseCharacter>(MeshComp->GetOwner());
    if (!Character) return;

    TurnSoundCue.LoadSynchronous();
    UWTurnSoundCue.LoadSynchronous();
    if (Character->SwimModeState == SOMCharacterMovementMode::DIVEMODE)
    {
        if (UWTurnSoundCue)
        {
            UE_LOG(LogTemp, Log, TEXT("Notify: UWTurnSoundCue is valid"))

                UGameplayStatics::PlaySoundAtLocation(Owner->GetWorld(), UWTurnSoundCue.Get(), Owner->GetActorLocation());
        }
    }
    else
    {
        if (TurnSoundCue)
        {
            UE_LOG(LogTemp, Log, TEXT("Notify: TurnSoundCue is valid"))

                UGameplayStatics::PlaySoundAtLocation(Owner->GetWorld(), TurnSoundCue.Get(), Owner->GetActorLocation());
        }
    }
}