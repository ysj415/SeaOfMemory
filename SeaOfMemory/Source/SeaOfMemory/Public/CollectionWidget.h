// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SOMGameDataBase.h"
#include "CollectionWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UCollectionWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* AnchovyButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* AnchovyButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* AnchovyButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Bluetang1Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Bluetang1ButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Bluetang1ButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* Bluetang2Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Bluetang2ButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* Bluetang2ButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ButterflyFish1Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ButterflyFish1ButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* ButterflyFish1ButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ButterflyFish2Button;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ButterflyFish2ButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* ButterflyFish2ButtonImage;

	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UButton* ClamButton;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UTextBlock* ClamButtonText;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UImage* ClamButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ClownfishButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ClownfishButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* ClownfishButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* ColortetraButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* ColortetraButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* ColortetraButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* FirefishButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* FirefishButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* FirefishButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UButton* SharkButton;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* SharkButtonText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* SharkButtonImage;

	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UButton* SkateButton;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UTextBlock* SkateButtonText;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UImage* SkateButtonImage;

	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UButton* SunfishButton;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UTextBlock* SunfishButtonText;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UImage* SunfishButtonImage;

	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UButton* TurtleButton;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UTextBlock* TurtleButtonText;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UImage* TurtleButtonImage;


	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UButton* WhaleButton;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UTextBlock* WhaleButtonText;
	//UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	//class UImage* WhaleButtonImage;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UMultiLineEditableTextBox* ExplainText;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UImage* MainImage;
private:
	class UIllustratedGuideSubsystem* IllustratedGuideSubsystem;

	void CollectionButtonClick(UButton* button, ESpecies Species, FText Explain);

	UFUNCTION(BlueprintCallable)
	void AnchovyButtonClick();
	UFUNCTION(BlueprintCallable)
	void Bluetang1ButtonClick();
	UFUNCTION(BlueprintCallable)
	void Bluetang2ButtonClick();
	UFUNCTION(BlueprintCallable)
	void ButterflyFish1ButtonClick();
	UFUNCTION(BlueprintCallable)
	void ButterflyFish2ButtonClick();
	//UFUNCTION(BlueprintCallable)
	//void ClamButtonClick();
	UFUNCTION(BlueprintCallable)
	void ClownfishButtonClick();
	UFUNCTION(BlueprintCallable)
	void ColortetraButtonClick();
	UFUNCTION(BlueprintCallable)
	void FirefishButtonClick();
	UFUNCTION(BlueprintCallable)
	void SharkButtonClick();
	//UFUNCTION(BlueprintCallable)
	//void SkateButtonClick();
	//UFUNCTION(BlueprintCallable)
	//void SunfishButtonClick();
	//UFUNCTION(BlueprintCallable)
	//void TurtleButtonClick();
	//UFUNCTION(BlueprintCallable)
	//void WhaleButtonClick();

	UButton* SelectedButton;
};
