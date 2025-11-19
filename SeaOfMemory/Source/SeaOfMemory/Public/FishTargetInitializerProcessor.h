// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassObserverProcessor.h"
#include "FishTargetInitializerProcessor.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UFishTargetInitializerProcessor : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UFishTargetInitializerProcessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;

	FMassEntityQuery EntityQuery;
};
