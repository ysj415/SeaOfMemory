// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWaterBodyOcean.h"
#include "SOMBaseCharacter.h"

AMyWaterBodyOcean::AMyWaterBodyOcean()
{
	//OnActorBeginOverlap.AddDynamic(this, &AMyWaterBodyOcean::OnOverlapBegin);
	//OnActorEndOverlap.AddDynamic(this, &AMyWaterBodyOcean::OnOverlapEnd);
}

void AMyWaterBodyOcean::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("OverlapBegin"));
	if (ASOMBaseCharacter* OtherCharacter = Cast< ASOMBaseCharacter>(OtherActor))
	{
		OtherCharacter->SetDiveMode();
		UE_LOG(LogTemp, Warning, TEXT("SetSwimmode"));

	}
}

void AMyWaterBodyOcean::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("OnOverlapEnd"));

	if (ASOMBaseCharacter* OtherCharacter = Cast< ASOMBaseCharacter>(OtherActor))
	{
		OtherCharacter->SetWalkingMode();
		UE_LOG(LogTemp, Warning, TEXT("SetDiveMode"));

	}
}

