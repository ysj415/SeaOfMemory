// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/CreateISMProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateISMProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCreateISMProcessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCreateISMProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UCreateISMProcessor::StaticRegisterNativesUCreateISMProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateISMProcessor);
	UClass* Z_Construct_UClass_UCreateISMProcessor_NoRegister()
	{
		return UCreateISMProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UCreateISMProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateISMProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateISMProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CreateISMProcessor.h" },
		{ "ModuleRelativePath", "Public/CreateISMProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateISMProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateISMProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateISMProcessor_Statics::ClassParams = {
		&UCreateISMProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCreateISMProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateISMProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateISMProcessor()
	{
		if (!Z_Registration_Info_UClass_UCreateISMProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateISMProcessor.OuterSingleton, Z_Construct_UClass_UCreateISMProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateISMProcessor.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UCreateISMProcessor>()
	{
		return UCreateISMProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateISMProcessor);
	UCreateISMProcessor::~UCreateISMProcessor() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CreateISMProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CreateISMProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateISMProcessor, UCreateISMProcessor::StaticClass, TEXT("UCreateISMProcessor"), &Z_Registration_Info_UClass_UCreateISMProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateISMProcessor), 3480874064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CreateISMProcessor_h_1267815996(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CreateISMProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CreateISMProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
