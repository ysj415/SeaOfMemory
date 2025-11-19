// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SOMGameDataBase.h"
#include "SkillUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API USkillUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* AquaJetButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ActiveCamouflage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* BaitButton;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Repellent;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Purchase;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Tank;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Speed;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Breath;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* SkillNameTextBlock;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* SkillCostTextBlock;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* SkillPointCount;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UMultiLineEditableTextBox* Detail;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* SelectSkill1;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* SelectSkill2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* CantChangeSkill;

	FTimerHandle SkillChangeMasageTimerHandle;
private:
	class USkillSubsystem* SkillSubsystem;

	SkillName SelectSkillName;
private:
	UFUNCTION(BlueprintCallable)
	void AquaJetButtonClick();
	UFUNCTION(BlueprintCallable)
	void ActiveCamouflageClick();
	UFUNCTION(BlueprintCallable)
	void BaitButtonClick();
	UFUNCTION(BlueprintCallable)
	void RepellentClick();
	UFUNCTION(BlueprintCallable)
	void TankClick();
	UFUNCTION(BlueprintCallable)
	void SpeedClick();
	UFUNCTION(BlueprintCallable)
	void BreathClick();
	UFUNCTION(BlueprintCallable)
	void PurchaseClick();

	UFUNCTION(BlueprintCallable)
	void SelectSkill1Click();
	UFUNCTION(BlueprintCallable)
	void SelectSkill2Click();

	UFUNCTION(BlueprintCallable)
	void UpdateSkillPoint();


	void SkillChangeMasageTimerFunction();

	UFUNCTION()
	void SetSellectedSkill(FText Name, int32 Cost, FText Explain, SkillName skillname);
public:
};
