// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/ImageLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageLoader() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UImageLoader();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UImageLoader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UImageLoader::StaticRegisterNativesUImageLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageLoader);
	UClass* Z_Construct_UClass_UImageLoader_NoRegister()
	{
		return UImageLoader::StaticClass();
	}
	struct Z_Construct_UClass_UImageLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ImageLoader.h" },
		{ "ModuleRelativePath", "Public/ImageLoader.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageLoader_Statics::ClassParams = {
		&UImageLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageLoader()
	{
		if (!Z_Registration_Info_UClass_UImageLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageLoader.OuterSingleton, Z_Construct_UClass_UImageLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageLoader.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UImageLoader>()
	{
		return UImageLoader::StaticClass();
	}
	UImageLoader::UImageLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageLoader);
	UImageLoader::~UImageLoader() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImageLoader, UImageLoader::StaticClass, TEXT("UImageLoader"), &Z_Registration_Info_UClass_UImageLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageLoader), 2194318763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageLoader_h_581555668(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
