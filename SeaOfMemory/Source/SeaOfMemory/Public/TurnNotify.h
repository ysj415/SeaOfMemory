// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TurnNotify.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UTurnNotify : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SoundCue")
	TSoftObjectPtr<class USoundCue> TurnSoundCue;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SoundCue")
	TSoftObjectPtr<class USoundCue> UWTurnSoundCue;

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

};
