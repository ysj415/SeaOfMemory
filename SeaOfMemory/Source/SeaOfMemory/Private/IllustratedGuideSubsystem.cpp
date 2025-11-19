// Fill out your copyright notice in the Description page of Project Settings.

#include "IllustratedGuideSubsystem.h"


UIllustratedGuideSubsystem::UIllustratedGuideSubsystem()
{
	//static ConstructorHelpers::FObjectFinder<UTexture2D> EmptyImageFinder(TEXT(EMPTY_IMAGE));

	EmptyImage = NULL;
}

void UIllustratedGuideSubsystem::UnlockCollection(ESpecies species)
{
	FishDataMap[species].IsUnlock = true;
}

void UIllustratedGuideSubsystem::SetFishSubImage(ESpecies species, UTexture2D* fishsubimage)
{
	FishDataMap[species].FishSubImage = fishsubimage;

}

void UIllustratedGuideSubsystem::SetFishMainImage(ESpecies species, UTexture2D* fishmainimage)
{
	FishDataMap[species].FishMainImage = fishmainimage;

}

void UIllustratedGuideSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// 에셋을 나중에 로드
}

void UIllustratedGuideSubsystem::LoadEmptyImage()
{
	if (EmptyImage)
	{
		FText NS_Name;
		FText NS_Explain;

		NS_Name = NSLOCTEXT("Korean", "Korean", ANCHOVY_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", ANCHOVY_EXPLAIN);
		FishDataMap.Add(ESpecies::Anchovy, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", BLUETANG1_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", BLUETANG1_EXPLAIN);
		FishDataMap.Add(ESpecies::Bluetang1, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", BLUETANG2_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", BLUETANG2_EXPLAIN);
		FishDataMap.Add(ESpecies::Bluetang2, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", BUTTERFLYFISH1_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", BUTTERFLYFISH1_EXPLAIN);
		FishDataMap.Add(ESpecies::ButterflyFish1, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", BUTTERFLYFISH2_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", BUTTERFLYFISH2_EXPLAIN);
		FishDataMap.Add(ESpecies::ButterflyFish2, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", CLAM_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", CLAM_EXPLAIN);
		FishDataMap.Add(ESpecies::Clam, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", CLOWNFISH_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", CLOWNFISH_EXPLAIN);
		FishDataMap.Add(ESpecies::Clownfish, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", COLORTETRA_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", COLORTETRA_EXPLAIN);
		FishDataMap.Add(ESpecies::Colortetra, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", FIREFISH_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", FIREFISH_EXPLAIN);
		FishDataMap.Add(ESpecies::Firefish, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", SHARK_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", SHARK_EXPLAIN);
		FishDataMap.Add(ESpecies::Shark, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", SKATE_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", SKATE_EXPLAIN);
		FishDataMap.Add(ESpecies::Skate, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", SUNFISH_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", SUNFISH_EXPLAIN);
		FishDataMap.Add(ESpecies::Sunfish, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", TURTLE_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", TURTLE_EXPLAIN);
		FishDataMap.Add(ESpecies::Turtle, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));

		NS_Name = NSLOCTEXT("Korean", "Korean", WHALE_NAME);
		NS_Explain = NSLOCTEXT("Korean", "Korean", WHALE_EXPLAIN);
		FishDataMap.Add(ESpecies::Whale, FFishData(NS_Name, EmptyImage, EmptyImage, NS_Explain));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("[EmptyImageFinder]: Can't find Empty Imgage"))

		return;
	}
}

FFishData* UIllustratedGuideSubsystem::GetFishData(ESpecies species)
{
	return FishDataMap.Find(species);
}

FText UIllustratedGuideSubsystem::GetName(ESpecies species) 
{ 
	if (FishDataMap.Contains(species))
	{
		return FishDataMap[species].name;
	}
	else
	{
		return FText();
	}
}
UTexture2D* UIllustratedGuideSubsystem::GetFishSubImage(ESpecies species)
{ 
	if (FishDataMap.Contains(species))
	{
		return FishDataMap[species].FishSubImage;
	}
	else
	{
		return NULL;
	}
}
UTexture2D* UIllustratedGuideSubsystem::GetFishMainImage(ESpecies species) 
{ 
	if (FishDataMap.Contains(species))
	{
		return FishDataMap[species].FishMainImage;
	}
	else
	{
		return NULL;
	}
}
FText UIllustratedGuideSubsystem::GetExplain(ESpecies species)
{
	if (FishDataMap.Contains(species))
	{
		return FishDataMap[species].explain; 
	}
	else
	{
		return FText();
	}
}
bool UIllustratedGuideSubsystem::GetIsUnlock(ESpecies species)
{ 
	if (FishDataMap.Contains(species))
	{
		return FishDataMap[species].IsUnlock;
	}
	else
	{
		return false;
	}
}

void UIllustratedGuideSubsystem::ResetSubsystemData()
{
	FishDataMap.Empty();
	EmptyImage = nullptr;
}