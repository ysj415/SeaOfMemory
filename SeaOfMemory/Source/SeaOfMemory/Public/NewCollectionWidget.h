// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SOMGameDataBase.h"
#include "NewCollectionWidget.generated.h"

/**
 * 
 */

UCLASS()
class SEAOFMEMORY_API UNewCollectionWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* OpenAnimation;

    UPROPERTY(meta = (BindWidgetAnim), Transient)
    UWidgetAnimation* CloseAnimation;


    UPROPERTY(BlueprintReadWrite)
    class ASOMBaseCharacter* MyCharacter;


    class UIllustratedGuideSubsystem* GuideSubsystem;
public:
    virtual void NativeConstruct() override;

    virtual void NativeOnInitialized() override;

    void PlayOpenAnimation();

    void PlayCloseAnimation();

    void SetSpecies(ESpecies Species);

    UPROPERTY(meta = (BindWidget))
    class UImage* CollectionImage;

    UPROPERTY(meta = (BindWidget))
    class UButton* CheckButton;

    UPROPERTY(meta = (BindWidget))
    class UMultiLineEditableTextBox* CollectionName;

    UPROPERTY(meta = (BindWidget))
    class UMultiLineEditableTextBox* CollectionExplain;

    FWidgetAnimationDynamicEvent AnimFinished;

    const void SetCharacter(ASOMBaseCharacter* Character);

    UFUNCTION(BlueprintCallable)
    void SetCameraWidget();
};
