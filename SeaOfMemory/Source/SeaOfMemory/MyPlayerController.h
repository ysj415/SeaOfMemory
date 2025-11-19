// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 *
 */
UCLASS()
class SEAOFMEMORY_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AMyPlayerController();
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	TSoftObjectPtr<class UInputMappingContext> InputMapping;
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	TSoftObjectPtr<class UInputAction> MovamentInput;
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	TSoftObjectPtr<class UInputAction> RotateInput;
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	TSoftObjectPtr<class UInputAction> SetCameraInput;
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	TSoftObjectPtr<class UInputAction> LeftMouseInput;
	UPROPERTY(EditAnywhere, Category = "Input Mapping")
	TSoftObjectPtr<class UInputAction> SwimUpDwon;

	UPROPERTY(EditAnywhere, Category = "Sound")
	class USoundBase* ShutterSound;
public:
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void MovementTriggeredCallBack(const struct FInputActionInstance& instance);

	UFUNCTION()
	void MovementCompletedCallBack(const struct FInputActionInstance& instance);

	UFUNCTION()
	void MovementStartedCallBack(const struct FInputActionInstance& instance);

	UFUNCTION()
	void RotateCallBack(const struct FInputActionInstance& instance);

	UFUNCTION(BlueprintCallable)
	void SetCameraModeCallBack(/*const struct FInputActionInstance& instanc*/);

	UFUNCTION(BlueprintCallable)
	void LeftMouseCallBack(/*const struct FInputActionInstance& instance*/);

	UFUNCTION()
	void SwimUpDownTriggeredCallBack(const struct FInputActionInstance& instance);
	UFUNCTION()
	void SwimUpDownStartedCallBack(const struct FInputActionInstance& instance);
	UFUNCTION()
	void SwimUpDownCompletedCallBack(const struct FInputActionInstance& instance);
	//UInputAction* GetMovementInputAction() { return MovamentInput.Get(); }
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RightValue")
	float RightValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RightValue")
	FVector a_vector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RightValue")
	FVector b_vector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RightValue")
	FVector c_vector;



private:
	APawn* ControlledPawn;
	class ASOMBaseCharacter* SOMCharacter;
};
