// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WebBrowser.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "WebViewWidget.generated.h"

/**
 * 
 */
UCLASS()
class SEAOFMEMORY_API UWebViewWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Web View")
	void OpenAuthenticationPage();

	UFUNCTION()
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnUrlChanged(const FText& NewText);

	//사용자의 아이디로 토큰 요청
	void RequestToken(const FString& OAuthCode);
	
	//토큰 요청 반환 함수
	void OnRequestTokenResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	//-------------------------------트윗 업로드------------------------------------
	void UploadTweet(const FString& MediaID);
	void OnUploadTweetResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	//void UploadMedia(UTexture2D* Texture);
	//void OnUploadMediaResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	UFUNCTION()
	void TweetButtonClick();

	// 이미지 업로드 함수
	void UploadMedia(const FString& FilePath);
	void OnInitResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void UploadMediaAppend(FString& mediaid);
	void OnAppendResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	void UploadMediaFinalize(FString& mediaid);
	void OnFinalizeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	// 이미지 업로드 함수 변형된 방식
	void UploadMediaV2(const FString& FilePath);
	void OnUploadMediaV2Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);


	// 트위터 정보 가져오기
	void GetTweetLikes(FString TweetId);
	void OnGetTweetLikesResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	UFUNCTION()
	void OnPostTweetWindClicked();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 imagehalfsize;
protected:
	// sns 키 요청 위젯
	UPROPERTY(meta = (BindWidget))
	UWebBrowser* WebBrowserWidget;

	// 트윗 작성 위젯
	UPROPERTY(meta = (BindWidget))
	class UBorder* PostTweetBorder;
	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* TweetBox;
	UPROPERTY(meta = (BindWidget))
	class UMultiLineEditableText* TweetText;
	UPROPERTY(meta = (BindWidget))
	class UButton* TweetButton;
	UPROPERTY(meta = (BindWidget))
	class UImage* PhotoImage;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* TweetButtonText;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* SelectPhotoText;

	// 트윗 보기 위젯
	UPROPERTY(meta = (BindWidget))
	class UVerticalBox* ViewTweetBox;

	UPROPERTY(meta = (BindWidget))
	class UScrollBox* ViewTweetScroll;

	UPROPERTY(meta = (BindWidget))
	class UButton* PostTweetWind;

	// 로딩창
	UPROPERTY(meta = (BindWidget))
	class UBackgroundBlur* LoadingBlur;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* LoadingText;

	// api 접근 키
	FString ClientID;
	FString Client_Secret;
	FString RedirectURL;

	FString ApiKey;
	FString ApiSecretKey;
	FString AccessToken;
	FString AccessTokenSecret;

	FString TextContent;
private:
	class UImageSubsystem* ImageSubsystem;

	// 이미지 업로드
	FString MediaId;
	int32 SegmentIndex;
	TArray<uint8> FileData;

	class USNSDataSubsystem* SNSSubsystem;

	void SetWebBrowseMod();
	UFUNCTION(BlueprintCallable)
	void SetPostTweetMod();
	UFUNCTION(BlueprintCallable)
	void SetViewTweetMod();

	// 업로드 버튼 누른 후 api 요청동안 로딩창이 생성 함수
	void InLoadingMenu();
	void OutLoadingMenu(int32 ResultCode);

	void AddTextureToScrollBox(UTexture2D* texture);
};
