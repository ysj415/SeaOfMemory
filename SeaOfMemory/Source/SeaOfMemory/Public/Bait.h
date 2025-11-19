// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bait.generated.h"

UCLASS()
class SEAOFMEMORY_API ABait : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABait();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FTimerHandle TimerHandle;

	class USkillSubsystem* SkillSubsystem;

	class UGridSubsystem* GridSubsystem;

	FIntVector GridIndex;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Niagara")
	class UNiagaraComponent* EffectComponent;

	UFUNCTION()
	void TimerFunction();
};
