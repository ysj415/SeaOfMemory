// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/NewCollectionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewCollectionWidget() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UNewCollectionWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UNewCollectionWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(UNewCollectionWidget::execSetCameraWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraWidget();
		P_NATIVE_END;
	}
	void UNewCollectionWidget::StaticRegisterNativesUNewCollectionWidget()
	{
		UClass* Class = UNewCollectionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCameraWidget", &UNewCollectionWidget::execSetCameraWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewCollectionWidget, nullptr, "SetCameraWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewCollectionWidget);
	UClass* Z_Construct_UClass_UNewCollectionWidget_NoRegister()
	{
		return UNewCollectionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNewCollectionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpenAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionExplain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollectionExplain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewCollectionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewCollectionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewCollectionWidget_SetCameraWidget, "SetCameraWidget" }, // 186547024
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NewCollectionWidget.h" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_OpenAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_OpenAnimation = { "OpenAnimation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, OpenAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_OpenAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_OpenAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CloseAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CloseAnimation = { "CloseAnimation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, CloseAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CloseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CloseAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "Category", "NewCollectionWidget" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, MyCharacter), Z_Construct_UClass_ASOMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_MyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_MyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionImage = { "CollectionImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, CollectionImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CheckButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CheckButton = { "CheckButton", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, CheckButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CheckButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CheckButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, CollectionName), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionExplain_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewCollectionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionExplain = { "CollectionExplain", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewCollectionWidget, CollectionExplain), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionExplain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionExplain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewCollectionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_OpenAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CloseAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_MyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CheckButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewCollectionWidget_Statics::NewProp_CollectionExplain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewCollectionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewCollectionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewCollectionWidget_Statics::ClassParams = {
		&UNewCollectionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewCollectionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewCollectionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewCollectionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewCollectionWidget()
	{
		if (!Z_Registration_Info_UClass_UNewCollectionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewCollectionWidget.OuterSingleton, Z_Construct_UClass_UNewCollectionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewCollectionWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UNewCollectionWidget>()
	{
		return UNewCollectionWidget::StaticClass();
	}
	UNewCollectionWidget::UNewCollectionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewCollectionWidget);
	UNewCollectionWidget::~UNewCollectionWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewCollectionWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewCollectionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewCollectionWidget, UNewCollectionWidget::StaticClass, TEXT("UNewCollectionWidget"), &Z_Registration_Info_UClass_UNewCollectionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewCollectionWidget), 1556907304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewCollectionWidget_h_3933577618(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewCollectionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewCollectionWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
