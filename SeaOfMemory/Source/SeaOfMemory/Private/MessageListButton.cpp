// Fill out your copyright notice in the Description page of Project Settings.


#include "MessageListButton.h"

void UMessageListButton::InitializeButton()
{
	OnClicked.AddDynamic(this, &UMessageListButton::HandleButtonClicked);
}

void UMessageListButton::HandleButtonClicked()
{
	OnClickedButton.Broadcast(name);
}
