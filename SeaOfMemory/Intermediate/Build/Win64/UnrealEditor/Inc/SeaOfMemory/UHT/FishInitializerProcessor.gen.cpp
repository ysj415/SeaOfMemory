// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/FishInitializerProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishInitializerProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishInitializerProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishInitializerProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UFishInitializerProcessor::StaticRegisterNativesUFishInitializerProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFishInitializerProcessor);
	UClass* Z_Construct_UClass_UFishInitializerProcessor_NoRegister()
	{
		return UFishInitializerProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UFishInitializerProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFishInitializerProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishInitializerProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FishInitializerProcessor.h" },
		{ "ModuleRelativePath", "Public/FishInitializerProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFishInitializerProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFishInitializerProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFishInitializerProcessor_Statics::ClassParams = {
		&UFishInitializerProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFishInitializerProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFishInitializerProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFishInitializerProcessor()
	{
		if (!Z_Registration_Info_UClass_UFishInitializerProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFishInitializerProcessor.OuterSingleton, Z_Construct_UClass_UFishInitializerProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFishInitializerProcessor.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UFishInitializerProcessor>()
	{
		return UFishInitializerProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFishInitializerProcessor);
	UFishInitializerProcessor::~UFishInitializerProcessor() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishInitializerProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishInitializerProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFishInitializerProcessor, UFishInitializerProcessor::StaticClass, TEXT("UFishInitializerProcessor"), &Z_Registration_Info_UClass_UFishInitializerProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFishInitializerProcessor), 3727210807U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishInitializerProcessor_h_2462253596(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishInitializerProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_FishInitializerProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
