// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "MessageListButton.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnListButtonClicked, FString, name);

UCLASS()
class SEAOFMEMORY_API UMessageListButton : public UButton
{
	GENERATED_BODY()
public:
	FString name;
	FOnListButtonClicked OnClickedButton;
	void InitializeButton();
private:
	UFUNCTION()
	void HandleButtonClicked();
};
