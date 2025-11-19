// Fill out your copyright notice in the Description page of Project Settings.


#include "MesageWidget.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"
#include "Components/ScrollBox.h"
#include "Components/Button.h"
#include "MassageSubsystem.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/ButtonSlot.h"
#include "SOMGameDataBase.h"
#include "MassageSubsystem.h"
#include "MessageListButton.h" 
#include "Components/Border.h"
#include "Components/BorderSlot.h"
#include "Components/SizeBox.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "PhotoButton.h"
#include "Components/CanvasPanelSlot.h"
#include "ImageSubsystem.h"

void UMesageWidget::NativeOnInitialized()
{
	MessageSubsystem = UGameInstance::GetSubsystem<UMessageSubsystem>(GetWorld()->GetGameInstance());
	ImageSubsystem = UGameInstance::GetSubsystem<UImageSubsystem>(GetWorld()->GetGameInstance());

	MessageSubsystem->MessageWidget = this;
	// 대화상대 목록 추가
	TArray<FString> Keys;
	MessageSubsystem->MessageDataMap.GenerateKeyArray(Keys);

	for (FString key : Keys)
	{
		FText NameText = MessageSubsystem->MessageDataMap[key]->Name;
		AddMessageList(NameText, key);
		MessageSubsystem->StartTimer(key);
	}

	// 선택창 바인드
	ChoiceButton1->OnClicked.AddDynamic(this, &UMesageWidget::OnChoice1Clicked);
	ChoiceButton2->OnClicked.AddDynamic(this, &UMesageWidget::OnChoice2Clicked);
	ChoiceButton3->OnClicked.AddDynamic(this, &UMesageWidget::OnChoice3Clicked);

	// 이미지 선택버튼 바인드
	ImageSelectButton->OnClicked.AddDynamic(this, &UMesageWidget::OnImageSelectClicked);
	BackButton->OnClicked.AddDynamic(this, &UMesageWidget::OnBackButtonClicked);
}

void UMesageWidget::NativeConstruct()
{
	SetChattingVisible(ESlateVisibility::Hidden);


}


void UMesageWidget::SetChattingVisible(ESlateVisibility Vis)
{
	MessageScrollBox->SetVisibility(Vis);
	MessageBoxImage->SetVisibility(Vis);
	MessageTargetName->SetVisibility(Vis);
	SelectButton->SetVisibility(Vis);
	HiddenImageSelectButton();
}

void UMesageWidget::SetOneChoiceBox(FText text1)
{
	ChoiceBox->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	ChoiceButton1->SetVisibility(ESlateVisibility::Visible);
	ChoiceButton2->SetVisibility(ESlateVisibility::Hidden);
	ChoiceButton3->SetVisibility(ESlateVisibility::Hidden);

	Choice1->SetText(text1);
}

void UMesageWidget::SetTwoChoiceBox(FText text1, FText text2)
{
	ChoiceBox->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	ChoiceButton1->SetVisibility(ESlateVisibility::Visible);
	ChoiceButton2->SetVisibility(ESlateVisibility::Visible);
	ChoiceButton3->SetVisibility(ESlateVisibility::Hidden);

	Choice1->SetText(text1);
	Choice2->SetText(text2);
}

void UMesageWidget::SetThreeChoiceBox(FText text1, FText text2, FText text3)
{
	ChoiceBox->SetVisibility(ESlateVisibility::SelfHitTestInvisible);

	ChoiceButton1->SetVisibility(ESlateVisibility::Visible);
	ChoiceButton2->SetVisibility(ESlateVisibility::Visible);
	ChoiceButton3->SetVisibility(ESlateVisibility::Visible);

	Choice1->SetText(text1);
	Choice2->SetText(text2);
	Choice2->SetText(text3);
}

void UMesageWidget::ClearSubsystemMessageWidget()
{
	MessageSubsystem->MessageWidget = NULL;

}

void UMesageWidget::AddMessageList(FText nameText, FString name)
{
	if (nameText.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("Text is empty"))
		return;
	}

	int32 notcheckcount = 0;
	for (FMessageContent content : MessageSubsystem->MessageDataMap[name]->MessageArray)
	{
		if (!content.isChecked)
		{
			notcheckcount++;
		}
	}

	UMessageListButton* NewButton = NewObject<UMessageListButton>(this);


	NewButton->SetBackgroundColor(ButtonColor);
	NewButton->SetRenderScale(RenderScale);

	NewButton->name = name;
	NewButton->InitializeButton();
	NewButton->OnClickedButton.AddDynamic(this, &UMesageWidget::OnListButtonClicked);

	if (NewButton == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMesageWidget: NewButton Create Fail"))
	}

	UScrollBoxSlot* BoxSlot = static_cast<UScrollBoxSlot*>(ListScrollBox->AddChild(NewButton));

	BoxSlot->SetSize(ESlateSizeRule::Automatic);
	BoxSlot->SetHorizontalAlignment(HAlign_Fill);
	BoxSlot->SetVerticalAlignment(VAlign_Fill);
	BoxSlot->SetPadding(ListButtonPadding);

	UTextBlock* NewText = NewObject<UTextBlock>(this);
	NewText->SetText(nameText);
	FSlateFontInfo font = NewText->GetFont();
	font.Size = TextSize;
	NewText->SetFont(font);
	UButtonSlot* ButtonSlot = static_cast<UButtonSlot*>(NewButton->AddChild(NewText));
	
	ButtonSlot->SetHorizontalAlignment(HAlign_Left);
	ButtonSlot->SetVerticalAlignment(VAlign_Center);
	ButtonSlot->SetPadding(ListTextPadding);

}

void UMesageWidget::AddMessageText(bool isMyMessage, FText text)
{

	//위젯 생성
	UBorder* NewBorder = NewObject<UBorder>(this);
	UScrollBoxSlot* BoxSlot = static_cast<UScrollBoxSlot*>(MessageScrollBox->AddChild(NewBorder));

	BoxSlot->SetSize(ESlateSizeRule::Automatic);
	BoxSlot->SetVerticalAlignment(VAlign_Fill);

	UTextBlock* NewText = NewObject<UTextBlock>(this);
	UBorderSlot* BorderSlot = static_cast<UBorderSlot*>(NewBorder->AddChild(NewText));

	BorderSlot->SetPadding(TextPadding);
	BorderSlot->SetHorizontalAlignment(HAlign_Fill);
	BorderSlot->SetVerticalAlignment(VAlign_Fill);
	NewText->SetColorAndOpacity(TextColor);
	NewText->SetAutoWrapText(true);
	NewText->SetText(text);

	// 메시지 구분
	if (isMyMessage)
	{
		// 내 메시지 - 오른쪽에 표시
		BoxSlot->SetPadding(MyMessagePadding);
		BoxSlot->SetHorizontalAlignment(HAlign_Right);
		NewBorder->SetBrushColor(MyMessageColor);
	}
	else
	{
		// 상대 메시지 - 왼쪽에 표시
		BoxSlot->SetPadding(TheOtherPersonMessagePadding);
		BoxSlot->SetHorizontalAlignment(HAlign_Left);
		NewBorder->SetBrushColor(TheOtherPersonMessageColor);
	}

	// 스크롤이 맨 아래면 위치 보청
	float Current = MessageScrollBox->GetScrollOffset();
	float End = MessageScrollBox->GetScrollOffsetOfEnd();

	UE_LOG(LogTemp, Log, TEXT("MessgeScrollBox Current To End : %f"), End - Current)

	bool bIsAtEnd = FMath::IsNearlyEqual(Current, End, ErrorTolerance);

	if (bIsAtEnd)		// 스크롤이 맨 아래면
	{
		MessageScrollBox->ScrollToEnd();	// 맨 아래로 위치 변경
	}
}

void UMesageWidget::AddMessageImage(UTexture2D* Texture)
{

	//위젯 생성
	UBorder* NewBorder = NewObject<UBorder>(this);
	UScrollBoxSlot* BoxSlot = static_cast<UScrollBoxSlot*>(MessageScrollBox->AddChild(NewBorder));

	BoxSlot->SetSize(ESlateSizeRule::Automatic);
	BoxSlot->SetVerticalAlignment(VAlign_Fill);

	UImage* NewImage = NewObject<UImage>(this);
	UBorderSlot* BorderSlot = static_cast<UBorderSlot*>(NewBorder->AddChild(NewImage));

	BorderSlot->SetPadding(TextPadding);
	BorderSlot->SetHorizontalAlignment(HAlign_Fill);
	BorderSlot->SetVerticalAlignment(VAlign_Fill);

	UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(MessageScrollBox->Slot);
	float WidthRatio = 0;
	float Width = 0;
	float Length = 0;
	if (PanelSlot)
	{
		FVector2D ViewportSize;
		GEngine->GameViewport->GetViewportSize(ViewportSize);
		WidthRatio = PanelSlot->GetAnchors().Maximum.X - PanelSlot->GetAnchors().Minimum.X;
		Width = ViewportSize.X * WidthRatio;
		Length = Width * ((float)Texture->GetSizeY() / Texture->GetSizeX());
	}
	FSlateBrush Brush;
	Brush.SetResourceObject(Texture);
	Brush.ImageSize = FVector2D(Width, Length);

	NewImage->SetBrush(Brush);



	// 내 메시지 - 오른쪽에 표시
	BoxSlot->SetPadding(MyMessagePadding);
	BoxSlot->SetHorizontalAlignment(HAlign_Right);
	NewBorder->SetBrushColor(MyMessageColor);


	// 스크롤이 맨 아래면 위치 보청
	float Current = MessageScrollBox->GetScrollOffset();
	float End = MessageScrollBox->GetScrollOffsetOfEnd();

	bool bIsAtEnd = FMath::IsNearlyEqual(Current, End, ErrorTolerance);

	if (bIsAtEnd)		// 스크롤이 맨 아래면
	{
		MessageScrollBox->ScrollToEnd();	// 맨 아래로 위치 변경
	}
}

void UMesageWidget::SetImageSelectButton()
{
	ImageSelectButton->SetVisibility(ESlateVisibility::Visible);
}

void UMesageWidget::HiddenImageSelectButton()
{
	ImageSelectButton->SetVisibility(ESlateVisibility::Hidden);
}

void UMesageWidget::ClearImageBox()
{
	Images.Empty();
	HorizontalBoxs.Empty();
	Buttons.Empty();
	ImageSelectScrollBox->ClearChildren();

	CurrentPhotoCount = 0;
	SelectedPhotoIndex = -1;
}


void UMesageWidget::OnListButtonClicked(FString name)
{
	MessageScrollBox->ClearChildren();
	if (!MessageSubsystem)
	{
		UE_LOG(LogTemp, Warning, TEXT("UMesageWidget: Cant find MessageSubsystem"));
		return;
	}

	if (!MessageSubsystem->MessageDataMap.Contains(name))
	{
		UE_LOG(LogTemp, Warning, TEXT("MessageDataMap not contains name - name: %s"), *name);
		return;
	}

	ChoiceBox->SetVisibility(ESlateVisibility::Hidden);

	SetChattingVisible(ESlateVisibility::Visible);

	CurrentMessageTarget = name;

	UMessageData* data = MessageSubsystem->MessageDataMap[name];

	MessageTargetName->SetText(data->Name);

	for (FMessageContent content : data->MessageArray)
	{
		// 읽음 표시
		content.isChecked = true;

		if (content.isImage)
		{
			AddMessageImage(content.Texture);
		}
		else
		{
			AddMessageText(content.isMyMessage, content.Text);
		}
	}

	MessageSubsystem->StartTimer(name);
}

void UMesageWidget::OnChoice1Clicked()
{
	// 초이스 위젯 히든으로 바꾸기
	ChoiceBox->SetVisibility(ESlateVisibility::Hidden);
	// 서브시스템에 대사 저장
	MessageSubsystem->AddNewMessage(CurrentMessageTarget, Choice1->GetText(), true, true);
	MessageSubsystem->MessageDataMap[CurrentMessageTarget]->ReserveArray.RemoveAt(0);
	// 대사 출력
	AddMessageText(true, Choice1->GetText());

	// 이후 대사 출력
	MessageSubsystem->StartTimer(CurrentMessageTarget);
}

void UMesageWidget::OnChoice2Clicked()
{
	// 초이스 위젯 히든으로 바꾸기
	ChoiceBox->SetVisibility(ESlateVisibility::Hidden);
	// 서브시스템에 대사 저장
	MessageSubsystem->AddNewMessage(CurrentMessageTarget, Choice2->GetText(), true, true);
	MessageSubsystem->MessageDataMap[CurrentMessageTarget]->ReserveArray.RemoveAt(0);
	// 대사 출력
	AddMessageText(true, Choice2->GetText());

	// 이후 대사 출력
	MessageSubsystem->StartTimer(CurrentMessageTarget);
}

void UMesageWidget::OnChoice3Clicked()
{
	// 초이스 위젯 히든으로 바꾸기
	ChoiceBox->SetVisibility(ESlateVisibility::Hidden);
	// 서브시스템에 대사 저장
	MessageSubsystem->AddNewMessage(CurrentMessageTarget, Choice3->GetText(), true, true);
	MessageSubsystem->MessageDataMap[CurrentMessageTarget]->ReserveArray.RemoveAt(0);
	// 대사 출력
	AddMessageText(true, Choice3->GetText());

	// 이후 대사 출력
	MessageSubsystem->StartTimer(CurrentMessageTarget);
}

void UMesageWidget::OnImageSelectClicked()
{
	// 리스트박스 안보이게
	ListScrollBox->SetVisibility(ESlateVisibility::Hidden);
	// 이미지 박스 보이게
	ImageSelectBox->SetVisibility(ESlateVisibility::Visible);
	ClearImageBox();

	// 이미지 버튼 생성
	if (!ImageSubsystem->CaptureTextures.IsEmpty())
	{
		for (UPhotoData* Texture : ImageSubsystem->CaptureTextures)
		{
			if (Texture->IsPendingKill())
			{
				UE_LOG(LogTemp, Error, TEXT("Invalid or pending kill Photo detected in AddPhoto!"));
			}
			if (IsValid(Texture))
			{
				AddPhoto(Texture->texture);
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Invalid Pointer detected in AddPhoto!"));
			}
		}
	}
}

void UMesageWidget::OnBackButtonClicked()
{
	// 리스트박스 보이게
	ListScrollBox->SetVisibility(ESlateVisibility::Visible);
	// 이미지 박스 안보이게
	ImageSelectBox->SetVisibility(ESlateVisibility::Hidden);

	//이미지박스 초기화
	ClearImageBox();

}

void UMesageWidget::OnPhotoButtonClicked(int32 Value)
{
	if (Images.Num() > Value)
	{
		UPhotoData* Photo = ImageSubsystem->GetPhoto(Value);
		UTexture2D* Texture = Photo->texture;
		ESpecies species = Photo->species;

		AddMessageImage(Texture);
		MessageSubsystem->AddNewImage(CurrentMessageTarget, Texture);

		if (MessageSubsystem->MessageDataMap[CurrentMessageTarget]->ReserveArray[0].Species == species)
		{
			// 성공
			MessageSubsystem->MessageDataMap[CurrentMessageTarget]->ReserveArray.RemoveAt(0);
			MessageSubsystem->StartTimer(CurrentMessageTarget);
		}
		else
		{
			// 실패
			FText text = NSLOCTEXT("SeaOfMemory", "Story", "이건 제가 원하는 사진이 아니에요");
			MessageSubsystem->AddNewMessageOnWidget(CurrentMessageTarget, text);
		}

		OnBackButtonClicked();
	}
}

void UMesageWidget::AddPhoto(UTexture2D* Photo)
{
	if (!ImageSelectScrollBox || !Photo) return;


	CurrentPhotoCount++;

	UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(ImageSelectBox->Slot);
	float WidthRatio = 0;
	float Width = 0;
	float Length = 0;
	if (PanelSlot)
	{
		FVector2D ViewportSize;
		GEngine->GameViewport->GetViewportSize(ViewportSize);
		WidthRatio = PanelSlot->GetAnchors().Maximum.X - PanelSlot->GetAnchors().Minimum.X;
		Width = ViewportSize.X * WidthRatio;
		Length = Width * ((float)Photo->GetSizeY() / Photo->GetSizeX());
	}

	// Brush설정
	FSlateBrush Brush;
	Brush.SetResourceObject(Photo);
	Brush.ImageSize = FVector2D(Width, Length);

	int CurrentHorizontalBox = (CurrentPhotoCount - 1) / 2;

	// 이미지, 버튼 배열 추가


	//HorizontalBox설정
	if (CurrentPhotoCount % 2 == 1)
	{
		UHorizontalBox* NewHorizontalBox = NewObject<UHorizontalBox>(this);

		HorizontalBoxs.Add(NewHorizontalBox);

		if (NewHorizontalBox == NULL)
		{
			UE_LOG(LogTemp, Warning, TEXT("NewHorizontalBox Create Fail"))
		}

		UScrollBoxSlot* BoxSlot = static_cast<UScrollBoxSlot*>(ImageSelectScrollBox->AddChild(NewHorizontalBox));


		int32 sizey = Photo->GetSizeY();

		BoxSlot->SetSize(ESlateSizeRule::Automatic);
		BoxSlot->SetHorizontalAlignment(HAlign_Fill);
		BoxSlot->SetVerticalAlignment(VAlign_Fill);

		// 이미지, 버튼 추가
		UImage* NewImage = NULL;
		UPhotoButton* NewButton = NULL;


		for (int i = 0; i < 2; i++)
		{
			NewImage = NewObject<UImage>(this);
			NewButton = NewObject<UPhotoButton>(this);
			if (NewImage && NewButton)
			{
				Images.Add(NewImage);
				Buttons.Add(NewButton);

				//자식추가
				UHorizontalBoxSlot* HorizontalBoxSlot = NewHorizontalBox->AddChildToHorizontalBox(NewButton);
				if (HorizontalBoxSlot)
				{
					HorizontalBoxSlot->SetSize(ESlateSizeRule::Fill);
					HorizontalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
					HorizontalBoxSlot->SetVerticalAlignment(VAlign_Fill);

				}
				UButtonSlot* ButtonSlot = static_cast<UButtonSlot*>(NewButton->AddChild(NewImage));
				if (ButtonSlot)
				{
					ButtonSlot->SetHorizontalAlignment(HAlign_Fill);
					ButtonSlot->SetVerticalAlignment(VAlign_Fill);
				}

				NewButton->SetIndex(CurrentPhotoCount - 1 + i);
				NewButton->OnClickedWithParam.AddDynamic(this, &UMesageWidget::OnPhotoButtonClicked);
				NewButton->InitializeButton();
			}
		}
		Images.Last()->SetVisibility(ESlateVisibility::Hidden);
		Buttons.Last()->SetVisibility(ESlateVisibility::Hidden);

		int currentimage = Images.Num() - 2;
		Images[currentimage]->SetBrush(Brush);
	}
	else
	{
		if (HorizontalBoxs.Num() > CurrentHorizontalBox)
		{
			Images.Last()->SetVisibility(ESlateVisibility::Visible);
			Buttons.Last()->SetVisibility(ESlateVisibility::Visible);

			Images.Last()->SetBrush(Brush);
		}
		else
		{
			return;
			UE_LOG(LogTemp, Warning, TEXT("HorizontalBoxs[CurrentHorizontalBox] is empty"))
		}
	}
}
