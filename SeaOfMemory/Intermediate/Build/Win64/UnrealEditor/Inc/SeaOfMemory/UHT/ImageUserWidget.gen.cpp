// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/ImageUserWidget.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageUserWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UImageUserWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UImageUserWidget_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(UImageUserWidget::execGetSpeciesName)
	{
		P_GET_ENUM(ESpecies,Z_Param_species);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetSpeciesName(ESpecies(Z_Param_species));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageUserWidget::execOnShareButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShareButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageUserWidget::execOnDeleteButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeleteButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageUserWidget::execOnButtonClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageUserWidget::execSetMainImage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_i);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainImage(Z_Param_i);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageUserWidget::execNativeOnInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnInitialized();
		P_NATIVE_END;
	}
	void UImageUserWidget::StaticRegisterNativesUImageUserWidget()
	{
		UClass* Class = UImageUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpeciesName", &UImageUserWidget::execGetSpeciesName },
			{ "NativeOnInitialized", &UImageUserWidget::execNativeOnInitialized },
			{ "OnButtonClicked", &UImageUserWidget::execOnButtonClicked },
			{ "OnDeleteButtonClicked", &UImageUserWidget::execOnDeleteButtonClicked },
			{ "OnShareButtonClicked", &UImageUserWidget::execOnShareButtonClicked },
			{ "SetMainImage", &UImageUserWidget::execSetMainImage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics
	{
		struct ImageUserWidget_eventGetSpeciesName_Parms
		{
			ESpecies species;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_species_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_species;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::NewProp_species_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::NewProp_species = { "species", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageUserWidget_eventGetSpeciesName_Parms, species), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageUserWidget_eventGetSpeciesName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::NewProp_species_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::NewProp_species,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUserWidget, nullptr, "GetSpeciesName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::ImageUserWidget_eventGetSpeciesName_Parms), Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUserWidget_GetSpeciesName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageUserWidget_GetSpeciesName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUserWidget, nullptr, "NativeOnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics
	{
		struct ImageUserWidget_eventOnButtonClicked_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageUserWidget_eventOnButtonClicked_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUserWidget, nullptr, "OnButtonClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::ImageUserWidget_eventOnButtonClicked_Parms), Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUserWidget_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageUserWidget_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUserWidget, nullptr, "OnDeleteButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUserWidget, nullptr, "OnShareButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics
	{
		struct ImageUserWidget_eventSetMainImage_Parms
		{
			int32 i;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_i;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::NewProp_i = { "i", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageUserWidget_eventSetMainImage_Parms, i), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::NewProp_i,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageUserWidget, nullptr, "SetMainImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::ImageUserWidget_eventSetMainImage_Parms), Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageUserWidget_SetMainImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageUserWidget_SetMainImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageUserWidget);
	UClass* Z_Construct_UClass_UImageUserWidget_NoRegister()
	{
		return UImageUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UImageUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBoxScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalBoxScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBoxPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalBoxPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeleteButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeleteButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShareButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeciesText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeciesText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SOMCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SOMCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScrollBoxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_imagehalfsize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_imagehalfsize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageUserWidget_GetSpeciesName, "GetSpeciesName" }, // 4183640020
		{ &Z_Construct_UFunction_UImageUserWidget_NativeOnInitialized, "NativeOnInitialized" }, // 272181629
		{ &Z_Construct_UFunction_UImageUserWidget_OnButtonClicked, "OnButtonClicked" }, // 294558334
		{ &Z_Construct_UFunction_UImageUserWidget_OnDeleteButtonClicked, "OnDeleteButtonClicked" }, // 1585831863
		{ &Z_Construct_UFunction_UImageUserWidget_OnShareButtonClicked, "OnShareButtonClicked" }, // 3719737594
		{ &Z_Construct_UFunction_UImageUserWidget_SetMainImage, "SetMainImage" }, // 1741736057
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ImageUserWidget.h" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxScale_MetaData[] = {
		{ "Category", "ImageUserWidget" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxScale = { "HorizontalBoxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, HorizontalBoxScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxPadding_MetaData[] = {
		{ "Category", "ImageUserWidget" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxPadding = { "HorizontalBoxPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, HorizontalBoxPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_MainImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_MainImage = { "MainImage", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, MainImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_MainImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_MainImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBox = { "ScrollBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, ScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_DeleteButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_DeleteButton = { "DeleteButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, DeleteButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_DeleteButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_DeleteButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ShareButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ShareButton = { "ShareButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, ShareButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ShareButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ShareButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_EmptyText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_EmptyText = { "EmptyText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, EmptyText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_EmptyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_EmptyText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SpeciesText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SpeciesText = { "SpeciesText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, SpeciesText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SpeciesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SpeciesText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SOMCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SOMCharacter = { "SOMCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, SOMCharacter), Z_Construct_UClass_ASOMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SOMCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SOMCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBoxSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxSize" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBoxSize = { "ScrollBoxSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, ScrollBoxSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBoxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageUserWidget_Statics::NewProp_imagehalfsize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BoxSize" },
		{ "ModuleRelativePath", "Public/ImageUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImageUserWidget_Statics::NewProp_imagehalfsize = { "imagehalfsize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageUserWidget, imagehalfsize), METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_imagehalfsize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::NewProp_imagehalfsize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_HorizontalBoxPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_MainImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_DeleteButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ShareButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_EmptyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SpeciesText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_SOMCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_ScrollBoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageUserWidget_Statics::NewProp_imagehalfsize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageUserWidget_Statics::ClassParams = {
		&UImageUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImageUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageUserWidget()
	{
		if (!Z_Registration_Info_UClass_UImageUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageUserWidget.OuterSingleton, Z_Construct_UClass_UImageUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageUserWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UImageUserWidget>()
	{
		return UImageUserWidget::StaticClass();
	}
	UImageUserWidget::UImageUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageUserWidget);
	UImageUserWidget::~UImageUserWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImageUserWidget, UImageUserWidget::StaticClass, TEXT("UImageUserWidget"), &Z_Registration_Info_UClass_UImageUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageUserWidget), 3793679879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_2483913503(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
