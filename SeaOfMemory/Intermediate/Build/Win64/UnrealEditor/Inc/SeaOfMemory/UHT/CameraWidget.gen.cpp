// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/CameraWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCameraWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCameraWidget_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics
	{
		struct _Script_SeaOfMemory_eventNewCollectionRegistered_Parms
		{
			ESpecies BestSpecies;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BestSpecies_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BestSpecies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::NewProp_BestSpecies_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::NewProp_BestSpecies = { "BestSpecies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SeaOfMemory_eventNewCollectionRegistered_Parms, BestSpecies), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::NewProp_BestSpecies_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::NewProp_BestSpecies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory, nullptr, "NewCollectionRegistered__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::_Script_SeaOfMemory_eventNewCollectionRegistered_Parms), Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FNewCollectionRegistered_DelegateWrapper(const FMulticastScriptDelegate& NewCollectionRegistered, ESpecies BestSpecies)
{
	struct _Script_SeaOfMemory_eventNewCollectionRegistered_Parms
	{
		ESpecies BestSpecies;
	};
	_Script_SeaOfMemory_eventNewCollectionRegistered_Parms Parms;
	Parms.BestSpecies=BestSpecies;
	NewCollectionRegistered.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCameraWidget::execDrawTargetCircle)
	{
		P_GET_TARRAY(FVector2D,Z_Param_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawTargetCircle(Z_Param_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraWidget::execResetLastPhoto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetLastPhoto();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraWidget::execNewCollectionRegistered)
	{
		P_GET_ENUM(ESpecies,Z_Param_BestSpecies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewCollectionRegistered(ESpecies(Z_Param_BestSpecies));
		P_NATIVE_END;
	}
	void UCameraWidget::StaticRegisterNativesUCameraWidget()
	{
		UClass* Class = UCameraWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTargetCircle", &UCameraWidget::execDrawTargetCircle },
			{ "NewCollectionRegistered", &UCameraWidget::execNewCollectionRegistered },
			{ "ResetLastPhoto", &UCameraWidget::execResetLastPhoto },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics
	{
		struct CameraWidget_eventDrawTargetCircle_Parms
		{
			TArray<FVector2D> TargetLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::NewProp_TargetLocation_Inner = { "TargetLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraWidget_eventDrawTargetCircle_Parms, TargetLocation), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::NewProp_TargetLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraWidget, nullptr, "DrawTargetCircle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::CameraWidget_eventDrawTargetCircle_Parms), Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraWidget_DrawTargetCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraWidget_DrawTargetCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics
	{
		struct CameraWidget_eventNewCollectionRegistered_Parms
		{
			ESpecies BestSpecies;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BestSpecies_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BestSpecies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::NewProp_BestSpecies_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::NewProp_BestSpecies = { "BestSpecies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraWidget_eventNewCollectionRegistered_Parms, BestSpecies), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::NewProp_BestSpecies_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::NewProp_BestSpecies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraWidget, nullptr, "NewCollectionRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::CameraWidget_eventNewCollectionRegistered_Parms), Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraWidget_ResetLastPhoto_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraWidget_ResetLastPhoto_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\n" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraWidget_ResetLastPhoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraWidget, nullptr, "ResetLastPhoto", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraWidget_ResetLastPhoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraWidget_ResetLastPhoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraWidget_ResetLastPhoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraWidget_ResetLastPhoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraWidget);
	UClass* Z_Construct_UClass_UCameraWidget_NoRegister()
	{
		return UCameraWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCameraWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCanvasPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCanvasPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderBarImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnderBarImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocalPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPhoto_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastPhoto;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetImages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetImages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetImages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetImagePtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetImagePtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShutterTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShutterTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_circleColor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_circleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_circleOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_circleOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_circleSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_circleSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraWidget_DrawTargetCircle, "DrawTargetCircle" }, // 4111960787
		{ &Z_Construct_UFunction_UCameraWidget_NewCollectionRegistered, "NewCollectionRegistered" }, // 2076796218
		{ &Z_Construct_UFunction_UCameraWidget_ResetLastPhoto, "ResetLastPhoto" }, // 1137143506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraWidget.h" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_MyCanvasPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_MyCanvasPanel = { "MyCanvasPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, MyCanvasPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_MyCanvasPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_MyCanvasPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_CameraImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_CameraImage = { "CameraImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, CameraImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_CameraImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_CameraImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_UnderBarImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_UnderBarImage = { "UnderBarImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, UnderBarImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_UnderBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_UnderBarImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_BlackSpace_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_BlackSpace = { "BlackSpace", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, BlackSpace), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_BlackSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_BlackSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_FocalPointer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_FocalPointer = { "FocalPointer", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, FocalPointer), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_FocalPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_FocalPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_LastPhoto_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_LastPhoto = { "LastPhoto", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, LastPhoto), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_LastPhoto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_LastPhoto_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages_Inner = { "TargetImages", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages = { "TargetImages", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, TargetImages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImagePtr_MetaData[] = {
		{ "Category", "Image" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImagePtr = { "TargetImagePtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, TargetImagePtr), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImagePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImagePtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_ShutterTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShutterTime" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_ShutterTime = { "ShutterTime", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, ShutterTime), METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_ShutterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_ShutterTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleColor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TargetCircle" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleColor = { "circleColor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, circleColor), METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleOpacity_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TargetCircle" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleOpacity = { "circleOpacity", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, circleOpacity), METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TargetCircle" },
		{ "ModuleRelativePath", "Public/CameraWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleSize = { "circleSize", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraWidget, circleSize), METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_MyCanvasPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_CameraImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_UnderBarImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_BlackSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_FocalPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_LastPhoto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_TargetImagePtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_ShutterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraWidget_Statics::NewProp_circleSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraWidget_Statics::ClassParams = {
		&UCameraWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraWidget()
	{
		if (!Z_Registration_Info_UClass_UCameraWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraWidget.OuterSingleton, Z_Construct_UClass_UCameraWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UCameraWidget>()
	{
		return UCameraWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraWidget);
	UCameraWidget::~UCameraWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraWidget, UCameraWidget::StaticClass, TEXT("UCameraWidget"), &Z_Registration_Info_UClass_UCameraWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraWidget), 580708091U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_1846499436(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
