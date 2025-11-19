// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/IllustratedGuideSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIllustratedGuideSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIllustratedGuideSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIllustratedGuideSubsystem_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FFishData();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FishData;
class UScriptStruct* FFishData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FishData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FishData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFishData, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("FishData"));
	}
	return Z_Registration_Info_UScriptStruct_FishData.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FFishData>()
{
	return FFishData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFishData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FishSubImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FishSubImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FishMainImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FishMainImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFishData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFishData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFishData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishSubImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishSubImage = { "FishSubImage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFishData, FishSubImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishSubImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishSubImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishMainImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishMainImage = { "FishMainImage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFishData, FishMainImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishMainImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishMainImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFishData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishSubImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFishData_Statics::NewProp_FishMainImage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFishData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		&NewStructOps,
		"FishData",
		sizeof(FFishData),
		alignof(FFishData),
		Z_Construct_UScriptStruct_FFishData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFishData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFishData()
	{
		if (!Z_Registration_Info_UScriptStruct_FishData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FishData.InnerSingleton, Z_Construct_UScriptStruct_FFishData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FishData.InnerSingleton;
	}
	DEFINE_FUNCTION(UIllustratedGuideSubsystem::execResetSubsystemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSubsystemData();
		P_NATIVE_END;
	}
	void UIllustratedGuideSubsystem::StaticRegisterNativesUIllustratedGuideSubsystem()
	{
		UClass* Class = UIllustratedGuideSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetSubsystemData", &UIllustratedGuideSubsystem::execResetSubsystemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIllustratedGuideSubsystem, nullptr, "ResetSubsystemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIllustratedGuideSubsystem);
	UClass* Z_Construct_UClass_UIllustratedGuideSubsystem_NoRegister()
	{
		return UIllustratedGuideSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UIllustratedGuideSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FishDataMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FishDataMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FishDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FishDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FishDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EmptyImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIllustratedGuideSubsystem_ResetSubsystemData, "ResetSubsystemData" }, // 2845433083
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IllustratedGuideSubsystem.h" },
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_ValueProp = { "FishDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FFishData, METADATA_PARAMS(nullptr, 0) }; // 572805469
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_Key_KeyProp = { "FishDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap = { "FishDataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIllustratedGuideSubsystem, FishDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_MetaData)) }; // 3767237422 572805469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_EmptyImage_MetaData[] = {
		{ "ModuleRelativePath", "Public/IllustratedGuideSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_EmptyImage = { "EmptyImage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIllustratedGuideSubsystem, EmptyImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_EmptyImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_EmptyImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_FishDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::NewProp_EmptyImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIllustratedGuideSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::ClassParams = {
		&UIllustratedGuideSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIllustratedGuideSubsystem()
	{
		if (!Z_Registration_Info_UClass_UIllustratedGuideSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIllustratedGuideSubsystem.OuterSingleton, Z_Construct_UClass_UIllustratedGuideSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIllustratedGuideSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UIllustratedGuideSubsystem>()
	{
		return UIllustratedGuideSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIllustratedGuideSubsystem);
	UIllustratedGuideSubsystem::~UIllustratedGuideSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FFishData::StaticStruct, Z_Construct_UScriptStruct_FFishData_Statics::NewStructOps, TEXT("FishData"), &Z_Registration_Info_UScriptStruct_FishData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFishData), 572805469U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIllustratedGuideSubsystem, UIllustratedGuideSubsystem::StaticClass, TEXT("UIllustratedGuideSubsystem"), &Z_Registration_Info_UClass_UIllustratedGuideSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIllustratedGuideSubsystem), 3327112766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_3717052008(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_IllustratedGuideSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
