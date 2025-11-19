// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/MyWaterBodyOcean.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWaterBodyOcean() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_AMyWaterBodyOcean();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_AMyWaterBodyOcean_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyOcean();
// End Cross Module References
	void AMyWaterBodyOcean::StaticRegisterNativesAMyWaterBodyOcean()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyWaterBodyOcean);
	UClass* Z_Construct_UClass_AMyWaterBodyOcean_NoRegister()
	{
		return AMyWaterBodyOcean::StaticClass();
	}
	struct Z_Construct_UClass_AMyWaterBodyOcean_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyWaterBodyOcean_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWaterBodyOcean,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyWaterBodyOcean_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Tags Activation Cooking Replication Input Actor AssetUserData" },
		{ "IncludePath", "MyWaterBodyOcean.h" },
		{ "ModuleRelativePath", "MyWaterBodyOcean.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyWaterBodyOcean_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyWaterBodyOcean>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyWaterBodyOcean_Statics::ClassParams = {
		&AMyWaterBodyOcean::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyWaterBodyOcean_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyWaterBodyOcean_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyWaterBodyOcean()
	{
		if (!Z_Registration_Info_UClass_AMyWaterBodyOcean.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyWaterBodyOcean.OuterSingleton, Z_Construct_UClass_AMyWaterBodyOcean_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyWaterBodyOcean.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<AMyWaterBodyOcean>()
	{
		return AMyWaterBodyOcean::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyWaterBodyOcean);
	AMyWaterBodyOcean::~AMyWaterBodyOcean() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyWaterBodyOcean_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyWaterBodyOcean_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyWaterBodyOcean, AMyWaterBodyOcean::StaticClass, TEXT("AMyWaterBodyOcean"), &Z_Registration_Info_UClass_AMyWaterBodyOcean, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyWaterBodyOcean), 4160439777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyWaterBodyOcean_h_1656937733(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyWaterBodyOcean_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyWaterBodyOcean_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
