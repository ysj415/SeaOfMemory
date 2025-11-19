// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/MesageWidget.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMesageWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMesageWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMesageWidget_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageListButton_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UPhotoButton_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(UMesageWidget::execOnPhotoButtonClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPhotoButtonClicked(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execOnImageSelectClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageSelectClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execOnChoice3Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChoice3Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execOnChoice2Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChoice2Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execOnChoice1Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChoice1Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execOnListButtonClicked)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListButtonClicked(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execAddMessageList)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_nameText);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessageList(Z_Param_nameText,Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execClearImageBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearImageBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execHiddenImageSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HiddenImageSelectButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execSetImageSelectButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImageSelectButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execAddMessageImage)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessageImage(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execAddMessageText)
	{
		P_GET_UBOOL(Z_Param_isMyMessage);
		P_GET_PROPERTY(FTextProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessageText(Z_Param_isMyMessage,Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execClearSubsystemMessageWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSubsystemMessageWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execSetThreeChoiceBox)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_text1);
		P_GET_PROPERTY(FTextProperty,Z_Param_text2);
		P_GET_PROPERTY(FTextProperty,Z_Param_text3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetThreeChoiceBox(Z_Param_text1,Z_Param_text2,Z_Param_text3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execSetTwoChoiceBox)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_text1);
		P_GET_PROPERTY(FTextProperty,Z_Param_text2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTwoChoiceBox(Z_Param_text1,Z_Param_text2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execSetOneChoiceBox)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_text1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOneChoiceBox(Z_Param_text1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMesageWidget::execSetChattingVisible)
	{
		P_GET_ENUM(ESlateVisibility,Z_Param_Vis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChattingVisible(ESlateVisibility(Z_Param_Vis));
		P_NATIVE_END;
	}
	void UMesageWidget::StaticRegisterNativesUMesageWidget()
	{
		UClass* Class = UMesageWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMessageImage", &UMesageWidget::execAddMessageImage },
			{ "AddMessageList", &UMesageWidget::execAddMessageList },
			{ "AddMessageText", &UMesageWidget::execAddMessageText },
			{ "ClearImageBox", &UMesageWidget::execClearImageBox },
			{ "ClearSubsystemMessageWidget", &UMesageWidget::execClearSubsystemMessageWidget },
			{ "HiddenImageSelectButton", &UMesageWidget::execHiddenImageSelectButton },
			{ "OnBackButtonClicked", &UMesageWidget::execOnBackButtonClicked },
			{ "OnChoice1Clicked", &UMesageWidget::execOnChoice1Clicked },
			{ "OnChoice2Clicked", &UMesageWidget::execOnChoice2Clicked },
			{ "OnChoice3Clicked", &UMesageWidget::execOnChoice3Clicked },
			{ "OnImageSelectClicked", &UMesageWidget::execOnImageSelectClicked },
			{ "OnListButtonClicked", &UMesageWidget::execOnListButtonClicked },
			{ "OnPhotoButtonClicked", &UMesageWidget::execOnPhotoButtonClicked },
			{ "SetChattingVisible", &UMesageWidget::execSetChattingVisible },
			{ "SetImageSelectButton", &UMesageWidget::execSetImageSelectButton },
			{ "SetOneChoiceBox", &UMesageWidget::execSetOneChoiceBox },
			{ "SetThreeChoiceBox", &UMesageWidget::execSetThreeChoiceBox },
			{ "SetTwoChoiceBox", &UMesageWidget::execSetTwoChoiceBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics
	{
		struct MesageWidget_eventAddMessageImage_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventAddMessageImage_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "AddMessageImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::MesageWidget_eventAddMessageImage_Parms), Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_AddMessageImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_AddMessageImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics
	{
		struct MesageWidget_eventAddMessageList_Parms
		{
			FText nameText;
			FString name;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_nameText;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::NewProp_nameText = { "nameText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventAddMessageList_Parms, nameText), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventAddMessageList_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::NewProp_nameText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "AddMessageList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::MesageWidget_eventAddMessageList_Parms), Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_AddMessageList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_AddMessageList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics
	{
		struct MesageWidget_eventAddMessageText_Parms
		{
			bool isMyMessage;
			FText text;
		};
		static void NewProp_isMyMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMyMessage;
		static const UECodeGen_Private::FTextPropertyParams NewProp_text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::NewProp_isMyMessage_SetBit(void* Obj)
	{
		((MesageWidget_eventAddMessageText_Parms*)Obj)->isMyMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::NewProp_isMyMessage = { "isMyMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MesageWidget_eventAddMessageText_Parms), &Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::NewProp_isMyMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventAddMessageText_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::NewProp_isMyMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "AddMessageText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::MesageWidget_eventAddMessageText_Parms), Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_AddMessageText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_AddMessageText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_ClearImageBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_ClearImageBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_ClearImageBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "ClearImageBox", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_ClearImageBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_ClearImageBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_ClearImageBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_ClearImageBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "ClearSubsystemMessageWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "HiddenImageSelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnChoice1Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnChoice2Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnChoice3Clicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnImageSelectClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics
	{
		struct MesageWidget_eventOnListButtonClicked_Parms
		{
			FString name;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventOnListButtonClicked_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnListButtonClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::MesageWidget_eventOnListButtonClicked_Parms), Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnListButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnListButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics
	{
		struct MesageWidget_eventOnPhotoButtonClicked_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventOnPhotoButtonClicked_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "OnPhotoButtonClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::MesageWidget_eventOnPhotoButtonClicked_Parms), Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics
	{
		struct MesageWidget_eventSetChattingVisible_Parms
		{
			ESlateVisibility Vis;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Vis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Vis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::NewProp_Vis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::NewProp_Vis = { "Vis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetChattingVisible_Parms, Vis), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::NewProp_Vis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::NewProp_Vis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "SetChattingVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::MesageWidget_eventSetChattingVisible_Parms), Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_SetChattingVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_SetChattingVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_SetImageSelectButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_SetImageSelectButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_SetImageSelectButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "SetImageSelectButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_SetImageSelectButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetImageSelectButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_SetImageSelectButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_SetImageSelectButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics
	{
		struct MesageWidget_eventSetOneChoiceBox_Parms
		{
			FText text1;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_text1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::NewProp_text1 = { "text1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetOneChoiceBox_Parms, text1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::NewProp_text1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "SetOneChoiceBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::MesageWidget_eventSetOneChoiceBox_Parms), Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics
	{
		struct MesageWidget_eventSetThreeChoiceBox_Parms
		{
			FText text1;
			FText text2;
			FText text3;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_text1;
		static const UECodeGen_Private::FTextPropertyParams NewProp_text2;
		static const UECodeGen_Private::FTextPropertyParams NewProp_text3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::NewProp_text1 = { "text1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetThreeChoiceBox_Parms, text1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::NewProp_text2 = { "text2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetThreeChoiceBox_Parms, text2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::NewProp_text3 = { "text3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetThreeChoiceBox_Parms, text3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::NewProp_text1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::NewProp_text2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::NewProp_text3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "SetThreeChoiceBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::MesageWidget_eventSetThreeChoiceBox_Parms), Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics
	{
		struct MesageWidget_eventSetTwoChoiceBox_Parms
		{
			FText text1;
			FText text2;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_text1;
		static const UECodeGen_Private::FTextPropertyParams NewProp_text2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::NewProp_text1 = { "text1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetTwoChoiceBox_Parms, text1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::NewProp_text2 = { "text2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MesageWidget_eventSetTwoChoiceBox_Parms, text2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::NewProp_text1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::NewProp_text2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMesageWidget, nullptr, "SetTwoChoiceBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::MesageWidget_eventSetTwoChoiceBox_Parms), Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMesageWidget);
	UClass* Z_Construct_UClass_UMesageWidget_NoRegister()
	{
		return UMesageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMesageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageBoxImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageBoxImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choice1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choice2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Choice3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Choice3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButton1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButton1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButton2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButton2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButton3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButton3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSelectButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageSelectButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSelectBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageSelectBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageSelectScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageSelectScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMessageTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentMessageTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListButtons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListButtons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListButtons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListTextPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListTextPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyMessagePadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyMessagePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyMessageColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyMessageColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheOtherPersonMessagePadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TheOtherPersonMessagePadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheOtherPersonMessageColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TheOtherPersonMessageColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CountTextColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBoxs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBoxs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HorizontalBoxs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Buttons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhotoCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentPhotoCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPhotoIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedPhotoIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMesageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMesageWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMesageWidget_AddMessageImage, "AddMessageImage" }, // 1790933599
		{ &Z_Construct_UFunction_UMesageWidget_AddMessageList, "AddMessageList" }, // 4151989559
		{ &Z_Construct_UFunction_UMesageWidget_AddMessageText, "AddMessageText" }, // 3912375583
		{ &Z_Construct_UFunction_UMesageWidget_ClearImageBox, "ClearImageBox" }, // 3249350918
		{ &Z_Construct_UFunction_UMesageWidget_ClearSubsystemMessageWidget, "ClearSubsystemMessageWidget" }, // 4037226813
		{ &Z_Construct_UFunction_UMesageWidget_HiddenImageSelectButton, "HiddenImageSelectButton" }, // 3365822911
		{ &Z_Construct_UFunction_UMesageWidget_OnBackButtonClicked, "OnBackButtonClicked" }, // 4270119526
		{ &Z_Construct_UFunction_UMesageWidget_OnChoice1Clicked, "OnChoice1Clicked" }, // 4294313194
		{ &Z_Construct_UFunction_UMesageWidget_OnChoice2Clicked, "OnChoice2Clicked" }, // 2043307720
		{ &Z_Construct_UFunction_UMesageWidget_OnChoice3Clicked, "OnChoice3Clicked" }, // 2888520173
		{ &Z_Construct_UFunction_UMesageWidget_OnImageSelectClicked, "OnImageSelectClicked" }, // 1927829007
		{ &Z_Construct_UFunction_UMesageWidget_OnListButtonClicked, "OnListButtonClicked" }, // 3488365987
		{ &Z_Construct_UFunction_UMesageWidget_OnPhotoButtonClicked, "OnPhotoButtonClicked" }, // 4010114341
		{ &Z_Construct_UFunction_UMesageWidget_SetChattingVisible, "SetChattingVisible" }, // 3162703828
		{ &Z_Construct_UFunction_UMesageWidget_SetImageSelectButton, "SetImageSelectButton" }, // 3474464548
		{ &Z_Construct_UFunction_UMesageWidget_SetOneChoiceBox, "SetOneChoiceBox" }, // 1230965631
		{ &Z_Construct_UFunction_UMesageWidget_SetThreeChoiceBox, "SetThreeChoiceBox" }, // 3691993715
		{ &Z_Construct_UFunction_UMesageWidget_SetTwoChoiceBox, "SetTwoChoiceBox" }, // 1162026422
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MesageWidget.h" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListScrollBox = { "ListScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ListScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageScrollBox = { "MessageScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, MessageScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageBoxImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageBoxImage = { "MessageBoxImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, MessageBoxImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageBoxImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageBoxImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageTargetName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageTargetName = { "MessageTargetName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, MessageTargetName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageTargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectButton = { "SelectButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, SelectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceBox = { "ChoiceBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ChoiceBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, Choice1), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice2 = { "Choice2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, Choice2), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice3 = { "Choice3", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, Choice3), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton1 = { "ChoiceButton1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ChoiceButton1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton2 = { "ChoiceButton2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ChoiceButton2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton3_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton3 = { "ChoiceButton3", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ChoiceButton3), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// \xef\xbf\xbd\xcc\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectButton = { "ImageSelectButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ImageSelectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectBox = { "ImageSelectBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ImageSelectBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectScrollBox = { "ImageSelectScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ImageSelectScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentMessageTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentMessageTarget = { "CurrentMessageTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, CurrentMessageTarget), METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentMessageTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentMessageTarget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons_Inner = { "ListButtons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMessageListButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons = { "ListButtons", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ListButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "Comment", "// \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
		{ "ToolTip", "\xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ErrorTolerance), METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ErrorTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtonPadding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "Comment", "// \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
		{ "ToolTip", "\xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtonPadding = { "ListButtonPadding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ListButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtonPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListTextPadding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListTextPadding = { "ListTextPadding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ListTextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListTextPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListTextPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_ButtonColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_ButtonColor = { "ButtonColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, ButtonColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ButtonColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_ButtonColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_RenderScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, RenderScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_RenderScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_RenderScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextSize = { "TextSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, TextSize), METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessagePadding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "Comment", "// \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
		{ "ToolTip", "\xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessagePadding = { "MyMessagePadding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, MyMessagePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessagePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessagePadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessageColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessageColor = { "MyMessageColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, MyMessageColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessageColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessageColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessagePadding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessagePadding = { "TheOtherPersonMessagePadding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, TheOtherPersonMessagePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessagePadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessagePadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessageColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessageColor = { "TheOtherPersonMessageColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, TheOtherPersonMessageColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessageColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessageColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextPadding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextPadding = { "TextPadding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, TextPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_CountTextColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MesageWidget" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_CountTextColor = { "CountTextColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, CountTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_CountTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_CountTextColor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, Images), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs_Inner = { "HorizontalBoxs", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs = { "HorizontalBoxs", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, HorizontalBoxs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhotoButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentPhotoCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentPhotoCount = { "CurrentPhotoCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, CurrentPhotoCount), METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentPhotoCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentPhotoCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectedPhotoIndex_MetaData[] = {
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/MesageWidget.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectedPhotoIndex = { "SelectedPhotoIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMesageWidget, SelectedPhotoIndex), METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectedPhotoIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectedPhotoIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMesageWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageBoxImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_MessageTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Choice3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ChoiceButton3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_BackButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ImageSelectScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentMessageTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ListTextPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_ButtonColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_RenderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessagePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_MyMessageColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessagePadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_TheOtherPersonMessageColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_CountTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Images,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_HorizontalBoxs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_Buttons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_CurrentPhotoCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMesageWidget_Statics::NewProp_SelectedPhotoIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMesageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMesageWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMesageWidget_Statics::ClassParams = {
		&UMesageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMesageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMesageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMesageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMesageWidget()
	{
		if (!Z_Registration_Info_UClass_UMesageWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMesageWidget.OuterSingleton, Z_Construct_UClass_UMesageWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMesageWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UMesageWidget>()
	{
		return UMesageWidget::StaticClass();
	}
	UMesageWidget::UMesageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMesageWidget);
	UMesageWidget::~UMesageWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MesageWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MesageWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMesageWidget, UMesageWidget::StaticClass, TEXT("UMesageWidget"), &Z_Registration_Info_UClass_UMesageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMesageWidget), 3718233145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MesageWidget_h_752135392(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MesageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MesageWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
