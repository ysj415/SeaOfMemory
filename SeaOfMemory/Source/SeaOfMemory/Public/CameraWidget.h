// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CameraWidget.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNewCollectionRegistered, ESpecies, BestSpecies);


UCLASS()
class SEAOFMEMORY_API UCameraWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UCameraWidget(const FObjectInitializer& ObjectInitializer);

	virtual void NativeConstruct() override;

	void blinkingScreen();
protected:
	UPROPERTY(meta = (BindWidget))
	class UCanvasPanel* MyCanvasPanel;

public:
	UPROPERTY(meta = (BindWidget))
	class UImage* CameraImage;
	
	UPROPERTY(meta = (BindWidget))
	class UImage* UnderBarImage;

	UPROPERTY(meta = (BindWidget))
	class UImage* BlackSpace;

	UPROPERTY(meta = (BindWidget))
	class UImage* FocalPointer;

	UPROPERTY(meta = (BindWidget))
	class UImage* LastPhoto;

	void UpdateFocalBar(float currentfocal, float MaxFocal, float MinFocal);

	void UpdateLastPhoto(UTexture2D* Image);

	UFUNCTION()
	void NewCollectionRegistered(ESpecies BestSpecies);

	FNewCollectionRegistered NewCollctionRegistered;

	// 마지막으로 찍은 사진 초기화
	UFUNCTION()
	void ResetLastPhoto();

	UPROPERTY()
	TArray<UImage*> TargetImages;

	UFUNCTION()
	void DrawTargetCircle(TArray<FVector2D> TargetLocation);

	UPROPERTY(EditAnywhere, Category = "Image")
	TSoftObjectPtr<UTexture2D> TargetImagePtr;
private:
	void HiddenBlackScreen();

	FTimerHandle TimerHandle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = ShutterTime, meta = (AllowPrivateAccess = "true"))
	float ShutterTime = 0.3f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TargetCircle", meta = (AllowPrivateAccess = "true"))
	float circleColor = 1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TargetCircle", meta = (AllowPrivateAccess = "true"))
	float circleOpacity = 1.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TargetCircle", meta = (AllowPrivateAccess = "true"))
	float circleSize = 32.0f;
};
