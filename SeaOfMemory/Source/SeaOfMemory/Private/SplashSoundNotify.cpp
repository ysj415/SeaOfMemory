// Fill out your copyright notice in the Description page of Project Settings.


#include "SplashSoundNotify.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "../SOMBaseCharacter.h"

void USplashSoundNotify::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
     if (!MeshComp || !MeshComp->GetOwner()) return;

    AActor* Owner = MeshComp->GetOwner();
    ASOMBaseCharacter* Character = Cast<ASOMBaseCharacter>(MeshComp->GetOwner());
    if (!Owner) return;

    SplashSoundCue.LoadSynchronous();
    UWSplashSoundCue.LoadSynchronous();
    if (Character->SwimModeState == SOMCharacterMovementMode::DIVEMODE)
    {
        if (UWSplashSoundCue)
        {

                UGameplayStatics::PlaySoundAtLocation(Owner->GetWorld(), UWSplashSoundCue.Get(), Owner->GetActorLocation());
        }
    }
    else
    {
        if (SplashSoundCue)
        {

                UGameplayStatics::PlaySoundAtLocation(Owner->GetWorld(), SplashSoundCue.Get(), Owner->GetActorLocation());
        }
    }
}
