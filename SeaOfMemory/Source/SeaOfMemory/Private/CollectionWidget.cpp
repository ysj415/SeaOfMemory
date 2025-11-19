// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectionWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/MultiLineEditableTextBox.h"
#include "Components/Image.h"
#include "IllustratedGuideSubsystem.h"

void UCollectionWidget::NativeConstruct()
{

	IllustratedGuideSubsystem = UGameInstance::GetSubsystem<UIllustratedGuideSubsystem>(GetWorld()->GetGameInstance());

	AnchovyButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", ANCHOVY_NAME));
	Bluetang1ButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", BLUETANG1_NAME));
	Bluetang2ButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", BLUETANG2_NAME));
	ButterflyFish1ButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", BUTTERFLYFISH1_NAME)); 
	ButterflyFish2ButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", BUTTERFLYFISH2_NAME));
	//ClamButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", CLAM_NAME));
	ClownfishButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", CLOWNFISH_NAME)); 
	ColortetraButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", COLORTETRA_NAME)); 
	FirefishButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", FIREFISH_NAME)); 
	SharkButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", SHARK_NAME));
	//SkateButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", SKATE_NAME));
	//SunfishButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", SUNFISH_NAME));
	//TurtleButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", TURTLE_NAME));
	//WhaleButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", WHALE_NAME)); 

	UTexture2D* EmptyImage = IllustratedGuideSubsystem->EmptyImage;

	AnchovyButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Anchovy));
	Bluetang1ButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Bluetang1));
	Bluetang2ButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Bluetang2));
	ButterflyFish1ButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::ButterflyFish1));
	ButterflyFish2ButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::ButterflyFish2));
	//ClamButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Clam));
	ClownfishButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Clownfish));
	ColortetraButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Colortetra));
	FirefishButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Firefish));
	SharkButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Shark));
	//SkateButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Skate));
	//SunfishButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Sunfish));
	//TurtleButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Turtle));
	//WhaleButtonImage->SetBrushFromTexture(IllustratedGuideSubsystem->GetFishSubImage(ESpecies::Whale));

	ExplainText->SetText(FText::FromString(""));
	MainImage->SetBrushFromTexture(EmptyImage);

	AnchovyButton->OnClicked.AddDynamic(this, &UCollectionWidget::AnchovyButtonClick);
	Bluetang1Button->OnClicked.AddDynamic(this, &UCollectionWidget::Bluetang1ButtonClick);
	Bluetang2Button->OnClicked.AddDynamic(this, &UCollectionWidget::Bluetang2ButtonClick);
	ButterflyFish1Button->OnClicked.AddDynamic(this, &UCollectionWidget::ButterflyFish1ButtonClick);
	ButterflyFish2Button->OnClicked.AddDynamic(this, &UCollectionWidget::ButterflyFish2ButtonClick);
	//ClamButton->OnClicked.AddDynamic(this, &UCollectionWidget::ClamButtonClick);
	ClownfishButton->OnClicked.AddDynamic(this, &UCollectionWidget::ClownfishButtonClick);
	ColortetraButton->OnClicked.AddDynamic(this, &UCollectionWidget::ColortetraButtonClick);
	FirefishButton->OnClicked.AddDynamic(this, &UCollectionWidget::FirefishButtonClick);
	SharkButton->OnClicked.AddDynamic(this, &UCollectionWidget::SharkButtonClick);
	//SkateButton->OnClicked.AddDynamic(this, &UCollectionWidget::SkateButtonClick);
	//SunfishButton->OnClicked.AddDynamic(this, &UCollectionWidget::SunfishButtonClick);
	//TurtleButton->OnClicked.AddDynamic(this, &UCollectionWidget::TurtleButtonClick);
	//WhaleButton->OnClicked.AddDynamic(this, &UCollectionWidget::WhaleButtonClick);

}

void UCollectionWidget::CollectionButtonClick(UButton* button, ESpecies Species, FText Explain)
{
	FFishData* fishdata = IllustratedGuideSubsystem->FishDataMap.Find(Species);
	if (fishdata == NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("[UCollectionWidget]: fishdata == NULL"));
		return;
	}


	UTexture2D* CollectionImage = NULL;

	// 메인 이미지, 텍스트 변경
	if (!fishdata->IsUnlock)
	{
		CollectionImage = IllustratedGuideSubsystem->EmptyImage;

		ExplainText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", EMPTY_EXPLAIN));
	}
	else
	{
		FFishData* FishData = IllustratedGuideSubsystem->FishDataMap.Find(Species);
		CollectionImage = FishData->FishMainImage;

		ExplainText->SetText(Explain);
	}
	if (CollectionImage != NULL)
	{
		MainImage->SetBrushFromTexture(CollectionImage);
	}
	else
	{

	}

	// 선택된 버튼 처리
	if (SelectedButton != NULL)
	{
		SelectedButton->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
	}
	SelectedButton = button;
	button->SetColorAndOpacity(FLinearColor(0.2f, 0.2f, 0.2f, 1.f));
}

void UCollectionWidget::AnchovyButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", ANCHOVY_EXPLAIN);

	CollectionButtonClick(AnchovyButton, ESpecies::Anchovy, Format);
}

void UCollectionWidget::Bluetang1ButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", BLUETANG1_EXPLAIN);
	CollectionButtonClick(Bluetang1Button, ESpecies::Bluetang1, Format);
}

void UCollectionWidget::Bluetang2ButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", BLUETANG2_EXPLAIN);
	CollectionButtonClick(Bluetang2Button, ESpecies::Bluetang2, Format);
}

void UCollectionWidget::ButterflyFish1ButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", BUTTERFLYFISH1_EXPLAIN);
	CollectionButtonClick(ButterflyFish1Button, ESpecies::ButterflyFish1, Format);
}

void UCollectionWidget::ButterflyFish2ButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", BUTTERFLYFISH2_EXPLAIN);
	CollectionButtonClick(ButterflyFish2Button, ESpecies::ButterflyFish2, Format);
}

//void UCollectionWidget::ClamButtonClick()
//{
//	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", CLAM_EXPLAIN);
//	CollectionButtonClick(ClamButton, ESpecies::Clam, Format);
//}

void UCollectionWidget::ClownfishButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", CLOWNFISH_EXPLAIN);
	CollectionButtonClick(ClownfishButton, ESpecies::Clownfish, Format);
}

void UCollectionWidget::ColortetraButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", COLORTETRA_EXPLAIN);
	CollectionButtonClick(ColortetraButton, ESpecies::Colortetra, Format);
}

void UCollectionWidget::FirefishButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", FIREFISH_EXPLAIN);
	CollectionButtonClick(FirefishButton, ESpecies::Firefish, Format);
}

void UCollectionWidget::SharkButtonClick()
{
	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", SHARK_EXPLAIN);
	CollectionButtonClick(SharkButton, ESpecies::Shark, Format);
}

//void UCollectionWidget::SkateButtonClick()
//{
//	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", SKATE_EXPLAIN);
//	CollectionButtonClick(SkateButton, ESpecies::Skate, Format);
//}
//
//void UCollectionWidget::SunfishButtonClick()
//{
//	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", SUNFISH_EXPLAIN);
//	CollectionButtonClick(SunfishButton, ESpecies::Sunfish, Format);
//}
//
//void UCollectionWidget::TurtleButtonClick()
//{
//	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", TURTLE_EXPLAIN);
//	CollectionButtonClick(TurtleButton, ESpecies::Turtle, Format);
//}
//
//void UCollectionWidget::WhaleButtonClick()
//{
//	FText Format = NSLOCTEXT("CollectionNamespace", "Collection", WHALE_EXPLAIN);
//	CollectionButtonClick(WhaleButton, ESpecies::Whale, Format);
//}
