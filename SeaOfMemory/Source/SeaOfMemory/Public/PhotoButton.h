// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "PhotoButton.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnButtonClickedWithParam, int32, Value);

UCLASS()
class SEAOFMEMORY_API UPhotoButton : public UButton
{
	GENERATED_BODY()
public:
	UPhotoButton();

	void SetIndex(int32 num);
	int32 GetIndex(int32 num);

	UPROPERTY(BlueprintAssignable)
	FOnButtonClickedWithParam OnClickedWithParam;

	void InitializeButton();
private:
	UFUNCTION()
	void HandleButtonClicked();

	int32 Index;
};
