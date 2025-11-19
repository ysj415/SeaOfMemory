// Fill out your copyright notice in the Description page of Project Settings.


#include "NewCollectionWidget.h"
#include "Components/Image.h"
#include "../SOMBaseCharacter.h"
#include "Components/Button.h"
#include "IllustratedGuideSubsystem.h"
#include "Components/MultiLineEditableTextBox.h"

void UNewCollectionWidget::SetCameraWidget()
{
    if (MyCharacter)
    {
        MyCharacter->OutNewCollection();
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UNewCollectionWidget::SetCameraWidget() is not bound! - Can't Find Character"));
    }
}

void UNewCollectionWidget::NativeConstruct()
{
    PlayOpenAnimation();

}

void UNewCollectionWidget::NativeOnInitialized()
{
    CheckButton->OnClicked.AddDynamic(this, &UNewCollectionWidget::SetCameraWidget);
}

void UNewCollectionWidget::PlayOpenAnimation()
{
    if (OpenAnimation)
    {
        PlayAnimation(OpenAnimation);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("OpenAnimation is not bound!"));
    }
}

void UNewCollectionWidget::PlayCloseAnimation()
{
    if (CloseAnimation)
    {
        BindToAnimationFinished(CloseAnimation, AnimFinished);
        PlayAnimation(CloseAnimation);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("CloseAnimation is not bound!"));
    }
}

void UNewCollectionWidget::SetSpecies(ESpecies Species)
{
    GuideSubsystem = UGameInstance::GetSubsystem<UIllustratedGuideSubsystem>(GetWorld()->GetGameInstance());

    FFishData* FishData = GuideSubsystem->GetFishData(Species);

    if (FishData)
    {
        UTexture2D* Texture = FishData->FishMainImage;
        if (CollectionImage && Texture)
        {
            CollectionImage->SetBrushFromTexture(Texture);
        }

        FText name = FishData->name;
        CollectionName->SetText(name);

        FText explain = FishData->explain;
        CollectionExplain->SetText(explain);
    }

}

const void UNewCollectionWidget::SetCharacter(ASOMBaseCharacter* Character)
{
    MyCharacter = Character;
}
