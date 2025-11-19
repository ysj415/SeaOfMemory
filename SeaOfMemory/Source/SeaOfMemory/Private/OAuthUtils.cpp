// Fill out your copyright notice in the Description page of Project Settings.


#include "OAuthUtils.h"
#include "Misc/Base64.h"
#include "Misc/SecureHash.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "Unix/UnixPlatformHttp.h"

FString OAuthUtils::GenerateNonce()
{
    return FGuid::NewGuid().ToString(EGuidFormats::Digits);
}

FString OAuthUtils::GenerateTimestamp()
{
    return FString::Printf(TEXT("%lld"), FDateTime::UtcNow().ToUnixTimestamp());
}

FString OAuthUtils::GenerateSignature(const FString& HttpMethod, const FString& BaseUrl, const TMap<FString, FString>& Params, const FString& ConsumerSecret, const FString& TokenSecret)
{
    TArray<FString> ParamList;
    for (const auto& Elem : Params)
    {
        ParamList.Add(FString::Printf(TEXT("%s=%s"), *Elem.Key, *Elem.Value));
    }
    ParamList.Sort();

    FString ParamString = FString::Join(ParamList, TEXT("&"));
    FString SignatureBaseString = FString::Printf(TEXT("%s&%s&%s"),
        *HttpMethod.ToUpper(),
        *FPlatformHttp::UrlEncode(BaseUrl),
        *FPlatformHttp::UrlEncode(ParamString));

    FString SigningKey = FString::Printf(TEXT("%s&%s"), *ConsumerSecret, *TokenSecret);

    // Generate HMAC-SHA1 signature
    uint8 Hash[20];
    FSHA1::HMACBuffer((const uint8*)TCHAR_TO_ANSI(*SignatureBaseString), SignatureBaseString.Len(), (const uint8*)TCHAR_TO_ANSI(*SigningKey), SigningKey.Len(), Hash);

    UE_LOG(LogTemp, Warning, TEXT("%s"), *FBase64::Encode(Hash, 20));
     
    return FBase64::Encode(Hash, 20);


    //FString NormalizedParams = NormalizeParams(Params);
    //FString SignatureBaseStr = FString::Printf(TEXT("%s&%s&%s"),
    //    *HttpMethod,
    //    *FGenericPlatformHttp::UrlEncode(BaseUrl),
    //    *FGenericPlatformHttp::UrlEncode(NormalizedParams));

    //// ���� Ű ����
    //FString SigningKey = FString::Printf(TEXT("%s&%s"),
    //    *FGenericPlatformHttp::UrlEncode(ConsumerSecret),
    //    *FGenericPlatformHttp::UrlEncode(TokenSecret));

    //// HMAC-SHA1 ���� ����
    //TArray<uint8> KeyBytes;
    //KeyBytes.Append((uint8*)TCHAR_TO_UTF8(*SigningKey), SigningKey.Len());

    //TArray<uint8> DataBytes;
    //DataBytes.Append((uint8*)TCHAR_TO_UTF8(*SignatureBaseStr), SignatureBaseStr.Len());

    //TArray<uint8> Hash = FGenericPlatformMisc::HMAC_SHA1(KeyBytes.GetData(), KeyBytes.Num(), DataBytes.GetData(), DataBytes.Num());
    //
    //// Base64 ���ڵ�
    //FString Signature = FBase64::Encode(Hash);

    //return Signature;
}

FString OAuthUtils::NormalizeParams(const TMap<FString, FString>& Params)
{
    // Ű-�� ���� ���� ������ �����ϱ� ���� TMap�� TArray�� ��ȯ
    TArray<TPair<FString, FString>> SortedParams;
    for (const auto& P : Params)
    {
        SortedParams.Emplace(P.Key, P.Value);
    }

    // �迭 ���� (���� ��)
    SortedParams.Sort([](const TPair<FString, FString>& A, const TPair<FString, FString>& B) {
        return A.Key < B.Key;
        });

    // ���ĵ� �Ķ���͸� ���� ��Ʈ�� ���·� ����
    FString NormalizedParams;
    bool First = true;
    for (const auto& Param : SortedParams)
    {
        if (!First)
        {
            NormalizedParams += "&";
        }
        First = false;

        // Ű�� �� ��� URL ���ڵ� ����
        FString EncodedKey = FGenericPlatformHttp::UrlEncode(Param.Key);
        FString EncodedValue = FGenericPlatformHttp::UrlEncode(Param.Value);

        NormalizedParams += EncodedKey + "=" + EncodedValue;
    }

    return NormalizedParams;
}
