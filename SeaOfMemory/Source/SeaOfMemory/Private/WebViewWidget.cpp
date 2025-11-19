#include "WebViewWidget.h"
#include "OAuthUtils.h"
#include "GenericPlatform/GenericPlatformHttp.h"
#include "Blueprint/WidgetTree.h"
#include "Unix/UnixPlatformHttp.h"
#include "Components/VerticalBox.h"
#include "Components/MultiLineEditableText.h"
#include "Components/Button.h"
#include "Components/Border.h"
#include "ImageSubsystem.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "SNSDataSubsystem.h"
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/ScaleBox.h"
#include "Components/BackgroundBlur.h"
#include "Components/VerticalBoxSlot.h"
#include "SkillSubsystem.h"
#include "StorySubsystem.h"

void UWebViewWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::NativeConstruct"))

    ClientID = TEXT("WDNfQ1JBWXZPbWMzWFpKelNMRVk6MTpjaQ");
    Client_Secret = TEXT("VQQlCkBz5HzRdbIkAUa4jcIyfmHr3-ZL7cIrN1umJlrtu4jydr");
    RedirectURL = TEXT("https://ysj4415.github.io/ysj445.github.io");
    ApiKey = TEXT("Je5uhnEbkMtTfjtqaH2yXKloU");
    ApiSecretKey = TEXT("OdckgKm1geVEwAk6ObSENS4z3bF1qvErrB00VVGRektzvFdF11");
    AccessToken = TEXT("1360886547185168385-0UPiuKjuopAAF6vs3yrHhDo77rEmpM");
    AccessTokenSecret = TEXT("h3mzN8b4zANwRQmxzE8ZnThTjln661YfdscvhRLrobtWd");

    // 서브시스템 가져오기
    ImageSubsystem = UGameInstance::GetSubsystem<UImageSubsystem>(GetWorld()->GetGameInstance());
    if (!ImageSubsystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("Fail to get ImageSubsystem"))
    }
    SNSSubsystem = UGameInstance::GetSubsystem<USNSDataSubsystem>(GetWorld()->GetGameInstance());
    if (!SNSSubsystem)
    {
        UE_LOG(LogTemp, Warning, TEXT("Fail to get SNSSubsystem"))
    }

    // 버튼 함수 연결
    if (TweetButton)
    {
        TweetButton->OnClicked.AddDynamic(this, &UWebViewWidget::TweetButtonClick);
    }
    if (PostTweetWind)
    {
        PostTweetWind->OnClicked.AddDynamic(this, &UWebViewWidget::OnPostTweetWindClicked);
    }
    // =====화면 초기화======
    // 토큰 유효성 검사
    if (WebBrowserWidget&& !SNSSubsystem->IsTokenEnabled())
    {

        WebBrowserWidget->OnUrlChanged.AddDynamic(this, &UWebViewWidget::OnUrlChanged);
        OpenAuthenticationPage();
        SetWebBrowseMod();
    }
    else
    {
        if (SNSSubsystem->GetCurrentMenu() == SNSMenuMod::TweetPost)
        {
            SetPostTweetMod();
        }
        else
        {
            SetViewTweetMod();
        }
    }

    // 스크롤박스에 이미지 추가
    if (!SNSSubsystem->Textures.IsEmpty())
    {
        for (UPhotoData* Texture : SNSSubsystem->Textures)
        {
            if (Texture)
            {
                AddTextureToScrollBox(Texture->texture);
            }
        }
    }
}

void UWebViewWidget::TweetButtonClick()
{
    if (SNSSubsystem->GetSelectedPhoto())
    {

        InLoadingMenu();

        FString ImageDirectory = FString::Printf(TEXT("%s/%s"), *FPaths::ProjectDir(), TEXT("Screenshots"));
        FString ImagePath = FPaths::Combine(ImageDirectory, TEXT("Screenshot_20250131_025735_545.png"));

        //UploadMedia(ImagePath);
        UploadMediaV2(ImagePath);   // 25.9 추가/ media 업로드 방식 변경에 의한 수정된 함수
    }
    else
    {
        // 사진을 선택해주세요.
    }

}


void UWebViewWidget::UploadMedia(const FString& FilePath)
{
    //파일 데이터 - 폴더에서 가져오기


    if (SNSSubsystem->GetSelectedPhoto())
    {
        UTexture2D* texture = SNSSubsystem->GetSelectedPhoto()->texture;
        SNSSubsystem->GetSelectedPhoto()->ConvertTextureToPNG(texture, FileData, false);
        //UE_LOG(LogTemp, Log, TEXT("Convert complete Texture to png: FileData.Num() = %d"), FileData.Num())
    }
  


    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnInitResponse);
    /*
    HttpRequest->SetURL(TEXT("https://api.x.com/2/media/upload"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + SNSSubsystem->GetToken());
    
    FString Content = FString::Printf(TEXT("command=INIT&media_type=image/png&total_bytes=%d&media_category=tweet_image"), FileData.Num());

    HttpRequest->SetContentAsString(Content);
    */
    HttpRequest->SetURL(TEXT("https://api.x.com/2/media/upload"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + SNSSubsystem->GetToken());

    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
    JsonObject->SetStringField(TEXT("command"), TEXT("INIT"));
    JsonObject->SetStringField(TEXT("media_type"), TEXT("image/png"));
    JsonObject->SetNumberField(TEXT("total_bytes"), FileData.Num());
    JsonObject->SetStringField(TEXT("media_category"), TEXT("tweet_image"));

    FString RequestBody;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
    FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

    HttpRequest->SetContentAsString(RequestBody);

    HttpRequest->ProcessRequest();
}


void UWebViewWidget::OnInitResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonResponse;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    int32 ResponseCode = Response->GetResponseCode();

    if (bWasSuccessful && Response)
    {
        if (FJsonSerializer::Deserialize(Reader, JsonResponse))
        {
            UE_LOG(LogTemp, Warning, TEXT("JsonResponse[UploadMedia]: %s"), *Response->GetContentAsString());

            TSharedPtr<FJsonObject> DataObject = JsonResponse->GetObjectField(TEXT("data"));
            if (DataObject.IsValid())
            {
                MediaId = DataObject->GetStringField(TEXT("id"));
                UploadMediaAppend(MediaId);
                UE_LOG(LogTemp, Log, TEXT("Extracted ID: %s"), *MediaId);
            }
            else
            {
                OutLoadingMenu(ResponseCode);
                UE_LOG(LogTemp, Error, TEXT("Failed to find 'data' object in JSON."));
            }
        }
        else
        {
            OutLoadingMenu(ResponseCode);
            UE_LOG(LogTemp, Error, TEXT("Failed to parse JSON."));
        }
    }
    else if(ResponseCode != 202)
    {
        FJsonSerializer::Deserialize(Reader, JsonResponse);

        FString ResponseContent = Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("Fail to Upload tweet[Init]. HTTP Status: %d, Response: %s"), ResponseCode, *ResponseContent);
        OutLoadingMenu(ResponseCode);

        Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid())
        {
            FString ErrorMessage;
            if (JsonResponse->TryGetStringField("error", ErrorMessage))
            {
                UE_LOG(LogTemp, Error, TEXT("Error Message: %s"), *ErrorMessage);
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to Get Response"));
        OutLoadingMenu(ResponseCode);
    }
}

void UWebViewWidget::UploadMediaAppend(FString& mediaid)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnAppendResponse);

    // 2025.03 이전 방식의 Append 방식
    HttpRequest->SetURL(TEXT("https://api.x.com/2/media/upload"));
    HttpRequest->SetVerb(TEXT("POST"));


    FString Boundary = "----TwitterBoundary";
    FString MultipartBodyHeader;

    // 멀티파트 폼 생성
    MultipartBodyHeader.Append("--" + Boundary + "\r\n");
    MultipartBodyHeader.Append("Content-Disposition: form-data; name=\"command\"\r\n\r\n");
    MultipartBodyHeader.Append("APPEND\r\n");

    MultipartBodyHeader.Append("--" + Boundary + "\r\n");
    MultipartBodyHeader.Append("Content-Disposition: form-data; name=\"media_id\"\r\n\r\n");
    MultipartBodyHeader.Append(mediaid + "\r\n");

    SegmentIndex = 0;
    MultipartBodyHeader.Append("--" + Boundary + "\r\n");
    MultipartBodyHeader.Append("Content-Disposition: form-data; name=\"segment_index\"\r\n\r\n");
    MultipartBodyHeader.Append(FString::FromInt(SegmentIndex) + "\r\n");

    MultipartBodyHeader.Append("--" + Boundary + "\r\n");
    MultipartBodyHeader.Append("Content-Disposition: form-data; name=\"media\"; filename=\"media\"\r\n");
    MultipartBodyHeader.Append("Content-Type: application/octet-stream\r\n\r\n");

    // 이미지 추가
    TArray<uint8> MultipartBody;
    MultipartBody.Append((uint8*)TCHAR_TO_UTF8(*MultipartBodyHeader), MultipartBodyHeader.Len());
    MultipartBody.Append(FileData);
    FString MultipartBodyFooter = "\r\n--" + Boundary + "--\r\n";
    MultipartBody.Append((uint8*)TCHAR_TO_UTF8(*MultipartBodyFooter), MultipartBodyFooter.Len());

    HttpRequest->SetHeader(TEXT("Content-Type"), FString::Printf(TEXT("multipart/form-data; boundary=%s"), *Boundary));
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + SNSSubsystem->GetToken());
    HttpRequest->SetContent(MultipartBody); 

    HttpRequest->ProcessRequest();


}

void UWebViewWidget::OnAppendResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonResponse;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    FJsonSerializer::Deserialize(Reader, JsonResponse);

    int32 ResponseCode = Response->GetResponseCode();
    if ((ResponseCode / 100) == 2)
    {
        UploadMediaFinalize(MediaId);
    }
    else
    {
        OutLoadingMenu(ResponseCode);

        FString ResponseContent = Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("Fail to Upload tweet[Append]. HTTP Status: %d, Response: %s"), ResponseCode, *ResponseContent);

        Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid())
        {
            FString ErrorMessage;
            if (JsonResponse->TryGetStringField("error", ErrorMessage))
            {
                UE_LOG(LogTemp, Error, TEXT("Error Message: %s"), *ErrorMessage);
            }
        }
    }
}

void UWebViewWidget::UploadMediaFinalize(FString& mediaid)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnFinalizeResponse);
    HttpRequest->SetURL(TEXT("https://api.x.com/2/media/upload"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + SNSSubsystem->GetToken());

    FString Content = FString::Printf(TEXT("command=FINALIZE&media_id=%s"), *mediaid);

    HttpRequest->SetContentAsString(Content);

    HttpRequest->ProcessRequest();
}

void UWebViewWidget::OnFinalizeResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonResponse;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    int32 ResponseCode = Response->GetResponseCode();

    UE_LOG(LogTemp, Warning, TEXT("OnFinalizeResponse - ResponseCode: %d"), ResponseCode)

    if (bWasSuccessful && (ResponseCode / 100) == 2)
    {
        if (FJsonSerializer::Deserialize(Reader, JsonResponse))
        {
            TSharedPtr<FJsonObject> DataObject = JsonResponse->GetObjectField(TEXT("data"));
            if (DataObject.IsValid())
            {
                MediaId = DataObject->GetStringField(TEXT("id"));
                UE_LOG(LogTemp, Log, TEXT("MediaTweet ID: %s"), *MediaId);

                UploadTweet(MediaId);

                //============================디버깅용=====================================
                //OutLoadingMenu(ResponseCode);
            }
            else
            {
                OutLoadingMenu(ResponseCode);

                UE_LOG(LogTemp, Error, TEXT("Failed to find 'data' object in JSON."));
            }
        }
        else
        {
            OutLoadingMenu(ResponseCode);

            UE_LOG(LogTemp, Error, TEXT("Failed to parse JSON."));
        }
    }
    else
    {
        OutLoadingMenu(ResponseCode);

        FJsonSerializer::Deserialize(Reader, JsonResponse);

        FString ResponseContent = Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("Fail to Upload tweet[Finalize]. HTTP Status: %d, Response: %s"), Response->GetResponseCode(), *ResponseContent);

        Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid())
        {
            FString ErrorMessage;
            if (JsonResponse->TryGetStringField("error", ErrorMessage))
            {
                UE_LOG(LogTemp, Error, TEXT("Error Message: %s"), *ErrorMessage);
            }
        }
    }
}
//============================UploadMedia V2 변형된 방식==================================
void UWebViewWidget::UploadMediaV2(const FString& FilePath)
{
    if (SNSSubsystem->GetSelectedPhoto())
    {
        UTexture2D* texture = SNSSubsystem->GetSelectedPhoto()->texture;
        SNSSubsystem->GetSelectedPhoto()->ConvertTextureToPNG(texture, FileData, false);
        //UE_LOG(LogTemp, Log, TEXT("Convert complete Texture to png: FileData.Num() = %d"), FileData.Num())
    }

    // FileData에 PNG 바이트 배열이 들어있다고 가정
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnUploadMediaV2Response);
    HttpRequest->SetURL(TEXT("https://api.x.com/2/media/upload"));
    HttpRequest->SetVerb(TEXT("POST"));

    FString Boundary = "----WebKitFormBoundary7MA4YWxkTrZu0gW";
    HttpRequest->SetHeader(TEXT("Content-Type"), FString::Printf(TEXT("multipart/form-data; boundary=%s"), *Boundary));
    HttpRequest->SetHeader(TEXT("Authorization"), TEXT("Bearer ") + SNSSubsystem->GetToken());

    // multipart body
    FString HeaderStr;
    HeaderStr.Append("--" + Boundary + "\r\n");
    HeaderStr.Append("Content-Disposition: form-data; name=\"media\"; filename=\"image.png\"\r\n");
    HeaderStr.Append("Content-Type: image/png\r\n\r\n");

    TArray<uint8> Body;
    Body.Append((uint8*)TCHAR_TO_UTF8(*HeaderStr), HeaderStr.Len());
    Body.Append(FileData); // 실제 PNG 바이트 배열
    FString FooterStr = "\r\n--" + Boundary + "\r\n";
    FooterStr.Append("Content-Disposition: form-data; name=\"media_category\"\r\n\r\n");
    FooterStr.Append("tweet_image\r\n");
    FooterStr.Append("--" + Boundary + "--\r\n");
    Body.Append((uint8*)TCHAR_TO_UTF8(*FooterStr), FooterStr.Len());

    HttpRequest->SetContent(Body);
    HttpRequest->ProcessRequest();
}

void UWebViewWidget::OnUploadMediaV2Response(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    if (!bWasSuccessful || !Response.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("UploadMediaV2 failed: no response"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("UploadMediaV2 Response: %s"), *Response->GetContentAsString());

    TSharedPtr<FJsonObject> JsonResponse;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
    if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid())
    {
        if (JsonResponse->HasField(TEXT("data")))
        {
            TSharedPtr<FJsonObject> DataObj = JsonResponse->GetObjectField(TEXT("data"));
            MediaId = DataObj->GetStringField(TEXT("id"));
            UE_LOG(LogTemp, Log, TEXT("Uploaded Media ID: %s"), *MediaId);

            // 바로 트윗 업로드 함수 호출
            UploadTweet(MediaId);
        }
    }
}

//===========================================================================

void UWebViewWidget::GetTweetLikes(FString TweetId)
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::GetTweetLikes"));

    FString URL = FString::Printf(TEXT("https://api.twitter.com/2/tweets/%s/liking_users"), *TweetId);

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(URL);
    Request->SetVerb("GET");
    Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *SNSSubsystem->GetToken()));
    Request->SetHeader("Content-Type", "application/json");

    Request->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnGetTweetLikesResponse);
    Request->ProcessRequest();
}

void UWebViewWidget::OnGetTweetLikesResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::OnGetTweetLikesResponse"));

    if (bWasSuccessful && Response.IsValid())
    {
        FString ResponseString = Response->GetContentAsString();
        UE_LOG(LogTemp, Log, TEXT("Tweet Likes Response: %s"), *ResponseString);

        // JSON 파싱 후 사용자 목록 가져오기
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to get Tweet Likes."));
    }
}

void UWebViewWidget::OnPostTweetWindClicked()
{
    SetPostTweetMod();
}

void UWebViewWidget::SetWebBrowseMod()
{

    WebBrowserWidget->SetVisibility(ESlateVisibility::Visible);

    ViewTweetBox->SetVisibility(ESlateVisibility::Hidden);

    PostTweetBorder->SetVisibility(ESlateVisibility::Hidden);

    SelectPhotoText->SetVisibility(ESlateVisibility::Hidden);
}
void UWebViewWidget::SetPostTweetMod()
{
        //사진 가져오기
      UPhotoData* Photo = SNSSubsystem->GetSelectedPhoto();
    if (Photo)
    {
        UE_LOG(LogTemp, Log, TEXT("Photo is valid"))
        PhotoImage->SetBrushFromTexture(Photo->texture);

        TweetButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", "트윗"));
        SelectPhotoText->SetVisibility(ESlateVisibility::Hidden);

        PhotoImage->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
    }
    else
    {
        PhotoImage->SetBrushFromTexture(nullptr);

        TweetButtonText->SetText(NSLOCTEXT("CollectionNamespace", "Collection", "사진 선택하기"));
        SelectPhotoText->SetVisibility(ESlateVisibility::Visible);

        PhotoImage->SetColorAndOpacity(FLinearColor(0.2f, 0.2f, 0.2f, 1.f));
    }

    SNSSubsystem->SetCurrentMenu(SNSMenuMod::TweetPost);

    WebBrowserWidget->SetVisibility(ESlateVisibility::Hidden);

    ViewTweetBox->SetVisibility(ESlateVisibility::Hidden);

    PostTweetBorder->SetVisibility(ESlateVisibility::Visible);
}
void UWebViewWidget::SetViewTweetMod()
{

    SNSSubsystem->SetCurrentMenu(SNSMenuMod::TweetView);

    WebBrowserWidget->SetVisibility(ESlateVisibility::Hidden);

    ViewTweetBox->SetVisibility(ESlateVisibility::Visible);

    PostTweetBorder->SetVisibility(ESlateVisibility::Hidden);

    SelectPhotoText->SetVisibility(ESlateVisibility::Hidden);

    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::SetViewTweetMod"));

    // 트윗 가져오기
    //if (!SNSSubsystem->MediaIds.IsEmpty())
    //{
    //    UE_LOG(LogTemp, Log, TEXT(" if (!SNSSubsystem->MediaIds.IsEmpty())"));

    //    // 좋아요 개수 가져오기
    //    for (FString id : SNSSubsystem->MediaIds)
    //    {
    //        //GetTweetLikes(id);
    //        
    //    }
    //}


}


void UWebViewWidget::OnUrlChanged(const FText& NewText)
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::OnUrlChanged"))

    FString URL = NewText.ToString();

    if (!URL.Contains(RedirectURL))
    {
        UE_LOG(LogTemp, Log, TEXT("URL not contains RedirectURL"));

        return;
    }

    if (URL.Contains(TEXT("error")))
    {
        UE_LOG(LogTemp, Warning, TEXT("URL Error"));
        return;
    }

    int32 CodeIndex = URL.Find(TEXT("code="), ESearchCase::IgnoreCase, ESearchDir::FromStart);

    FString OauthCode;

    if (CodeIndex != INDEX_NONE)
    {
        OauthCode = URL.Mid(CodeIndex + 5);

        UE_LOG(LogTemp, Log, TEXT("OnUrlChanged - OauthCode: %s"), *OauthCode);

        RequestToken(OauthCode);
    }
}

void UWebViewWidget::RequestToken(const FString& OAuthCode)
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::RequestToken"))

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnRequestTokenResponseReceived);
    HttpRequest->SetURL(TEXT("https://api.twitter.com/2/oauth2/token"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/x-www-form-urlencoded"));

    FString PostData = FString::Printf(TEXT("code=%s&grant_type=authorization_code&client_id=%s&redirect_uri=%s&code_verifier=challenge"),
        *FPlatformHttp::UrlEncode(OAuthCode),
        *FPlatformHttp::UrlEncode(ClientID),
        *FPlatformHttp::UrlEncode(RedirectURL));

    HttpRequest->SetContentAsString(PostData);

    HttpRequest->ProcessRequest();
}

void UWebViewWidget::OnRequestTokenResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::OnRequestTokenResponseReceived"))

    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
    if (bWasSuccessful && Response->GetResponseCode() == 200)
    {
        UE_LOG(LogTemp, Log, TEXT("RequestToken Success"));


        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            SNSSubsystem->SetToken(JsonObject->GetStringField("access_token"));

            UE_LOG(LogTemp, Log, TEXT("OnRequestTokenResponseReceived - AccessToken: %s"), *SNSSubsystem->GetToken());
            
            if (SNSSubsystem->GetCurrentMenu() == SNSMenuMod::TweetPost)
            {
                SetPostTweetMod();
            }
            else
            {
                SetViewTweetMod();
            }
        }
    }
    else
    {
        FJsonSerializer::Deserialize(Reader, JsonObject);
        FString ResponseContent = Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("Failed to get request token. HTTP Status: %d, Response: %s"), Response->GetResponseCode(), *ResponseContent);

        Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            FString ErrorMessage;
            if (JsonObject->TryGetStringField("error", ErrorMessage))
            {
                UE_LOG(LogTemp, Error, TEXT("Error Message: %s"), *ErrorMessage);
            }
        }
    }
}

void UWebViewWidget::UploadTweet(const FString& MediaID)
{
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->OnProcessRequestComplete().BindUObject(this, &UWebViewWidget::OnUploadTweetResponseReceived);
    HttpRequest->SetURL(TEXT("https://api.twitter.com/2/tweets"));
    HttpRequest->SetVerb(TEXT("POST"));
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
    HttpRequest->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *SNSSubsystem->GetToken()));

    FText TweetContent = TweetText->GetText();
    TextContent = TweetContent.ToString();
    UE_LOG(LogTemp, Log, TEXT("Tweet Button - TweetContent: %s"), *TextContent);

    FString TweetBody = FString::Printf(
        TEXT("{\"text\":\"%s\", \"media\": {\"media_ids\": [\"%s\"]}}"),
        *TextContent,*MediaID
    );

    HttpRequest->SetContentAsString(TweetBody);

    //HttpRequest->SetContentAsString(RequestBody);

    HttpRequest->ProcessRequest();
}

void UWebViewWidget::OnUploadTweetResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
    TSharedPtr<FJsonObject> JsonObject;
    TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

    int32 ResponseCode = Response->GetResponseCode();

    if (bWasSuccessful && ResponseCode == 201)
    {
        UE_LOG(LogTemp, Log, TEXT("UploadTwee Success"));
        //SNSSubsystem->AddMediaIds(MediaID);

        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            UE_LOG(LogTemp, Log, TEXT("UploadTwee - JsonObject is valid"));
            TSharedPtr<FJsonObject> DataObject = JsonObject->GetObjectField(TEXT("data"));
            if (DataObject.IsValid())
            {
                FString TweetId = DataObject->GetStringField(TEXT("id"));
                UE_LOG(LogTemp, Log, TEXT("Tweet ID: %s"), *TweetId);
                SNSSubsystem->MediaIds.Add(TweetId);


                // 스킬 포인트 획득
                USkillSubsystem* skillsubsystem = UGameInstance::GetSubsystem<USkillSubsystem>(GetWorld()->GetGameInstance());
                skillsubsystem->GetRandomSkillPoint(50,100,1);

                // SNS 개수 가져오기
                int32 num = SNSSubsystem->MediaIds.Num();
                UStorySubsystem* StorySubsystem = UGameInstance::GetSubsystem<UStorySubsystem>(GetWorld()->GetGameInstance());

                switch (num)
                {
                case 1:
                    // 수집가 이벤트
                    StorySubsystem->CollectorEvent();
                    break;
                case 3:
                    StorySubsystem->KidEvent();
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to find 'data' object in JSON."));
            }
        }
    }
    else
    {
        FJsonSerializer::Deserialize(Reader, JsonObject);

        FString ResponseContent = Response->GetContentAsString();
        UE_LOG(LogTemp, Error, TEXT("Fail to Upload tweet. HTTP Status: %d, Response: %s"), ResponseCode, *ResponseContent);

        Reader = TJsonReaderFactory<>::Create(ResponseContent);

        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            FString ErrorMessage;
            if (JsonObject->TryGetStringField("error", ErrorMessage))
            {
                UE_LOG(LogTemp, Error, TEXT("Error Message: %s"), *ErrorMessage);
            }
        }
    }
    OutLoadingMenu(ResponseCode);
}

void UWebViewWidget::OpenAuthenticationPage()
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::OpenAuthenticationPage"))

    if (WebBrowserWidget)
    {
        FString Scope = TEXT("tweet.read%20tweet.write%20users.read%20follows.read%20follows.write%20media.write");
        FString AuthURL = FString::Printf(TEXT("https://twitter.com/i/oauth2/authorize?response_type=code&client_id=%s&redirect_uri=%s&scope=%s&state=state&code_challenge=challenge&code_challenge_method=plain"),
            *ClientID, *RedirectURL, *Scope);

        UE_LOG(LogTemp, Log, TEXT("OpenAuthenticationPage - AuthURL: %s"), *AuthURL);


        WebBrowserWidget->LoadURL(AuthURL);
    }
}

void UWebViewWidget::InLoadingMenu()
{
    UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::InLoadingMenu"))

    // 백그라운드 블러 활성화
    LoadingBlur->SetVisibility(ESlateVisibility::Visible);

    // 로딩 텍스트 활성화
    LoadingText->SetVisibility(ESlateVisibility::Visible);
}

void UWebViewWidget::OutLoadingMenu(int32 ResultCode)
{
    if ((ResultCode / 100) == 2)
    {
        UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::OutLoadingMenu : Success"))

        SNSSubsystem->CompleteUpload();
        AddTextureToScrollBox(SNSSubsystem->Textures.Last()->texture);
        PhotoImage->SetBrushFromTexture(nullptr);

        SetViewTweetMod();
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("UWebViewWidget::OutLoadingMenu : Fail"))
    }
    // 백그라운드 블러 비활성화
    LoadingBlur->SetVisibility(ESlateVisibility::Hidden);

    // 로딩 텍스트 활성화
    LoadingText->SetVisibility(ESlateVisibility::Hidden);
}

void UWebViewWidget::AddTextureToScrollBox(UTexture2D* texture)
{
    UVerticalBox* verticalbox = NewObject<UVerticalBox>(this);
    UScaleBox* scalebox = NewObject<UScaleBox>(this);
    UImage* NewImage = NewObject<UImage>(this);
    if (NewImage)
    {
        int32 sizex = texture->GetSizeX();
        int32 sizey = texture->GetSizeY();

        UScrollBoxSlot* BoxSlot = static_cast<UScrollBoxSlot*>(ViewTweetScroll->AddChild(verticalbox));
        UVerticalBoxSlot* verticalboxSlot = static_cast<UVerticalBoxSlot*>(verticalbox->AddChild(scalebox));

        FMargin padding(0.f, -sizey / 2 + imagehalfsize / 2, 0.f,-sizey / 2 + imagehalfsize);
        verticalboxSlot->SetPadding(padding);

        scalebox->AddChild(NewImage);
        BoxSlot->SetSize(ESlateSizeRule::Automatic);
        BoxSlot->SetHorizontalAlignment(HAlign_Fill);
        BoxSlot->SetVerticalAlignment(VAlign_Fill);

        verticalboxSlot->SetSize(ESlateSizeRule::Automatic);
        verticalboxSlot->SetHorizontalAlignment(HAlign_Fill);
        verticalboxSlot->SetVerticalAlignment(VAlign_Fill);

        FSlateBrush Brush;
        Brush.SetResourceObject(texture);
        Brush.ImageSize = FVector2D(sizex, sizey);
        NewImage->SetBrush(Brush);
    }
}
