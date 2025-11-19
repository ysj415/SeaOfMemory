// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraWidget.h"
#include "Components/Image.h"
#include "SOMGameDataBase.h"
#include <Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h>
#include "Engine/Canvas.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/CanvasPanel.h"

UCameraWidget::UCameraWidget(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
}

void UCameraWidget::NativeConstruct()
{
	Super::NativeConstruct();

}

void UCameraWidget::blinkingScreen()
{
	BlackSpace->SetVisibility(ESlateVisibility::Visible);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UCameraWidget::HiddenBlackScreen, ShutterTime, false);
}

void UCameraWidget::UpdateFocalBar(float currentfocal, float MaxFocal, float MinFocal)
{
	float TotalFocalBar = MAX_FOCALPOINTER - MIN_FOCALPOINTER;
	float TotalCameraFocal = MaxFocal - MinFocal;
	float CurrentFocalBar = currentfocal * TotalFocalBar / TotalCameraFocal - (TotalFocalBar / 2);
	UCanvasPanelSlot* canvasslot = UWidgetLayoutLibrary::SlotAsCanvasSlot(FocalPointer);
	if (canvasslot)
	{
		FVector2D CurrentPosition = canvasslot->GetPosition();
		canvasslot->SetPosition(FVector2D(CurrentFocalBar, CurrentPosition.Y));
	}
}

void UCameraWidget::UpdateLastPhoto(UTexture2D* Image)
{
	LastPhoto->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));

	LastPhoto->SetBrushFromTexture(Image);
}

void UCameraWidget::NewCollectionRegistered(ESpecies BestSpecies)
{
	NewCollctionRegistered.Broadcast(BestSpecies);

}

void UCameraWidget::ResetLastPhoto()
{
	LastPhoto->SetColorAndOpacity(FLinearColor(0.f, 0.f, 0.f, 1.f));
}

void UCameraWidget::DrawTargetCircle(TArray<FVector2D> TargetLocation)
{
	int32 Imagenum = TargetImages.Num();
	int32 Targetnum= TargetLocation.Num();

	FVector2D ViewportSize;
	GEngine->GameViewport->GetViewportSize(ViewportSize);

	UImage* NewImage;

	if (Imagenum < Targetnum)
	{
		FSlateBrush Brush;
		Brush.SetResourceObject(TargetImagePtr.LoadSynchronous());
		Brush.ImageSize = FVector2D(circleSize, circleSize);

		for (int i = 0; i < Targetnum - Imagenum; i++)
		{
			NewImage = NewObject<UImage>(this);
			NewImage->SetBrush(Brush);
			
			FLinearColor color;
			color.R = circleColor;
			color.G = circleColor;
			color.B = circleColor;
			color.A = circleOpacity;

			NewImage->SetColorAndOpacity(color);

			MyCanvasPanel->AddChild(NewImage);
			TargetImages.Add(NewImage);
		}
	}
	else if (Imagenum > Targetnum)
	{
		for (int i = 1; i <= Imagenum - Targetnum; i++)
		{
			MyCanvasPanel->RemoveChild(TargetImages[Imagenum - i]);
			TargetImages.RemoveAt(Imagenum - i);
		}
	}
	else if(Imagenum == Targetnum)
	{
	}

	UCanvasPanelSlot* canvasslot;

	if (TargetImages.Num() == TargetLocation.Num())
	{
		for (int i = 0; i < TargetLocation.Num(); i++)
		{
			FWidgetTransform transform;
			canvasslot = UWidgetLayoutLibrary::SlotAsCanvasSlot(TargetImages[i]);
			FAnchors anchor;
			
			float halfCircleSize = circleSize / 2.f;
			anchor.Minimum = FVector2D((TargetLocation[i].X - halfCircleSize) / ViewportSize.X, (TargetLocation[i].Y - halfCircleSize) / ViewportSize.Y);
			anchor.Maximum = FVector2D((TargetLocation[i].X + halfCircleSize) / ViewportSize.X, (TargetLocation[i].Y + halfCircleSize) / ViewportSize.Y);
			
			canvasslot->SetAnchors(anchor);
			//canvasslot->SetPosition(TargetLocation[i] );
			canvasslot->SetSize(FVector2D(32,32));

			canvasslot->SetAlignment(FVector2D(0.5f, 0.5f));
			//transform.Translation = TargetLocation[i];
			//TargetImages[i]->SetRenderTransform(transform);
		}
	}
	else
	{
		UE_LOG(LogTemp,Warning, TEXT("Imagenum != Targetnum: %d != %d"), TargetImages.Num(), TargetLocation.Num())
		return;
	}
}

void UCameraWidget::HiddenBlackScreen()
{
	BlackSpace->SetVisibility(ESlateVisibility::Hidden);
}
