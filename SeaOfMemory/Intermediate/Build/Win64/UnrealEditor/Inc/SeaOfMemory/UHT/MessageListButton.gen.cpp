// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/MessageListButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessageListButton() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageListButton();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageListButton_NoRegister();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics
	{
		struct _Script_SeaOfMemory_eventOnListButtonClicked_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SeaOfMemory_eventOnListButtonClicked_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MessageListButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory, nullptr, "OnListButtonClicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::_Script_SeaOfMemory_eventOnListButtonClicked_Parms), Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnListButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& OnListButtonClicked, const FString& name)
{
	struct _Script_SeaOfMemory_eventOnListButtonClicked_Parms
	{
		FString name;
	};
	_Script_SeaOfMemory_eventOnListButtonClicked_Parms Parms;
	Parms.name=name;
	OnListButtonClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMessageListButton::execHandleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked();
		P_NATIVE_END;
	}
	void UMessageListButton::StaticRegisterNativesUMessageListButton()
	{
		UClass* Class = UMessageListButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UMessageListButton::execHandleButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMessageListButton_HandleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageListButton_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MessageListButton.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageListButton_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageListButton, nullptr, "HandleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageListButton_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageListButton_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageListButton_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageListButton_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMessageListButton);
	UClass* Z_Construct_UClass_UMessageListButton_NoRegister()
	{
		return UMessageListButton::StaticClass();
	}
	struct Z_Construct_UClass_UMessageListButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageListButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMessageListButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMessageListButton_HandleButtonClicked, "HandleButtonClicked" }, // 1311597561
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageListButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MessageListButton.h" },
		{ "ModuleRelativePath", "Public/MessageListButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageListButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageListButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMessageListButton_Statics::ClassParams = {
		&UMessageListButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageListButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageListButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageListButton()
	{
		if (!Z_Registration_Info_UClass_UMessageListButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMessageListButton.OuterSingleton, Z_Construct_UClass_UMessageListButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMessageListButton.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UMessageListButton>()
	{
		return UMessageListButton::StaticClass();
	}
	UMessageListButton::UMessageListButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageListButton);
	UMessageListButton::~UMessageListButton() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MessageListButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MessageListButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMessageListButton, UMessageListButton::StaticClass, TEXT("UMessageListButton"), &Z_Registration_Info_UClass_UMessageListButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMessageListButton), 3057564177U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MessageListButton_h_2493265173(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MessageListButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MessageListButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
