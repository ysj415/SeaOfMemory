// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/BackgroundBlur.h"

#include "SkillSubsystem.h"

void UCharacterWidget::NativeConstruct()
{
    NullSkill = SkillSubsystem->NullSkillIcon;
    AquaJet = SkillSubsystem->AquaJetIcon;
    ActiveCamouflage = SkillSubsystem->ActiveCamouflageIcon;
    Residualbait = SkillSubsystem->ResidualbaitIcon;
    Repellent = SkillSubsystem->RepellentIcon;
}

void UCharacterWidget::NativeOnInitialized()
{
    SkillSubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());

    NullSkill = SkillSubsystem->NullSkillIcon;
    AquaJet = SkillSubsystem->AquaJetIcon;
    ActiveCamouflage = SkillSubsystem->ActiveCamouflageIcon;
    Residualbait = SkillSubsystem->ResidualbaitIcon;
    Repellent = SkillSubsystem->RepellentIcon;

    if (Skill1)
    {
        if (NullSkill)
        {
            Skill1->SetBrushFromTexture((NullSkill));
        }
    }
    if (Skill2)
    {
        if (NullSkill)
        {
            Skill2->SetBrushFromTexture((NullSkill));
        }
    }

    OxygenTankPointerRandomTarget = FMath::RandRange(-OXYGENTANKANGLE_SHAKE, OXYGENTANKANGLE_SHAKE);
}

void UCharacterWidget::Skill1CoolTimeFuction()
{
    if (SkillSubsystem->MinusSKillCoolTime(1))
    {
        Skill1_Blur->SetVisibility(ESlateVisibility::Hidden);
        Skill1_CoolTime->SetVisibility(ESlateVisibility::Hidden);

        GetWorld()->GetTimerManager().ClearTimer(Skill1TimerHandle);
    }

    Skill1_CoolTime->SetText(FText::Format(NSLOCTEXT("SkillNamespace", "SkillCoolTime", "{0}"),
        SkillSubsystem->GetCooltimeRemain(1)));
}

void UCharacterWidget::Skill2CoolTimeFuction()
{
    if (SkillSubsystem->MinusSKillCoolTime(2))
    {
        Skill2_Blur->SetVisibility(ESlateVisibility::Hidden);
        Skill2_CoolTime->SetVisibility(ESlateVisibility::Hidden);

        GetWorld()->GetTimerManager().ClearTimer(Skill2TimerHandle);
    }

    Skill2_CoolTime->SetText(FText::Format(NSLOCTEXT("SkillNamespace", "SkillCoolTime", "{0}"),
        SkillSubsystem->GetCooltimeRemain(2)));
}

void UCharacterWidget::ChangeSkillSlot()
{
    //UE_LOG(LogTemp, Warning, TEXT("ChangeSkillSlot"));
    Skill1->SetBrushFromTexture(GetSkillImage(SkillSubsystem->SkillSlot1));
    Skill2->SetBrushFromTexture(GetSkillImage(SkillSubsystem->SkillSlot2));
}

void UCharacterWidget::VisibleWarningMasage()
{
    WarningMasage->SetText(NSLOCTEXT("SkillNamespace", "SkillCoolTime", USE_AQUAJET_ON_GROUND_EXPLAIN));
    WarningMasage->SetVisibility(ESlateVisibility::Visible);

    GetWorld()->GetTimerManager().SetTimer(WarningMasageHandle,
        this,
        &UCharacterWidget::WarninMasageTimerFunction,
        2.0f,
        false);
}

void UCharacterWidget::SetHpEffect(float hp)
{
    float hp_normal = (100.f - hp)/100.f;
    HPBar->SetColorAndOpacity(FLinearColor(1.0, 1.0, 1.0, hp_normal));
    LowHPEffect->SetColorAndOpacity(FLinearColor(1.0, 1.0, 1.0, hp_normal));
}

void UCharacterWidget::UpdateOxygen(float OxygenValue, float OxygenTankValue)
{
    float currentangle = OxygenTankPointer->GetRenderTransformAngle();
    float TotalAngle = MAX_OXYGENTANKANGLE - MIN_OXYGENTANKANGLE;
    float TotalOxygenTank = MAX_OXYGENTANK - MIN_OXYGENTANK;
    float a = TotalAngle / TotalOxygenTank;
    OxygenTankPointerShakeFloat = FMath::FInterpTo(OxygenTankPointerShakeFloat, OxygenTankPointerRandomTarget, GetWorld()->GetDeltaSeconds(), 10.f);
    float TargetAngle = OxygenTankValue * a + MIN_OXYGENTANKANGLE + OxygenTankPointerShakeFloat;

    if (FMath::IsNearlyEqual(OxygenTankPointerShakeFloat, OxygenTankPointerRandomTarget, 1.0f))
    {
        //UE_LOG(LogTemp, Warning, TEXT("IsNearlyEqual"));
        OxygenTankPointerRandomTarget = FMath::RandRange(-OXYGENTANKANGLE_SHAKE, OXYGENTANKANGLE_SHAKE);
    }

    OxygenTankPointer->SetRenderTransformAngle(FMath::FInterpTo(currentangle, TargetAngle, GetWorld()->GetDeltaSeconds(), 20.f));

    if (OxygenTankValue <= MIN_OXYGENTANK)
    {
        if (Oxygen->Visibility == ESlateVisibility::Hidden)
        {
            Oxygen->SetVisibility(ESlateVisibility::Visible);
            OxygenBG->SetVisibility(ESlateVisibility::Visible);
        }
    }
    else if(OxygenValue> (MAX_OXYGEN- MIN_OXYGEN)/2)
    {
        if (Oxygen->Visibility == ESlateVisibility::Visible)
        {
            Oxygen->SetVisibility(ESlateVisibility::Hidden);
            OxygenBG->SetVisibility(ESlateVisibility::Hidden);
        }
    }

    float OxygenBG_normal = (MAX_OXYGEN - OxygenValue) / MAX_OXYGEN;
    LowOxygenEffect->SetColorAndOpacity(FLinearColor(1.0, 1.0, 1.0, OxygenBG_normal*2));
    Blurforbreath->SetBlurStrength(OxygenBG_normal * Max_BreathBlurValue);
    if (Oxygen->Visibility == ESlateVisibility::Visible)
    {
        OxygenBG->SetColorAndOpacity(FLinearColor(1.0, 1.0, 1.0, OxygenBG_normal /2.f));
    }
}

void UCharacterWidget::OxygenTankPointerTurnOn_Implementation()
{
}

void UCharacterWidget::OxygenTankPointerTurnOff_Implementation()
{
}



void UCharacterWidget::OxygenTankPointerOnOff()
{
    if (OxygenTankPointerState == true)
    {
        OxygenTankPointerTurnOff();
        OxygenTankPointerState = false;
    }
    else
    {
        OxygenTankPointerTurnOn();
        OxygenTankPointerState = true;
    }
}

void UCharacterWidget::SetOxygenTankPointerOff()
{
    //UE_LOG(LogTemp, Warning, TEXT("SetOxygenTankPointerOff"));
    if (OxygenTankPointerState == true)
    {
        float basicplayback = playback;
        playback = 2.5f;
        OxygenTankPointerTurnOff();
        OxygenTankPointerState = false;
        playback = basicplayback;
    }

}

bool UCharacterWidget::UseSkill1()
{
    if (SkillSubsystem->IsActive_Skill(1) && SkillSubsystem->SkillSlot1 != SkillName::Null)
    {
        GetWorld()->GetTimerManager().SetTimer(Skill1TimerHandle,
            this,
            &UCharacterWidget::Skill1CoolTimeFuction,
            1.0f, 
            true);

        Skill1_Blur->SetVisibility(ESlateVisibility::Visible);
        Skill1_CoolTime->SetVisibility(ESlateVisibility::Visible);
        SkillSubsystem->SetCoolTime(1);
        Skill1_CoolTime->SetText(FText::Format(NSLOCTEXT("SkillNamespace", "SkillCoolTime", "{0}"), 
            SkillSubsystem->GetCooltimeRemain(1)));
        return true;
    }
    return false;
}

bool UCharacterWidget::UseSkill2()
{
    if (SkillSubsystem->IsActive_Skill(2) && SkillSubsystem->SkillSlot2 != SkillName::Null)
    {
        GetWorld()->GetTimerManager().SetTimer(Skill2TimerHandle,
            this,
            &UCharacterWidget::Skill2CoolTimeFuction,
            1.0f,
            true );

        Skill2_Blur->SetVisibility(ESlateVisibility::Visible);
        Skill2_CoolTime->SetVisibility(ESlateVisibility::Visible);
        SkillSubsystem->SetCoolTime(2);
        Skill2_CoolTime->SetText(FText::Format(NSLOCTEXT("SkillNamespace", "SkillCoolTime", "{0}"),
            SkillSubsystem->GetCooltimeRemain(2)));
        return true;
    }
    return false;
}

void UCharacterWidget::WarninMasageTimerFunction()
{
    WarningMasage->SetVisibility(ESlateVisibility::Hidden);
}

bool UCharacterWidget::UseSkill(int32 skillslot)
{
    switch (skillslot)
    {
    case 1:
        return UseSkill1();
        break;
    case 2:
        return UseSkill2();
        break;
    }
    return false;
}

UTexture2D* UCharacterWidget::GetSkillImage(SkillName skillname)
{
    switch (skillname)
    {
    case SkillName::Null:
        return NullSkill;
        break;
    case SkillName::AquaJet:
        return AquaJet;
        break;
    case SkillName::ActiveCamouflage:
        return ActiveCamouflage;
        break;
    case SkillName::ResidualBait:
        return Residualbait;
        break;
    case SkillName::Repellent:
        return Repellent;
        break;
    }
    return NullSkill;
}

