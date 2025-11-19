// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassObserverProcessor.h"
#include "FishInitializerProcessor.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UFishInitializerProcessor : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UFishInitializerProcessor();
protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	virtual void Initialize(UObject& Owner) override;

private:
	FMassEntityQuery EntityQuery;

	class UGridSubsystem* GridSubsystem;
};
