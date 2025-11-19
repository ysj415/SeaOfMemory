// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SplashSoundNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplashSoundNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USplashSoundNotify();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USplashSoundNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void USplashSoundNotify::StaticRegisterNativesUSplashSoundNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplashSoundNotify);
	UClass* Z_Construct_UClass_USplashSoundNotify_NoRegister()
	{
		return USplashSoundNotify::StaticClass();
	}
	struct Z_Construct_UClass_USplashSoundNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplashSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SplashSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWSplashSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UWSplashSoundCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplashSoundNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashSoundNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SplashSoundNotify.h" },
		{ "ModuleRelativePath", "Public/SplashSoundNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_SplashSoundCue_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "ModuleRelativePath", "Public/SplashSoundNotify.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_SplashSoundCue = { "SplashSoundCue", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplashSoundNotify, SplashSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_SplashSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_SplashSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_UWSplashSoundCue_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "ModuleRelativePath", "Public/SplashSoundNotify.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_UWSplashSoundCue = { "UWSplashSoundCue", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplashSoundNotify, UWSplashSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_UWSplashSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_UWSplashSoundCue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplashSoundNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_SplashSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplashSoundNotify_Statics::NewProp_UWSplashSoundCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplashSoundNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplashSoundNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplashSoundNotify_Statics::ClassParams = {
		&USplashSoundNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplashSoundNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplashSoundNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USplashSoundNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplashSoundNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplashSoundNotify()
	{
		if (!Z_Registration_Info_UClass_USplashSoundNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplashSoundNotify.OuterSingleton, Z_Construct_UClass_USplashSoundNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplashSoundNotify.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USplashSoundNotify>()
	{
		return USplashSoundNotify::StaticClass();
	}
	USplashSoundNotify::USplashSoundNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplashSoundNotify);
	USplashSoundNotify::~USplashSoundNotify() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SplashSoundNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SplashSoundNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplashSoundNotify, USplashSoundNotify::StaticClass, TEXT("USplashSoundNotify"), &Z_Registration_Info_UClass_USplashSoundNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplashSoundNotify), 3041135813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SplashSoundNotify_h_983385356(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SplashSoundNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SplashSoundNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
