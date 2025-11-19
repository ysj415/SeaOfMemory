// Fill out your copyright notice in the Description page of Project Settings.


#include "SNSDataSubsystem.h"
#include "ImageSubsystem.h"

USNSDataSubsystem::USNSDataSubsystem()
{
	BearerAccessToken.Empty();

	CurrentMenu = SNSMenuMod::WebView;
}

void USNSDataSubsystem::SetToken(FString token)
{
	BearerAccessToken = token;
}

FString USNSDataSubsystem::GetToken()
{
	return BearerAccessToken;
}

bool USNSDataSubsystem::IsTokenEnabled()
{
	if (!BearerAccessToken.IsEmpty())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void USNSDataSubsystem::AddMediaIds(FString id)
{
	MediaIds.Add(id);
}

TArray<FString> USNSDataSubsystem::GetMediaIds()
{
	return MediaIds;
}

void USNSDataSubsystem::SetCurrentMenu(SNSMenuMod menu)
{
	CurrentMenu = menu;
}

SNSMenuMod USNSDataSubsystem::GetCurrentMenu()
{
	return CurrentMenu;
}

void USNSDataSubsystem::SetSelectedPhoto(UPhotoData* Photo)
{
	UE_LOG(LogTemp, Log, TEXT(" USNSDataSubsystem::SetSelectedPhoto"))
	SelectedPhoto = Photo;
}

UPhotoData* USNSDataSubsystem::GetSelectedPhoto()
{
	return SelectedPhoto;
}

void USNSDataSubsystem::DeleteSelectedPhoto()
{
	SelectedPhoto = NULL;
}

void USNSDataSubsystem::CompleteUpload()
{
	Textures.Add(SelectedPhoto);
	DeleteSelectedPhoto();
}


void USNSDataSubsystem::ResetSubsystemData()
{
	SelectedPhoto = NULL;
	BearerAccessToken.Empty();
	MediaIds.Empty();
	Textures.Empty();
	CurrentMenu = SNSMenuMod::WebView;
}