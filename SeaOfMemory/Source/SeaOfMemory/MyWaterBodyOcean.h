// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WaterBodyOceanActor.h"
#include "MyWaterBodyOcean.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API AMyWaterBodyOcean : public AWaterBodyOcean
{
	GENERATED_BODY()

public:
	AMyWaterBodyOcean();

	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
};