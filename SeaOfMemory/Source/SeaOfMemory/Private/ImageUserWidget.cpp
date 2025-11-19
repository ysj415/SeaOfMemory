// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageUserWidget.h"
#include "ImageSubsystem.h"
#include "Components/Image.h"
#include "Components/ScrollBox.h"
#include "PhotoButton.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/ButtonSlot.h"
#include "../SOMBaseCharacter.h"
#include "WebViewWidget.h"
#include "Components/TextBlock.h"
#include "SNSDataSubsystem.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/ScaleBox.h"

void UImageUserWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	PlayerController = GetWorld()->GetFirstPlayerController();

	SOMCharacter = CastChecked<ASOMBaseCharacter>(PlayerController->GetCharacter());
}

void UImageUserWidget::NativeConstruct()
{
	Super::NativeConstruct();

	ImageSubsystem = UGameInstance::GetSubsystem<UImageSubsystem>(GetWorld()->GetGameInstance());
	SnsSubsystem = UGameInstance::GetSubsystem<USNSDataSubsystem>(GetWorld()->GetGameInstance());


	CurrentPhotoCount = 0;
	SelectedPhotoIndex = -1;
	if (ImageSubsystem->CaptureTextures.IsEmpty())
	{
		EmptyText->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		EmptyText->SetVisibility(ESlateVisibility::Hidden);

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

	// 삭제, 공유 버튼 설정
	DeleteButton->SetVisibility(ESlateVisibility::Hidden);
	ShareButton->SetVisibility(ESlateVisibility::Hidden);
	
	DeleteButton->OnClicked.AddDynamic(this, &UImageUserWidget::OnDeleteButtonClicked);
	ShareButton->OnClicked.AddDynamic(this, &UImageUserWidget::OnShareButtonClicked);
	// Debug
	#if WITH_EDITOR

	#endif
}

void UImageUserWidget::SetMainImage(int i)
{
	//int TexturesCount = Textures.Num();
	//int textureNum = i + page * 6;
	//if (textureNum < TexturesCount)
	//{
	//	MainImage->SetBrushFromTexture(Textures[textureNum], true);
	//}
}

void UImageUserWidget::OnButtonClicked(int32 Value)
{
	if (Images.Num() > Value)
	{
		UImage* Image = Images[Value];
		UPhotoData* Photo = ImageSubsystem->GetPhoto(Value);
		UTexture2D* Texture = Photo->texture;
		ESpecies species = Photo->species;
		FText speciestext = GetSpeciesName(species);

		if (LastSelectedImage == Image)		// 선택 취소
		{
			SelectedPhotoIndex = -1;
			LastSelectedImage = NULL;

			Image->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));

			SetMainImageVisibility(ESlateVisibility::Hidden);
		}
		else								// 사진 선택
		{
			SelectedPhotoIndex = Value;

			if (LastSelectedImage)
			{
				LastSelectedImage->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
			}
			LastSelectedImage = Image;

			Image->SetColorAndOpacity(FLinearColor(0.2f, 0.2f, 0.2f, 1.f));

			SetMainImageVisibility(ESlateVisibility::Visible);
			if (Texture)
			{
				MainImage->SetBrushFromTexture(Texture);
				SpeciesText->SetText(speciestext);
			}
		}
	}
}

void UImageUserWidget::OnDeleteButtonClicked()
{
	// image subsystem에서 이미지 삭제
	if (SelectedPhotoIndex >= 0)
	{
		ImageSubsystem->DeleteTextureInArray(SelectedPhotoIndex);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SellectedPhotoIndex < 0"))
			return;
	}

	// 사진 버튼 업데이트
	// 위젯 배열 삭제
	for (UButton* Button : Buttons)
	{
		Button->RemoveFromParent();
	}
	Images.RemoveAt(SelectedPhotoIndex);
	Buttons.RemoveAt(SelectedPhotoIndex);
	CurrentPhotoCount -= 1;

	for (int32 i = 0; i < Buttons.Num(); i++)
	{
		UPhotoButton* Button = Buttons[i];
		Button->SetIndex(i);
		UHorizontalBox* Box = HorizontalBoxs[i / 2];
		UHorizontalBoxSlot* HorizontalBoxSlot = Box->AddChildToHorizontalBox(Button);
		if (HorizontalBoxSlot)
		{
			HorizontalBoxSlot->SetSize(ESlateSizeRule::Fill);
			HorizontalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
			HorizontalBoxSlot->SetVerticalAlignment(VAlign_Fill);
		}
	}
	// 마지막 HorizontalBox 버튼 처리
	if (CurrentPhotoCount % 2 == 1)
	{
		UImage* NewImage = NewObject<UImage>(this);
		UPhotoButton* NewButton = NewObject<UPhotoButton>(this);
		if (NewImage && NewButton)
		{
			Images.Add(NewImage);
			Buttons.Add(NewButton);

			NewButton->SetVisibility(ESlateVisibility::Hidden);

			//자식추가
			UHorizontalBoxSlot* HorizontalBoxSlot = HorizontalBoxs.Last()->AddChildToHorizontalBox(NewButton);
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
		}
	}
	else
	{
		int32 Boxnum = HorizontalBoxs.Num();
		int32 Buttonnum = Buttons.Num();

		Buttons.Last()->RemoveFromParent();
		Buttons.RemoveAt(Buttonnum - 1);

		HorizontalBoxs.Last()->RemoveFromParent();
		HorizontalBoxs.RemoveAt(Boxnum - 1);
	}


	// 초기화
	SetMainImageVisibility(ESlateVisibility::Hidden);
	LastSelectedImage = NULL;
	SelectedPhotoIndex = -1;
}


void UImageUserWidget::OnShareButtonClicked()
{
	// 이미지 데이터 넘기기
	if (0 <= SelectedPhotoIndex << CurrentPhotoCount)
	{
		UE_LOG(LogTemp, Log, TEXT("SellectedPhotoIndex is valid"))
			UPhotoData* Photo = ImageSubsystem->GetPhoto(SelectedPhotoIndex);
		if (Photo)
		{
			SnsSubsystem->SetSelectedPhoto(Photo);
		}
	}
	SnsSubsystem->SetCurrentMenu(SNSMenuMod::TweetPost);


	// 기존 위젯 제거
	RemoveFromParent();

	// 새로운 위젯 생성
	TSubclassOf<UWebViewWidget> WidgetClass = SOMCharacter->GetWebViewWidget();
	if (!WidgetClass)
	{
		UE_LOG(LogTemp,Warning, TEXT("OnShareButtonClicked: Cant find UWebViewWidgetClass"))
		return;
	}
	UWebViewWidget* WebviewWidget = CreateWidget<UWebViewWidget>(PlayerController, WidgetClass);
	WebviewWidget->AddToViewport();


}

FText UImageUserWidget::GetSpeciesName(ESpecies species)
{
	FText MyLocalizedText;
	switch(species) {
	case ESpecies::Null:
		return FText();

		break;
	case ESpecies::Anchovy:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", ANCHOVY_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Bluetang1:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", BLUETANG1_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Bluetang2:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", BLUETANG2_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::ButterflyFish1:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", BUTTERFLYFISH1_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::ButterflyFish2:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", BUTTERFLYFISH2_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Clam:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", CLAM_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Clownfish:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", CLOWNFISH_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Colortetra:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", COLORTETRA_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Firefish:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", FIREFISH_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Shark:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", SHARK_NAME);
		return MyLocalizedText;

		break;	
	case ESpecies::Skate:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", SKATE_NAME);
		return MyLocalizedText;

		break;	
	case ESpecies::Sunfish:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", SUNFISH_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Turtle:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", TURTLE_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Whale:
		MyLocalizedText = NSLOCTEXT("MyNamespace", "MyKey", WHALE_NAME);
		return MyLocalizedText;

		break;
	case ESpecies::Character:
		return FText();

		break;
	case ESpecies::Bait:
		return FText();

		break;
	case ESpecies::Repellent:
		return FText();

		break;

	}
	return FText();
}

void UImageUserWidget::AddPhoto(UTexture2D* Photo)
{
	if (!ScrollBox || !Photo) return;


	CurrentPhotoCount++;

	UCanvasPanelSlot* PanelSlot = Cast<UCanvasPanelSlot>(ScrollBox->Slot);
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

	int CurrentHorizontalBox = (CurrentPhotoCount-1) / 2;

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

		UScrollBoxSlot* BoxSlot = static_cast<UScrollBoxSlot*>(ScrollBox->AddChild(NewHorizontalBox));


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
				NewButton->OnClickedWithParam.AddDynamic(this, &UImageUserWidget::OnButtonClicked);
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

void UImageUserWidget::SetMainImageVisibility(ESlateVisibility InVisibility)
{
	MainImage->SetVisibility(InVisibility);
	DeleteButton->SetVisibility(InVisibility);
	ShareButton->SetVisibility(InVisibility);
	SpeciesText->SetVisibility(InVisibility);
}
