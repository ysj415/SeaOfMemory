// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/WebViewWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebViewWidget() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UWebViewWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UWebViewWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
	WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowser_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWebViewWidget::execSetViewTweetMod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewTweetMod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewWidget::execSetPostTweetMod)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostTweetMod();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewWidget::execOnPostTweetWindClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPostTweetWindClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewWidget::execTweetButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TweetButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewWidget::execOnUrlChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUrlChanged(Z_Param_Out_NewText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewWidget::execNativeConstruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeConstruct();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebViewWidget::execOpenAuthenticationPage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAuthenticationPage();
		P_NATIVE_END;
	}
	void UWebViewWidget::StaticRegisterNativesUWebViewWidget()
	{
		UClass* Class = UWebViewWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NativeConstruct", &UWebViewWidget::execNativeConstruct },
			{ "OnPostTweetWindClicked", &UWebViewWidget::execOnPostTweetWindClicked },
			{ "OnUrlChanged", &UWebViewWidget::execOnUrlChanged },
			{ "OpenAuthenticationPage", &UWebViewWidget::execOpenAuthenticationPage },
			{ "SetPostTweetMod", &UWebViewWidget::execSetPostTweetMod },
			{ "SetViewTweetMod", &UWebViewWidget::execSetViewTweetMod },
			{ "TweetButtonClick", &UWebViewWidget::execTweetButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebViewWidget_NativeConstruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_NativeConstruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_NativeConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "NativeConstruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_NativeConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_NativeConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_NativeConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_NativeConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "OnPostTweetWindClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics
	{
		struct WebViewWidget_eventOnUrlChanged_Parms
		{
			FText NewText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebViewWidget_eventOnUrlChanged_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "OnUrlChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::WebViewWidget_eventOnUrlChanged_Parms), Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_OnUrlChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_OnUrlChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web View" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "OpenAuthenticationPage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "SetPostTweetMod", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "SetViewTweetMod", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebViewWidget_TweetButtonClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebViewWidget_TweetButtonClick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void UploadMedia(UTexture2D* Texture);\n//void OnUploadMediaResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);\n" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
		{ "ToolTip", "void UploadMedia(UTexture2D* Texture);\nvoid OnUploadMediaResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebViewWidget_TweetButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebViewWidget, nullptr, "TweetButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebViewWidget_TweetButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebViewWidget_TweetButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebViewWidget_TweetButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebViewWidget_TweetButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebViewWidget);
	UClass* Z_Construct_UClass_UWebViewWidget_NoRegister()
	{
		return UWebViewWidget::StaticClass();
	}
	struct Z_Construct_UClass_UWebViewWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imagehalfsize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_imagehalfsize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WebBrowserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WebBrowserWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostTweetBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostTweetBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TweetBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TweetBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TweetText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TweetText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TweetButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TweetButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhotoImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhotoImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TweetButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TweetButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectPhotoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectPhotoText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTweetBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTweetBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewTweetScroll_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTweetScroll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostTweetWind_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostTweetWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBlur_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadingText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebViewWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebViewWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebViewWidget_NativeConstruct, "NativeConstruct" }, // 3470861506
		{ &Z_Construct_UFunction_UWebViewWidget_OnPostTweetWindClicked, "OnPostTweetWindClicked" }, // 1256398426
		{ &Z_Construct_UFunction_UWebViewWidget_OnUrlChanged, "OnUrlChanged" }, // 3257871458
		{ &Z_Construct_UFunction_UWebViewWidget_OpenAuthenticationPage, "OpenAuthenticationPage" }, // 1962820674
		{ &Z_Construct_UFunction_UWebViewWidget_SetPostTweetMod, "SetPostTweetMod" }, // 3683632179
		{ &Z_Construct_UFunction_UWebViewWidget_SetViewTweetMod, "SetViewTweetMod" }, // 3583217039
		{ &Z_Construct_UFunction_UWebViewWidget_TweetButtonClick, "TweetButtonClick" }, // 1529144830
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebViewWidget.h" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_imagehalfsize_MetaData[] = {
		{ "Category", "WebViewWidget" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_imagehalfsize = { "imagehalfsize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, imagehalfsize), METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_imagehalfsize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_imagehalfsize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_WebBrowserWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// sns \xed\x82\xa4 \xec\x9a\x94\xec\xb2\xad \xec\x9c\x84\xec\xa0\xaf\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
		{ "ToolTip", "sns \xed\x82\xa4 \xec\x9a\x94\xec\xb2\xad \xec\x9c\x84\xec\xa0\xaf" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_WebBrowserWidget = { "WebBrowserWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, WebBrowserWidget), Z_Construct_UClass_UWebBrowser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_WebBrowserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_WebBrowserWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// \xed\x8a\xb8\xec\x9c\x97 \xec\x9e\x91\xec\x84\xb1 \xec\x9c\x84\xec\xa0\xaf\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
		{ "ToolTip", "\xed\x8a\xb8\xec\x9c\x97 \xec\x9e\x91\xec\x84\xb1 \xec\x9c\x84\xec\xa0\xaf" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetBorder = { "PostTweetBorder", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, PostTweetBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetBox = { "TweetBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, TweetBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetText = { "TweetText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, TweetText), Z_Construct_UClass_UMultiLineEditableText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButton = { "TweetButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, TweetButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PhotoImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PhotoImage = { "PhotoImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, PhotoImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PhotoImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PhotoImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButtonText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButtonText = { "TweetButtonText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, TweetButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_SelectPhotoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_SelectPhotoText = { "SelectPhotoText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, SelectPhotoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_SelectPhotoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_SelectPhotoText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// \xed\x8a\xb8\xec\x9c\x97 \xeb\xb3\xb4\xea\xb8\xb0 \xec\x9c\x84\xec\xa0\xaf\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
		{ "ToolTip", "\xed\x8a\xb8\xec\x9c\x97 \xeb\xb3\xb4\xea\xb8\xb0 \xec\x9c\x84\xec\xa0\xaf" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetBox = { "ViewTweetBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, ViewTweetBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetScroll_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetScroll = { "ViewTweetScroll", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, ViewTweetScroll), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetScroll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetWind_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetWind = { "PostTweetWind", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, PostTweetWind), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetWind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingBlur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// \xeb\xa1\x9c\xeb\x94\xa9\xec\xb0\xbd\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
		{ "ToolTip", "\xeb\xa1\x9c\xeb\x94\xa9\xec\xb0\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingBlur = { "LoadingBlur", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, LoadingBlur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WebViewWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingText = { "LoadingText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebViewWidget, LoadingText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebViewWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_imagehalfsize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_WebBrowserWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PhotoImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_TweetButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_SelectPhotoText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_ViewTweetScroll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_PostTweetWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebViewWidget_Statics::NewProp_LoadingText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebViewWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebViewWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebViewWidget_Statics::ClassParams = {
		&UWebViewWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebViewWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebViewWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebViewWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebViewWidget()
	{
		if (!Z_Registration_Info_UClass_UWebViewWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebViewWidget.OuterSingleton, Z_Construct_UClass_UWebViewWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebViewWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UWebViewWidget>()
	{
		return UWebViewWidget::StaticClass();
	}
	UWebViewWidget::UWebViewWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebViewWidget);
	UWebViewWidget::~UWebViewWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebViewWidget, UWebViewWidget::StaticClass, TEXT("UWebViewWidget"), &Z_Registration_Info_UClass_UWebViewWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebViewWidget), 3412433507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_3550658123(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
