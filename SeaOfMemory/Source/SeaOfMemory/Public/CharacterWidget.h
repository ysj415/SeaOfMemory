// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SOMGameDataBase.h"
#include "CharacterWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UCharacterWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	virtual void NativeOnInitialized() override;

	void Skill1CoolTimeFuction();

	void Skill2CoolTimeFuction();

	UFUNCTION(BlueprintCallable)
	void ChangeSkillSlot();


	UFUNCTION(BlueprintCallable)
	bool UseSkill(int32 skillslot);

	UFUNCTION(BlueprintCallable)
	UTexture2D* GetSkillImage(SkillName skillname);

	UPROPERTY()
	UTexture2D* NullSkill;
	UPROPERTY()
	UTexture2D* AquaJet;
	UPROPERTY()
	UTexture2D* ActiveCamouflage;
	UPROPERTY()
	UTexture2D* Residualbait;
	UPROPERTY()
	UTexture2D* Repellent;
	// -------------------------------스킬 아이콘 위젯 -------------------------------
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Skill1;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Skill2;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Skill1_Blur;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Skill2_Blur;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Skill1_CoolTime;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Skill2_CoolTime;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* WarningMasage;

	UFUNCTION(BlueprintCallable)
	void VisibleWarningMasage();

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* HPBar;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* LowHPEffect;
	
	void SetHpEffect(float hp);

	UFUNCTION(BlueprintCallable)
	void UpdateOxygen(float Oxygen, float OxygenTank);

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* OxygenTankPointer;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Oxygen;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* OxygenBG;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* LowOxygenEffect;

	UFUNCTION(BlueprintNativeEvent)
	void OxygenTankPointerTurnOn();
	UFUNCTION(BlueprintNativeEvent)

	void OxygenTankPointerTurnOff();

	UFUNCTION(BlueprintCallable)
	void OxygenTankPointerOnOff();
	UFUNCTION(BlueprintCallable)
	void SetOxygenTankPointerOff();

	UPROPERTY(BlueprintReadWrite)
	float playback = 1.0f;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UBackgroundBlur* Blurforbreath;

private:
	class USkillSubsystem* SkillSubsystem;

	FTimerHandle Skill1TimerHandle;
	FTimerHandle Skill2TimerHandle;

	FTimerHandle WarningMasageHandle;

	bool OxygenTankPointerState = false;

	float OxygenTankPointerShakeFloat = 0.f;
	float OxygenTankPointerRandomTarget;

private:
	bool UseSkill1();

	bool UseSkill2();

	void WarninMasageTimerFunction();
};
