// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class SEAOFMEMORY_API OAuthUtils
{
public:
    static FString GenerateNonce();
    static FString GenerateTimestamp();
    static FString GenerateSignature(const FString& HttpMethod, const FString& BaseUrl, const TMap<FString, FString>& Params, const FString& ConsumerSecret, const FString& TokenSecret = TEXT(""));
    static FString NormalizeParams(const TMap<FString, FString>& Params);
};
