// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MesageWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UMesageWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override; 


	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ListScrollBox;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* MessageScrollBox;

	UPROPERTY(meta = (BindWidget))
	class UImage* MessageBoxImage;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* MessageTargetName;

	UPROPERTY(meta = (BindWidget))
	class UButton* SelectButton;

	UPROPERTY(meta = (BindWidget))
	class USizeBox* ChoiceBox;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Choice1;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Choice2;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* Choice3;

	UPROPERTY(meta = (BindWidget))
	class UButton* ChoiceButton1;

	UPROPERTY(meta = (BindWidget))
	class UButton* ChoiceButton2;

	UPROPERTY(meta = (BindWidget))
	class UButton* ChoiceButton3;

	// 이미지 선택
	UPROPERTY(meta = (BindWidget))
	class UButton* ImageSelectButton;

	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* ImageSelectBox;

	UPROPERTY(meta = (BindWidget))
	class UButton* BackButton;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ImageSelectScrollBox;

	UFUNCTION()
	void SetChattingVisible(ESlateVisibility Vis);

	UFUNCTION(BlueprintCallable)
	void SetOneChoiceBox(FText text1);
	UFUNCTION(BlueprintCallable)
	void SetTwoChoiceBox(FText text1, FText text2);
	UFUNCTION(BlueprintCallable)
	void SetThreeChoiceBox(FText text1, FText text2, FText text3);

	UFUNCTION(BlueprintCallable)
	void ClearSubsystemMessageWidget();

	UFUNCTION()
	void AddMessageText(bool isMyMessage, FText text);

	UFUNCTION()
	void AddMessageImage( UTexture2D* Texture);
	UPROPERTY()
	FString CurrentMessageTarget;

	UFUNCTION(BlueprintCallable)
	void SetImageSelectButton();

	UFUNCTION(BlueprintCallable)
	void HiddenImageSelectButton();

	UFUNCTION(BlueprintCallable)
	void ClearImageBox();

private:
	class UMessageSubsystem* MessageSubsystem;
	class UImageSubsystem* ImageSubsystem;


	UPROPERTY()
	TArray<class UMessageListButton*> ListButtons;

	UFUNCTION()
	void AddMessageList(FText nameText, FString name);

	// 메시지 스크롤 보정 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float ErrorTolerance = 50.f;

	// 메시지 리스트 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess="true"))
	FMargin ListButtonPadding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FMargin ListTextPadding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FLinearColor ButtonColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FVector2D RenderScale;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int32 TextSize;

	// 메시지 내용 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FMargin MyMessagePadding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FLinearColor MyMessageColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FMargin TheOtherPersonMessagePadding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FLinearColor TheOtherPersonMessageColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FMargin TextPadding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FLinearColor TextColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FLinearColor CountTextColor;
	UFUNCTION()
	void OnListButtonClicked(FString name);

	UFUNCTION()
	void OnChoice1Clicked();

	UFUNCTION()
	void OnChoice2Clicked();

	UFUNCTION()
	void OnChoice3Clicked();

	UFUNCTION()
	void OnImageSelectClicked();

	UFUNCTION()
	void OnBackButtonClicked();

	UFUNCTION()
	void OnPhotoButtonClicked(int32 Value);

	//사진 추가
	void AddPhoto(UTexture2D* Photo);

	UPROPERTY()
	TArray<class UImage*> Images;
	UPROPERTY()
	TArray<class UHorizontalBox*> HorizontalBoxs;
	UPROPERTY()
	TArray<class UPhotoButton*> Buttons;

	UPROPERTY()
	int CurrentPhotoCount;		//현재 총 사진의 개수
	UPROPERTY()
	int32 SelectedPhotoIndex;	//현재 선택된 사진의 인덱스
};
