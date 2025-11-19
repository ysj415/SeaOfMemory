// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/FishTargetInitializerProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishTargetInitializerProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishTargetInitializerProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishTargetInitializerProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UFishTargetInitializerProcessor::StaticRegisterNativesUFishTargetInitializerProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFishTargetInitializerProcessor);
	UClass* Z_Construct_UClass_UFishTargetInitializerProcessor_NoRegister()
	{
		return UFishTargetInitializerProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UFishTargetInitializerProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FishTargetInitializerProcessor.h" },
		{ "ModuleRelativePath", "Public/FishTargetInitializerProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFishTargetInitializerProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::ClassParams = {
		&UFishTargetInitializerProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFishTargetInitializerProcessor()
	{
		if (!Z_Registration_Info_UClass_UFishTargetInitializerProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFishTargetInitializerProcessor.OuterSingleton, Z_Construct_UClass_UFishTargetInitializerProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFishTargetInitializerProcessor.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UFishTargetInitializerProcessor>()
	{
		return UFishTargetInitializerProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFishTargetInitializerProcessor);
	UFishTargetInitializerProcessor::~UFishTargetInitializerProcessor() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishTargetInitializerProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishTargetInitializerProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFishTargetInitializerProcessor, UFishTargetInitializerProcessor::StaticClass, TEXT("UFishTargetInitializerProcessor"), &Z_Registration_Info_UClass_UFishTargetInitializerProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFishTargetInitializerProcessor), 408989660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishTargetInitializerProcessor_h_596924330(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishTargetInitializerProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishTargetInitializerProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
