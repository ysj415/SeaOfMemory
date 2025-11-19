// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class SEAOFMEMORY_API CoordinateConversion
{
public:
	CoordinateConversion();
	~CoordinateConversion();

	UFUNCTION()
	static FVector ConversionViewportToEngine(FVector vector);
	UFUNCTION()
	static FVector ConversionEngineToViewport(FVector vector);

	UFUNCTION()
	static FRotator ConversionRotatorViewportToEngine(FRotator rotator);
	UFUNCTION()
	static FRotator ConversionRotatorEngineToViewport(FRotator rotator);
};
