// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SOMGameDataBase.h"
#include "IllustratedGuideSubsystem.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FFishData
{
	GENERATED_BODY()
public:
	FFishData()
		: name(FText()), FishSubImage(nullptr), FishMainImage(nullptr), explain(FText()), IsUnlock(false) {}
	FFishData(FText name, UTexture2D* FishSubImage, UTexture2D* FishMainImage, FText explain)
		: name(name), FishSubImage(FishSubImage), FishMainImage(FishMainImage), explain(explain), IsUnlock(false){}

	FText name;
	UPROPERTY()
	UTexture2D* FishSubImage;
	UPROPERTY()
	UTexture2D* FishMainImage;
	FText explain;

	bool IsUnlock;


};


UCLASS()
class SEAOFMEMORY_API UIllustratedGuideSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UIllustratedGuideSubsystem();

	UPROPERTY()
	TMap<ESpecies, FFishData> FishDataMap;

	//FishData 값 관련 함수
	FText GetName(ESpecies species);
	UTexture2D* GetFishSubImage(ESpecies species);
	UTexture2D* GetFishMainImage(ESpecies species);
	FText GetExplain(ESpecies species);
	bool GetIsUnlock(ESpecies species);

	void UnlockCollection(ESpecies species);

	void SetFishSubImage(ESpecies species, UTexture2D* FishSubImage);
	void SetFishMainImage(ESpecies species, UTexture2D* FishMainImage);

	UPROPERTY()
	UTexture2D* EmptyImage;

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	void LoadEmptyImage();

	FFishData* GetFishData(ESpecies species);

	UFUNCTION(BlueprintCallable)
	void ResetSubsystemData();
};
