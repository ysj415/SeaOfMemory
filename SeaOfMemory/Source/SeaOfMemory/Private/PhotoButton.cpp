// Fill out your copyright notice in the Description page of Project Settings.


#include "PhotoButton.h"
#include "ImageUserWidget.h"

UPhotoButton::UPhotoButton()
{
	Index = 0;
}


void UPhotoButton::SetIndex(int32 num)
{
	Index = num;
}

int32 UPhotoButton::GetIndex(int32 num)
{
	return Index;
}

void UPhotoButton::InitializeButton()
{
	OnClicked.AddDynamic(this, &UPhotoButton::HandleButtonClicked);
}

void UPhotoButton::HandleButtonClicked()
{
	OnClickedWithParam.Broadcast(Index);
}
