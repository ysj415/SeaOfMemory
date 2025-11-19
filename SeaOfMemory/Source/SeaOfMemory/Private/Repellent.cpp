// Fill out your copyright notice in the Description page of Project Settings.


#include "Repellent.h"
#include "SkillSubsystem.h"
#include "SOMGameDataBase.h"
#include "UGridSubsystem.h"
#include "NiagaraComponent.h"

// Sets default values
ARepellent::ARepellent()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    EffectComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("AquajetNiagaraEffectComponent"));
    EffectComponent->SetupAttachment(RootComponent);
    EffectComponent->SetAutoActivate(false);
}

// Called when the game starts or when spawned
void ARepellent::BeginPlay()
{
    Super::BeginPlay();

    EffectComponent->Activate();

    SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
    GridSubsystem = UGameInstance::GetSubsystem<UGridSubsystem>(GetWorld()->GetGameInstance());

    GridIndex = GridSubsystem->GetGridIndex(GetActorLocation());
    GridSubsystem->UpdateEntityLocation(-3, GetActorTransform(), ESpecies::Repellent, GridIndex);

    GetWorld()->GetTimerManager().SetTimer(
        TimerHandle,
        this,
        &ARepellent::TimerFunction,
        REPELLENT_COOLTIME,
        false
    );
}

// Called every frame
void ARepellent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ARepellent::TimerFunction()
{
    GridSubsystem->RemoveGrid(-3, GridIndex);
    Destroy();
}

