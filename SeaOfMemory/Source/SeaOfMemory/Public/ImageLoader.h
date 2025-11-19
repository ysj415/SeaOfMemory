// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ImageLoader.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UImageLoader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	//UFUNCTION(BlueprintCallable, Category = "Image Loading")
	//static TArray<UTexture2D*> LoadAllPNGsFromFolder(const FString& FolderPath);
};
