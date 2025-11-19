// Copyright Epic Games, Inc. All Rights Reserved.


#include "SeaOfMemoryGameModeBase.h"
#include "SOMBaseCharacter.h"
#include "IllustratedGuideSubsystem.h"
#include "SkillSubsystem.h"
#include "Public/MassageSubsystem.h"

ASeaOfMemoryGameModeBase::ASeaOfMemoryGameModeBase()
{
	DefaultPawnClass = ASOMBaseCharacter::StaticClass();
}

ASeaOfMemoryGameModeBase::~ASeaOfMemoryGameModeBase()
{

}

void ASeaOfMemoryGameModeBase::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	GuideSubsystem = UGameInstance::GetSubsystem<UIllustratedGuideSubsystem>(GetWorld()->GetGameInstance());
	GuideSubsystem->EmptyImage = EmptyImage.LoadSynchronous();
	if (GuideSubsystem->EmptyImage)
	{
		GuideSubsystem->LoadEmptyImage();
	}
	else
	{
		UE_LOG(LogTemp,Warning, TEXT("Empty Image is empty"))
	}

	SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
	SkillSubsystem->NullSkillIcon = NullSkill.LoadSynchronous();
	SkillSubsystem->AquaJetIcon = AquaJetIcon.LoadSynchronous();
	SkillSubsystem->ActiveCamouflageIcon = ActiveCamouflageIcon.LoadSynchronous();
	SkillSubsystem->ResidualbaitIcon = ResidualbaitIcon.LoadSynchronous();
	SkillSubsystem->RepellentIcon = RepellentIcon.LoadSynchronous();


	MessageSubsystem = UGameInstance::GetSubsystem<UMessageSubsystem>(GetWorld()->GetGameInstance());
	MessageSubsystem->MessageIntervel = MessageIntervel;
}
