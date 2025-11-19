// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SNSDataSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNSDataSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UPhotoData_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USNSDataSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USNSDataSubsystem_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_SNSMenuMod();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SNSMenuMod;
	static UEnum* SNSMenuMod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SNSMenuMod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SNSMenuMod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_SNSMenuMod, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("SNSMenuMod"));
		}
		return Z_Registration_Info_UEnum_SNSMenuMod.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<SNSMenuMod>()
	{
		return SNSMenuMod_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::Enumerators[] = {
		{ "SNSMenuMod::WebView", (int64)SNSMenuMod::WebView },
		{ "SNSMenuMod::TweetView", (int64)SNSMenuMod::TweetView },
		{ "SNSMenuMod::TweetPost", (int64)SNSMenuMod::TweetPost },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
		{ "TweetPost.Comment", "/**\n * \n */" },
		{ "TweetPost.DisplayName", "TweetPost" },
		{ "TweetPost.Name", "SNSMenuMod::TweetPost" },
		{ "TweetView.Comment", "/**\n * \n */" },
		{ "TweetView.DisplayName", "TweetView" },
		{ "TweetView.Name", "SNSMenuMod::TweetView" },
		{ "WebView.Comment", "/**\n * \n */" },
		{ "WebView.DisplayName", "WebView" },
		{ "WebView.Name", "SNSMenuMod::WebView" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"SNSMenuMod",
		"SNSMenuMod",
		Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_SNSMenuMod()
	{
		if (!Z_Registration_Info_UEnum_SNSMenuMod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SNSMenuMod.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_SNSMenuMod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SNSMenuMod.InnerSingleton;
	}
	DEFINE_FUNCTION(USNSDataSubsystem::execGetCurrentMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(SNSMenuMod*)Z_Param__Result=P_THIS->GetCurrentMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USNSDataSubsystem::execResetSubsystemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSubsystemData();
		P_NATIVE_END;
	}
	void USNSDataSubsystem::StaticRegisterNativesUSNSDataSubsystem()
	{
		UClass* Class = USNSDataSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentMenu", &USNSDataSubsystem::execGetCurrentMenu },
			{ "ResetSubsystemData", &USNSDataSubsystem::execResetSubsystemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics
	{
		struct SNSDataSubsystem_eventGetCurrentMenu_Parms
		{
			SNSMenuMod ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SNSDataSubsystem_eventGetCurrentMenu_Parms, ReturnValue), Z_Construct_UEnum_SeaOfMemory_SNSMenuMod, METADATA_PARAMS(nullptr, 0) }; // 4187385883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNSDataSubsystem, nullptr, "GetCurrentMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::SNSDataSubsystem_eventGetCurrentMenu_Parms), Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USNSDataSubsystem, nullptr, "ResetSubsystemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNSDataSubsystem);
	UClass* Z_Construct_UClass_USNSDataSubsystem_NoRegister()
	{
		return USNSDataSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USNSDataSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPhoto_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedPhoto;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNSDataSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USNSDataSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USNSDataSubsystem_GetCurrentMenu, "GetCurrentMenu" }, // 4233549653
		{ &Z_Construct_UFunction_USNSDataSubsystem_ResetSubsystemData, "ResetSubsystemData" }, // 765220722
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNSDataSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SNSDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds_Inner = { "MediaIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds_MetaData[] = {
		{ "Comment", "//UTexture2D* GetTextureforId(FString MediaIds);\n" },
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
		{ "ToolTip", "UTexture2D* GetTextureforId(FString MediaIds);" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds = { "MediaIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USNSDataSubsystem, MediaIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USNSDataSubsystem, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_SelectedPhoto_MetaData[] = {
		{ "ModuleRelativePath", "Public/SNSDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_SelectedPhoto = { "SelectedPhoto", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USNSDataSubsystem, SelectedPhoto), Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_SelectedPhoto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_SelectedPhoto_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNSDataSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_MediaIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNSDataSubsystem_Statics::NewProp_SelectedPhoto,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNSDataSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNSDataSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNSDataSubsystem_Statics::ClassParams = {
		&USNSDataSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USNSDataSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USNSDataSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USNSDataSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USNSDataSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USNSDataSubsystem()
	{
		if (!Z_Registration_Info_UClass_USNSDataSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNSDataSubsystem.OuterSingleton, Z_Construct_UClass_USNSDataSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNSDataSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USNSDataSubsystem>()
	{
		return USNSDataSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNSDataSubsystem);
	USNSDataSubsystem::~USNSDataSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics::EnumInfo[] = {
		{ SNSMenuMod_StaticEnum, TEXT("SNSMenuMod"), &Z_Registration_Info_UEnum_SNSMenuMod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4187385883U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNSDataSubsystem, USNSDataSubsystem::StaticClass, TEXT("USNSDataSubsystem"), &Z_Registration_Info_UClass_USNSDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNSDataSubsystem), 2017055903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_2092595145(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SNSDataSubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
