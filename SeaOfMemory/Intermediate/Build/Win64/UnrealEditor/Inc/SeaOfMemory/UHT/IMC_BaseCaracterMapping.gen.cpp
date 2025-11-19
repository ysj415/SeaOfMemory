// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/IMC_BaseCaracterMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMC_BaseCaracterMapping() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIMC_BaseCaracterMapping();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIMC_BaseCaracterMapping_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UIMC_BaseCaracterMapping::StaticRegisterNativesUIMC_BaseCaracterMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIMC_BaseCaracterMapping);
	UClass* Z_Construct_UClass_UIMC_BaseCaracterMapping_NoRegister()
	{
		return UIMC_BaseCaracterMapping::StaticClass();
	}
	struct Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputMappingContext,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IMC_BaseCaracterMapping.h" },
		{ "ModuleRelativePath", "IMC_BaseCaracterMapping.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIMC_BaseCaracterMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::ClassParams = {
		&UIMC_BaseCaracterMapping::StaticClass,
		"Input",
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
		METADATA_PARAMS(Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIMC_BaseCaracterMapping()
	{
		if (!Z_Registration_Info_UClass_UIMC_BaseCaracterMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIMC_BaseCaracterMapping.OuterSingleton, Z_Construct_UClass_UIMC_BaseCaracterMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIMC_BaseCaracterMapping.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UIMC_BaseCaracterMapping>()
	{
		return UIMC_BaseCaracterMapping::StaticClass();
	}
	UIMC_BaseCaracterMapping::UIMC_BaseCaracterMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIMC_BaseCaracterMapping);
	UIMC_BaseCaracterMapping::~UIMC_BaseCaracterMapping() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IMC_BaseCaracterMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IMC_BaseCaracterMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIMC_BaseCaracterMapping, UIMC_BaseCaracterMapping::StaticClass, TEXT("UIMC_BaseCaracterMapping"), &Z_Registration_Info_UClass_UIMC_BaseCaracterMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIMC_BaseCaracterMapping), 874190528U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IMC_BaseCaracterMapping_h_4207440223(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IMC_BaseCaracterMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IMC_BaseCaracterMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
