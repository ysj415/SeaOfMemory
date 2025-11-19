// Fill out your copyright notice in the Description page of Project Settings.


#include "Bait.h"
#include "SkillSubsystem.h"
#include "SOMGameDataBase.h"
#include "UGridSubsystem.h"
#include "NiagaraComponent.h"

// Sets default values
ABait::ABait()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    EffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AquajetNiagaraEffectComponent"));
    EffectComponent->SetupAttachment(RootComponent);
    EffectComponent->SetAutoActivate(false);
}

// Called when the game starts or when spawned
void ABait::BeginPlay()
{
	Super::BeginPlay();
    
    EffectComponent->Activate();
    GridIndex = FIntVector::ZeroValue;

    SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
    GridSubsystem = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());

    GridIndex = GridSubsystem->GetGridIndex(GetActorLocation());
    GridSubsystem->UpdateEntityLocation(-2, GetActorTransform(), ESpecies::Bait, GridIndex);

    GetWorld()->GetTimerManager().SetTimer(
        TimerHandle,
        this,       
        &ABait::TimerFunction,
        RESIDUALBAIT_COOLTIME,
        false       
    );
}

// Called every frame
void ABait::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABait::TimerFunction()
{
    GridSubsystem->RemoveGrid(-2, GridIndex);
    Destroy();
}

