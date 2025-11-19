// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/PhotoButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoButton() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UPhotoButton();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UPhotoButton_NoRegister();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics
	{
		struct _Script_SeaOfMemory_eventOnButtonClickedWithParam_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SeaOfMemory_eventOnButtonClickedWithParam_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/PhotoButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory, nullptr, "OnButtonClickedWithParam__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::_Script_SeaOfMemory_eventOnButtonClickedWithParam_Parms), Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnButtonClickedWithParam_DelegateWrapper(const FMulticastScriptDelegate& OnButtonClickedWithParam, int32 Value)
{
	struct _Script_SeaOfMemory_eventOnButtonClickedWithParam_Parms
	{
		int32 Value;
	};
	_Script_SeaOfMemory_eventOnButtonClickedWithParam_Parms Parms;
	Parms.Value=Value;
	OnButtonClickedWithParam.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPhotoButton::execHandleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked();
		P_NATIVE_END;
	}
	void UPhotoButton::StaticRegisterNativesUPhotoButton()
	{
		UClass* Class = UPhotoButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UPhotoButton::execHandleButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoButton_HandleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoButton_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoButton_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoButton, nullptr, "HandleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoButton_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoButton_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoButton_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhotoButton_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhotoButton);
	UClass* Z_Construct_UClass_UPhotoButton_NoRegister()
	{
		return UPhotoButton::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClickedWithParam_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClickedWithParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoButton_HandleButtonClicked, "HandleButtonClicked" }, // 627968856
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhotoButton.h" },
		{ "ModuleRelativePath", "Public/PhotoButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoButton_Statics::NewProp_OnClickedWithParam_MetaData[] = {
		{ "ModuleRelativePath", "Public/PhotoButton.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPhotoButton_Statics::NewProp_OnClickedWithParam = { "OnClickedWithParam", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhotoButton, OnClickedWithParam), Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPhotoButton_Statics::NewProp_OnClickedWithParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoButton_Statics::NewProp_OnClickedWithParam_MetaData)) }; // 1324383486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoButton_Statics::NewProp_OnClickedWithParam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhotoButton_Statics::ClassParams = {
		&UPhotoButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoButton_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoButton()
	{
		if (!Z_Registration_Info_UClass_UPhotoButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhotoButton.OuterSingleton, Z_Construct_UClass_UPhotoButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhotoButton.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UPhotoButton>()
	{
		return UPhotoButton::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoButton);
	UPhotoButton::~UPhotoButton() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_PhotoButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_PhotoButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhotoButton, UPhotoButton::StaticClass, TEXT("UPhotoButton"), &Z_Registration_Info_UClass_UPhotoButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhotoButton), 1019321573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_PhotoButton_h_3086910899(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_PhotoButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_PhotoButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
