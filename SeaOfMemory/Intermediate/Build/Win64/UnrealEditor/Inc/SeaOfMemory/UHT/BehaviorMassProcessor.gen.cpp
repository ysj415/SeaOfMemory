// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/BehaviorMassProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorMassProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UBehaviorMassProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UBehaviorMassProcessor_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishRecognizeTrait();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishRecognizeTrait_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_Place();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FFishPlaceFragment();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FFishRecognizeFragment();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UFishRecognizeTrait::StaticRegisterNativesUFishRecognizeTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFishRecognizeTrait);
	UClass* Z_Construct_UClass_UFishRecognizeTrait_NoRegister()
	{
		return UFishRecognizeTrait::StaticClass();
	}
	struct Z_Construct_UClass_UFishRecognizeTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsDetectRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoidsDetectRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvoidsDetectRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidsDetectRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChasesDetectRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChasesDetectRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_place_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_place_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_place;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFishRecognizeTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishRecognizeTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */// \xef\xbf\xbd\xd6\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd trait\n" },
		{ "IncludePath", "BehaviorMassProcessor.h" },
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
		{ "ToolTip", "// \xef\xbf\xbd\xd6\xba\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc6\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd trait" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_BoidsDetectRadius_MetaData[] = {
		{ "Category", "DetectRadius" },
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_BoidsDetectRadius = { "BoidsDetectRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFishRecognizeTrait, BoidsDetectRadius), METADATA_PARAMS(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_BoidsDetectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_BoidsDetectRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_AvoidsDetectRadius_MetaData[] = {
		{ "Category", "DetectRadius" },
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_AvoidsDetectRadius = { "AvoidsDetectRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFishRecognizeTrait, AvoidsDetectRadius), METADATA_PARAMS(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_AvoidsDetectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_AvoidsDetectRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_ChasesDetectRadius_MetaData[] = {
		{ "Category", "DetectRadius" },
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_ChasesDetectRadius = { "ChasesDetectRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFishRecognizeTrait, ChasesDetectRadius), METADATA_PARAMS(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_ChasesDetectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_ChasesDetectRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place_MetaData[] = {
		{ "Category", "DetectRadius" },
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place = { "place", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFishRecognizeTrait, place), Z_Construct_UEnum_SeaOfMemory_Place, METADATA_PARAMS(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place_MetaData)) }; // 1488107671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFishRecognizeTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_BoidsDetectRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_AvoidsDetectRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_ChasesDetectRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFishRecognizeTrait_Statics::NewProp_place,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFishRecognizeTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFishRecognizeTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFishRecognizeTrait_Statics::ClassParams = {
		&UFishRecognizeTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFishRecognizeTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFishRecognizeTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFishRecognizeTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFishRecognizeTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFishRecognizeTrait()
	{
		if (!Z_Registration_Info_UClass_UFishRecognizeTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFishRecognizeTrait.OuterSingleton, Z_Construct_UClass_UFishRecognizeTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFishRecognizeTrait.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UFishRecognizeTrait>()
	{
		return UFishRecognizeTrait::StaticClass();
	}
	UFishRecognizeTrait::UFishRecognizeTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFishRecognizeTrait);
	UFishRecognizeTrait::~UFishRecognizeTrait() {}

static_assert(std::is_polymorphic<FFishRecognizeFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFishRecognizeFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FishRecognizeFragment;
class UScriptStruct* FFishRecognizeFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FishRecognizeFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FishRecognizeFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFishRecognizeFragment, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("FishRecognizeFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FishRecognizeFragment.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FFishRecognizeFragment>()
{
	return FFishRecognizeFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFishRecognizeFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FishRecognizeFragment",
		sizeof(FFishRecognizeFragment),
		alignof(FFishRecognizeFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFishRecognizeFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FishRecognizeFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FishRecognizeFragment.InnerSingleton, Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FishRecognizeFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFishPlaceFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFishPlaceFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FishPlaceFragment;
class UScriptStruct* FFishPlaceFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FishPlaceFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FishPlaceFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFishPlaceFragment, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("FishPlaceFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FishPlaceFragment.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FFishPlaceFragment>()
{
	return FFishPlaceFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFishPlaceFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFishPlaceFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FishPlaceFragment",
		sizeof(FFishPlaceFragment),
		alignof(FFishPlaceFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFishPlaceFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FishPlaceFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FishPlaceFragment.InnerSingleton, Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FishPlaceFragment.InnerSingleton;
	}
	void UBehaviorMassProcessor::StaticRegisterNativesUBehaviorMassProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorMassProcessor);
	UClass* Z_Construct_UClass_UBehaviorMassProcessor_NoRegister()
	{
		return UBehaviorMassProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorMassProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorMassProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorMassProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorMassProcessor.h" },
		{ "ModuleRelativePath", "Public/BehaviorMassProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorMassProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorMassProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorMassProcessor_Statics::ClassParams = {
		&UBehaviorMassProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorMassProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorMassProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorMassProcessor()
	{
		if (!Z_Registration_Info_UClass_UBehaviorMassProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorMassProcessor.OuterSingleton, Z_Construct_UClass_UBehaviorMassProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorMassProcessor.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UBehaviorMassProcessor>()
	{
		return UBehaviorMassProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorMassProcessor);
	UBehaviorMassProcessor::~UBehaviorMassProcessor() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics::ScriptStructInfo[] = {
		{ FFishRecognizeFragment::StaticStruct, Z_Construct_UScriptStruct_FFishRecognizeFragment_Statics::NewStructOps, TEXT("FishRecognizeFragment"), &Z_Registration_Info_UScriptStruct_FishRecognizeFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFishRecognizeFragment), 2027166831U) },
		{ FFishPlaceFragment::StaticStruct, Z_Construct_UScriptStruct_FFishPlaceFragment_Statics::NewStructOps, TEXT("FishPlaceFragment"), &Z_Registration_Info_UScriptStruct_FishPlaceFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFishPlaceFragment), 3473052740U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFishRecognizeTrait, UFishRecognizeTrait::StaticClass, TEXT("UFishRecognizeTrait"), &Z_Registration_Info_UClass_UFishRecognizeTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFishRecognizeTrait), 2658647272U) },
		{ Z_Construct_UClass_UBehaviorMassProcessor, UBehaviorMassProcessor::StaticClass, TEXT("UBehaviorMassProcessor"), &Z_Registration_Info_UClass_UBehaviorMassProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorMassProcessor), 887637015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_4007531371(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_BehaviorMassProcessor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
