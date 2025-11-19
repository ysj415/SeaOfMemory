// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ImageUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UImageUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	virtual void NativeOnInitialized() override;

	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	void SetMainImage(int i);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D HorizontalBoxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin HorizontalBoxPadding;

	UFUNCTION()
	void OnButtonClicked(int32 Value);
	UFUNCTION()
	void OnDeleteButtonClicked();
	UFUNCTION()
	void OnShareButtonClicked();
	UFUNCTION()
	FText GetSpeciesName(ESpecies species);
protected:
	UPROPERTY(meta = (BindWidget))
	class UImage* MainImage;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ScrollBox;

	UPROPERTY(meta = (BindWidget))
	class UButton* DeleteButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* ShareButton;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* EmptyText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* SpeciesText;
private:
	class UImageSubsystem* ImageSubsystem;
	class USNSDataSubsystem* SnsSubsystem;


	TArray<UTexture2D*> Textures;

	int CurrentPhotoCount;		//현재 총 사진의 개수

	int32 SelectedPhotoIndex;	//현재 선택된 사진의 인덱스

	//사진 추가
	void AddPhoto(UTexture2D* Photo);

	TArray<class UImage*> Images;
	TArray<class UHorizontalBox*> HorizontalBoxs;
	TArray<class UPhotoButton*> Buttons;

	class UImage* LastSelectedImage;

	// 메인 이미지 활성화 함수
	void SetMainImageVisibility(ESlateVisibility InVisibility);

	class APlayerController* PlayerController;

	UPROPERTY(meta = (AllowPrivateAccess = "true"))
	class ASOMBaseCharacter* SOMCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoxSize", meta = (AllowPrivateAccess = "true"))
	FVector ScrollBoxSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoxSize", meta = (AllowPrivateAccess = "true"))
	float imagehalfsize = 500.f;
};
