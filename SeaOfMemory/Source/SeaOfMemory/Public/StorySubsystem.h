// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StorySubsystem.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class QuestLine : uint8
{
	OpenPhone UMETA(DisplayName = "OpenPhone"),
	DrivingBoat UMETA(DisplayName = "DrivingBoat"),
	GotoUnderWater UMETA(DisplayName = "GotoUnderWater"),
	Engine UMETA(DisplayName = "Engine"),
	GotoBoat UMETA(DisplayName = "GotoBoat"),
	ShipPhone UMETA(DisplayName = "ShipPhone"),
	GotoShip UMETA(DisplayName = "GotoShip"),
	Item UMETA(DisplayName = "Item"),
	CompletetoGetItem UMETA(DisplayName = "CompletetoGetItem"),
	Clear UMETA(DisplayName = "Clear"),
};

UCLASS()
class SEAOFMEMORY_API UStorySubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UStorySubsystem();
	UFUNCTION(BlueprintCallable)
	void ResetSubsystemData();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	QuestLine CurrentLine;

	UFUNCTION(BlueprintCallable)
	void ClearCurrentQuest();


	UFUNCTION(BlueprintCallable)
	void CollectorEvent();

	UFUNCTION(BlueprintCallable)
	void KidEvent();
private:

};
