// Fill out your copyright notice in the Description page of Project Settings.


#include "SkillUserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/MultiLineEditableTextBox.h"
#include "SkillSubsystem.h"

void USkillUserWidget::NativeConstruct()
{
    if (AquaJetButton)
    {
        AquaJetButton->OnClicked.AddDynamic(this, &USkillUserWidget::AquaJetButtonClick);
    }
    if (ActiveCamouflage)
    {
        ActiveCamouflage->OnClicked.AddDynamic(this, &USkillUserWidget::ActiveCamouflageClick);
    }
    if (BaitButton)
    {
        BaitButton->OnClicked.AddDynamic(this, &USkillUserWidget::BaitButtonClick);
    }
    if (Repellent)
    {
        Repellent->OnClicked.AddDynamic(this, &USkillUserWidget::RepellentClick);
    }
    if (Tank)
    {
        Tank->OnClicked.AddDynamic(this, &USkillUserWidget::TankClick);
    }
    if (Speed)
    {
        Speed->OnClicked.AddDynamic(this, &USkillUserWidget::SpeedClick);
    }
    if (Breath)
    {
        Breath->OnClicked.AddDynamic(this, &USkillUserWidget::BreathClick);
    }
    if (Purchase)
    {
        Purchase->OnClicked.AddDynamic(this, &USkillUserWidget::PurchaseClick);
    }
    if (SkillNameTextBlock)
    {
        SkillNameTextBlock->SetText(FText::FromString(""));
    }
    if (SkillCostTextBlock)
    {
        SkillCostTextBlock->SetText(FText::FromString(""));
    }
    if (SelectSkill1)
    {
        SelectSkill1->OnClicked.AddDynamic(this, &USkillUserWidget::SelectSkill1Click);
    }
    if (SelectSkill2)
    {
        SelectSkill2->OnClicked.AddDynamic(this, &USkillUserWidget::SelectSkill2Click);
    }
    SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());

    SelectSkillName = SkillName::Null;

    UpdateSkillPoint();
}

void USkillUserWidget::AquaJetButtonClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", AQUAJET_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", AQUAJET_EXPLAIN);

    SetSellectedSkill(NameFormat, AQUAJET_COST, ExplainFormat, SkillName::AquaJet);
}

void USkillUserWidget::ActiveCamouflageClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", ACTIVECAMOUFLAGE_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", ACTIVECAMOUFLAGE_EXPLAIN);

    SetSellectedSkill(NameFormat, ACTIVECAMOUFLAGE_COST, ExplainFormat, SkillName::ActiveCamouflage);
}

void USkillUserWidget::BaitButtonClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", RESIDUALBAIT_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", RESIDUALBAIT_EXPLAIN);

    SetSellectedSkill(NameFormat, RESIDUALBAIT_COST, ExplainFormat, SkillName::ResidualBait);
}

void USkillUserWidget::RepellentClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", REPELLENT_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", REPELLENT_EXPLAIN);

    SetSellectedSkill(NameFormat, REPELLENT_COST, ExplainFormat, SkillName::Repellent);
}

void USkillUserWidget::TankClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", A_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", A_EXPLAIN);

    SetSellectedSkill(NameFormat, A_COST, ExplainFormat, SkillName::Tank);
}

void USkillUserWidget::SpeedClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", B_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", B_EXPLAIN);

    SetSellectedSkill(NameFormat, B_COST, ExplainFormat, SkillName::Speed);
}

void USkillUserWidget::BreathClick()
{
    FText NameFormat = NSLOCTEXT("CollectionNamespace", "Collection", C_SKILLNAME);
    FText ExplainFormat = NSLOCTEXT("CollectionNamespace", "Collection", C_EXPLAIN);

    SetSellectedSkill(NameFormat, C_COST, ExplainFormat, SkillName::Breath);
}

void USkillUserWidget::PurchaseClick()
{
    if (SkillSubsystem->UnlockSkill(SelectSkillName))
    {
        SkillCostTextBlock->SetText(NSLOCTEXT("SkillNamespace", "Skill", "구매 완료"));

        Purchase->SetIsEnabled(false);
    }
    UpdateSkillPoint();
}

void USkillUserWidget::SelectSkill1Click()
{
    if (SkillSubsystem->IsSkillUnlock(SelectSkillName))
    {
        //SkillSubsystem->SkillSlot1 = SelectSkillName;

        //UE_LOG(LogTemp, Warning, TEXT("SelectSkill1Click"));
        if (!SkillSubsystem->SkillSlotChange(1, SelectSkillName))
        {
            CantChangeSkill->SetVisibility(ESlateVisibility::Visible);

            //GetWorld()->GetTimerManager().ClearTimer(SkillChangeMasageTimerHandle);
            GetWorld()->GetTimerManager().SetTimer(SkillChangeMasageTimerHandle,
                this,
                &USkillUserWidget::SkillChangeMasageTimerFunction,
                1.0f,
                true);

            //GetWorld()->GetTimerManager().SetTimer(SkillChangeMasageTimerHandle,
            //    this,
            //    &USkillUserWidget::SkillChangeMasageTimerFunction,
            //    1.0f,
            //    true);
        }
    }
}

void USkillUserWidget::SelectSkill2Click()
{
    if (SkillSubsystem->IsSkillUnlock(SelectSkillName))
    {
        //SkillSubsystem->SkillSlot2 = SelectSkillName;

        //UE_LOG(LogTemp, Warning, TEXT("SelectSkill2Click"));
        if (!SkillSubsystem->SkillSlotChange(2, SelectSkillName))
        {
            CantChangeSkill->SetVisibility(ESlateVisibility::Visible);

            //GetWorld()->GetTimerManager().ClearTimer(SkillChangeMasageTimerHandle);
            GetWorld()->GetTimerManager().SetTimer(SkillChangeMasageTimerHandle,
                this,
                &USkillUserWidget::SkillChangeMasageTimerFunction,
                3.0f,
                false);
        }
    }
}

void USkillUserWidget::UpdateSkillPoint()
{
    SkillPointCount->SetText(FText::Format(NSLOCTEXT("SkillPointNamespace", "SkillPoint", "{0}"), SkillSubsystem->SkillPoint));
}

void USkillUserWidget::SkillChangeMasageTimerFunction()
{
    //UE_LOG(LogTemp, Warning, TEXT("SkillChangeMasageTimerFunction"));
    CantChangeSkill->SetVisibility(ESlateVisibility::Hidden);
}

void USkillUserWidget::SetSellectedSkill(FText Name, int32 Cost, FText Explain, SkillName skillname)
{
    if (SkillSubsystem->SkillDataMap[skillname].IsSkillUnlock)
    {

        SkillNameTextBlock->SetText(Name);

        SkillCostTextBlock->SetText(NSLOCTEXT("SkillNamespace", "Skill", "구매 완료"));
        Detail->SetText(Explain);

        Purchase->SetIsEnabled(false);

        SelectSkillName = skillname;
    }
    else
    {
        SkillNameTextBlock->SetText(Name);

        FText Format = FText::Format(NSLOCTEXT("SkillNamespace", "Skill", "{0}"), Cost);
        SkillCostTextBlock->SetText(Format);
        Detail->SetText(Explain);

        Purchase->SetIsEnabled(true);

        SelectSkillName = skillname;
    }
}
