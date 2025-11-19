// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterABAnimInstance.h"
#include "SOMBaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "KismetAnimationLibrary.h"

UCharacterABAnimInstance::UCharacterABAnimInstance()
{
	//Reset Variable
	Speed = 0;
	MyCharacter = NULL;

	ShouldMove = false;
	Velocity2D = FVector(0.f, 0.f, 0.f);
	isOver300 = OverVelocity::Under300;
	isFalling = false;
	RightValue = 0.f;
	Acceleration2D = FVector(0.f, 0.f, 0.f);
	HasAcceleration = false;
	HasVelocity = false;
	DisplacementSinceLastUpdate = 0.f;
	CurrentWorldLocation = FVector(0.f, 0.f, 0.f);
	DisplacementSpeed = false;

	isSwimming = false;
}

void UCharacterABAnimInstance::NativeInitializeAnimation()
{
	APawn* PawnOwner = TryGetPawnOwner();
	if (PawnOwner)
	{
		MyCharacter = Cast< ASOMBaseCharacter>(PawnOwner);
	}
	if (MyCharacter)
	{
		MyCharacterMovement = Cast<UCharacterMovementComponent>(MyCharacter->GetMovementComponent());
	}
}


void UCharacterABAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (MyCharacter && MyCharacterMovement)
	{

		// Set Speed & Velocity for Animation
		Velocity = MyCharacter->GetVelocity();
		Speed = Velocity.Size();


		FVector CurrentAcceleration = MyCharacterMovement->GetCurrentAcceleration();
		ShouldMove = (Speed > 3.0) && (CurrentAcceleration != FVector(0.f, 0.f, 0.f));

		if (Velocity2D.Size() > 300.f)
		{
			isOver300 = OverVelocity::Over300;
		}
		else
		{
			isOver300 = OverVelocity::Under300;
		}

		isFalling = MyCharacterMovement->IsFalling();

		RightValue = MyCharacter->RightValue;

		Acceleration2D = MyCharacterMovement->GetCurrentAcceleration() * FVector(1.f, 1.f, 0.f);
		HasAcceleration = !Acceleration2D.IsNearlyZero(0.0001);

		Velocity2D = Velocity * FVector(1.f, 1.f, 0.f);
		HasVelocity = !Velocity2D.IsNearlyZero(0.0001);
		FVector ActorLocation = MyCharacter->GetActorLocation();
		FVector v = ActorLocation - CurrentWorldLocation;
		DisplacementSinceLastUpdate = v.Size2D();
		CurrentWorldLocation = ActorLocation;
		DisplacementSpeed = UKismetMathLibrary::SafeDivide(DisplacementSinceLastUpdate, GetDeltaSeconds());

		if (MyCharacter->SwimModeState == SOMCharacterMovementMode::DIVEMODE || MyCharacter->SwimModeState == SOMCharacterMovementMode::SWIMMODE)
		{
			isSwimming = true;
		}
		else
		{
			isSwimming = false;
		}
	}
}
