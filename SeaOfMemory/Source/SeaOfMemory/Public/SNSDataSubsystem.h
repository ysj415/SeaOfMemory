// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SNSDataSubsystem.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class SNSMenuMod : uint8
{
	WebView UMETA(DisplayName = "WebView"),
	TweetView UMETA(DisplayName = "TweetView"),
	TweetPost UMETA(DisplayName = "TweetPost")
};

UCLASS()
class SEAOFMEMORY_API USNSDataSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	USNSDataSubsystem();
	UFUNCTION(BlueprintCallable)
	void ResetSubsystemData();

	void SetToken(FString token);
	FString GetToken();

	bool IsTokenEnabled();

	void AddMediaIds(FString id);
	TArray <FString> GetMediaIds();

	void SetCurrentMenu(SNSMenuMod menu);
	UFUNCTION(BlueprintCallable, BlueprintPure)
	SNSMenuMod GetCurrentMenu();

	void SetSelectedPhoto(class UPhotoData* Photo);
	class UPhotoData* GetSelectedPhoto();

	void DeleteSelectedPhoto();

	void CompleteUpload();
	//UTexture2D* GetTextureforId(FString MediaIds);
	UPROPERTY()
	TArray<FString> MediaIds;
	UPROPERTY()
	TArray<UPhotoData*> Textures;
private:
	// Access토큰
	FString BearerAccessToken;

	// 게시물 아이디

	SNSMenuMod CurrentMenu;
	UPROPERTY()
	class UPhotoData* SelectedPhoto;
};
