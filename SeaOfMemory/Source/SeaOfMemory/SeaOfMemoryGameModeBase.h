// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SeaOfMemoryGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API ASeaOfMemoryGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ASeaOfMemoryGameModeBase();
	~ASeaOfMemoryGameModeBase();

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

private:
	UPROPERTY(EditAnywhere, Category="Image")
	TSoftObjectPtr<UTexture2D> EmptyImage;

	UPROPERTY(EditAnywhere, Category = "Image")
	TSoftObjectPtr<UTexture2D> NullSkill;

	UPROPERTY(EditAnywhere, Category = "Image")
	TSoftObjectPtr<UTexture2D> AquaJetIcon;

	UPROPERTY(EditAnywhere, Category = "Image")
	TSoftObjectPtr<UTexture2D> ActiveCamouflageIcon;

	UPROPERTY(EditAnywhere, Category = "Image")
	TSoftObjectPtr<UTexture2D> ResidualbaitIcon;

	UPROPERTY(EditAnywhere, Category = "Image")
	TSoftObjectPtr<UTexture2D> RepellentIcon;

	class UIllustratedGuideSubsystem* GuideSubsystem;
	class USkillSubsystem* SkillSubsystem;
	class UMessageSubsystem* MessageSubsystem;

	UPROPERTY(EditAnywhere, Category = "Message")
	float MessageIntervel;
};
