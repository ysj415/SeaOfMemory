// Fill out your copyright notice in the Description page of Project Settings.


#include "NewMessageWidget.h"
#include "Components/TextBlock.h"

void UNewMessageWidget::NativeConstruct()
{

}

void UNewMessageWidget::update()
{
    PlayAnimation(Start);

    GetWorld()->GetTimerManager().SetTimer(
        AnimTimerHandle,
        this,
        &UNewMessageWidget::PlayEndAnim,
        TimerTime,
        false
    );
}

void UNewMessageWidget::PlayEndAnim()
{
    PlayAnimation(End);

    //RemoveFromViewport();
}

void UNewMessageWidget::StopTimer()
{
    GetWorld()->GetTimerManager().ClearTimer(AnimTimerHandle);

    PlayEndAnim();
}

void UNewMessageWidget::NewMessageNoticeOn(FText name)
{
    FText notice = FText::Format(NSLOCTEXT("Korean", "Korean", "[{0}] 새로운 메시지"), name);
    NoticeText->SetText(notice);
    if (GetWorld()->GetTimerManager().IsTimerActive(AnimTimerHandle))
    {
        GetWorld()->GetTimerManager().ClearTimer(AnimTimerHandle);
        GetWorld()->GetTimerManager().SetTimer(
            AnimTimerHandle,
            this,
            &UNewMessageWidget::PlayEndAnim,
            TimerTime,        
            false         
        );
    }
    else
    {
        //AddToViewport();
        update();
    }
}

bool UNewMessageWidget::isTimerActive()
{
    return GetWorld()->GetTimerManager().IsTimerActive(AnimTimerHandle);
}
