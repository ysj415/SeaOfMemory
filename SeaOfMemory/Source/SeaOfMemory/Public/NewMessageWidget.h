// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NewMessageWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UNewMessageWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION()
	virtual void NativeConstruct() override;

	void update();

	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* Start;

	UPROPERTY(meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* End;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* NoticeText;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float TimerTime = 3.0f;

	UFUNCTION()
	void PlayEndAnim();

	UFUNCTION()
	void StopTimer();

	UFUNCTION()
	void NewMessageNoticeOn(FText name);

	UFUNCTION()
	bool isTimerActive();
private:
	FTimerHandle AnimTimerHandle;
};
