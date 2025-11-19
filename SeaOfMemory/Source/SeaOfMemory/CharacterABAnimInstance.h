// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterABAnimInstance.generated.h"
/**
 * 
 */

UENUM(BlueprintType)
enum class OverVelocity : uint8
{
	Over300 UMETA(DisplayName = "Over300"),
	Under300 UMETA(DisplayName = "Under300")
};

UCLASS()
class SEAOFMEMORY_API UCharacterABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UCharacterABAnimInstance();

	// Initialize animation event handler
	virtual void NativeInitializeAnimation() override;

	// Update animation event handler
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
private:
	UPROPERTY(BlueprintReadOnly, Category="Animation Variables", Meta=(AllowPrivateAccess = true))
	float Speed;
	UPROPERTY(BlueprintReadWrite, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	FVector Velocity;

	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	class ASOMBaseCharacter* MyCharacter;
	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	class UCharacterMovementComponent* MyCharacterMovement;

	// Variable for Animation MotionWarping
	bool ShouldMove;
	FVector Velocity2D;
	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	OverVelocity isOver300;
	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	bool isFalling;
	float RightValue;
	FVector Acceleration2D;
	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	bool HasAcceleration;
	bool HasVelocity;
	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	float DisplacementSinceLastUpdate;
	FVector CurrentWorldLocation;
	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	float DisplacementSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "Animation Variables", Meta = (AllowPrivateAccess = true))
	bool isSwimming;
};
