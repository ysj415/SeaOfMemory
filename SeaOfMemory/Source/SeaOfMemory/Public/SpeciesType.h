// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ESpeciesType : uint8
{
	Null UMETA(DisplayName = "null"),
	Anchovy UMETA(DisplayName = "Anchovy"),
	Bluetang1 UMETA(DisplayName = "Bluetang1"),
	Bluetang2 UMETA(DisplayName = "Bluetang2"),
	ButterflyFish1 UMETA(DisplayName = "ButterflyFish1"),
	ButterflyFish2 UMETA(DisplayName = "ButterflyFish2"),
	Clam UMETA(DisplayName = "Clam"),
	Clownfish UMETA(DisplayName = "Clownfish"),
	Colortetra UMETA(DisplayName = "Colortetra"),
	Firefish UMETA(DisplayName = "Firefish"),
	Shark UMETA(DisplayName = "Shark"),
	Skate UMETA(DisplayName = "Skate"),
	Sunfish UMETA(DisplayName = "Sunfish"),
	Turtle UMETA(DisplayName = "Turtle"),
	Whale UMETA(DisplayName = "Whale")
};

UENUM(BlueprintType)
enum class EFishBehaviorState : uint8
{
	Searching UMETA(DisplayName = "Searching"),
	Hunting UMETA(DisplayName = "Hunting"),
	Fleeing UMETA(DisplayName = "Fleeing"),
};
class SEAOFMEMORY_API SpeciesType
{
public:
	SpeciesType();
	~SpeciesType();
};
