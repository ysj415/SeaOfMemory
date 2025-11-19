// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SwimSoundNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwimSoundNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USwimSoundNotify();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USwimSoundNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void USwimSoundNotify::StaticRegisterNativesUSwimSoundNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwimSoundNotify);
	UClass* Z_Construct_UClass_USwimSoundNotify_NoRegister()
	{
		return USwimSoundNotify::StaticClass();
	}
	struct Z_Construct_UClass_USwimSoundNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwimSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SwimSoundCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwimSoundNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwimSoundNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SwimSoundNotify.h" },
		{ "ModuleRelativePath", "Public/SwimSoundNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwimSoundNotify_Statics::NewProp_SwimSoundCue_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "ModuleRelativePath", "Public/SwimSoundNotify.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USwimSoundNotify_Statics::NewProp_SwimSoundCue = { "SwimSoundCue", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwimSoundNotify, SwimSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USwimSoundNotify_Statics::NewProp_SwimSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwimSoundNotify_Statics::NewProp_SwimSoundCue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwimSoundNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwimSoundNotify_Statics::NewProp_SwimSoundCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwimSoundNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwimSoundNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwimSoundNotify_Statics::ClassParams = {
		&USwimSoundNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USwimSoundNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USwimSoundNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_USwimSoundNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwimSoundNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwimSoundNotify()
	{
		if (!Z_Registration_Info_UClass_USwimSoundNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwimSoundNotify.OuterSingleton, Z_Construct_UClass_USwimSoundNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwimSoundNotify.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USwimSoundNotify>()
	{
		return USwimSoundNotify::StaticClass();
	}
	USwimSoundNotify::USwimSoundNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwimSoundNotify);
	USwimSoundNotify::~USwimSoundNotify() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SwimSoundNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SwimSoundNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwimSoundNotify, USwimSoundNotify::StaticClass, TEXT("USwimSoundNotify"), &Z_Registration_Info_UClass_USwimSoundNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwimSoundNotify), 3690243265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SwimSoundNotify_h_3028917810(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SwimSoundNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SwimSoundNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
