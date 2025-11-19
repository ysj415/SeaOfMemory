// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/TurnNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnNotify() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UTurnNotify();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UTurnNotify_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UTurnNotify::StaticRegisterNativesUTurnNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnNotify);
	UClass* Z_Construct_UClass_UTurnNotify_NoRegister()
	{
		return UTurnNotify::StaticClass();
	}
	struct Z_Construct_UClass_UTurnNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TurnSoundCue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWTurnSoundCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UWTurnSoundCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTurnNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "TurnNotify.h" },
		{ "ModuleRelativePath", "Public/TurnNotify.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnNotify_Statics::NewProp_TurnSoundCue_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "ModuleRelativePath", "Public/TurnNotify.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTurnNotify_Statics::NewProp_TurnSoundCue = { "TurnSoundCue", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTurnNotify, TurnSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurnNotify_Statics::NewProp_TurnSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNotify_Statics::NewProp_TurnSoundCue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTurnNotify_Statics::NewProp_UWTurnSoundCue_MetaData[] = {
		{ "Category", "SoundCue" },
		{ "ModuleRelativePath", "Public/TurnNotify.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTurnNotify_Statics::NewProp_UWTurnSoundCue = { "UWTurnSoundCue", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTurnNotify, UWTurnSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTurnNotify_Statics::NewProp_UWTurnSoundCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNotify_Statics::NewProp_UWTurnSoundCue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTurnNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnNotify_Statics::NewProp_TurnSoundCue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTurnNotify_Statics::NewProp_UWTurnSoundCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTurnNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTurnNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnNotify_Statics::ClassParams = {
		&UTurnNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTurnNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNotify_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTurnNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTurnNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTurnNotify()
	{
		if (!Z_Registration_Info_UClass_UTurnNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnNotify.OuterSingleton, Z_Construct_UClass_UTurnNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTurnNotify.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UTurnNotify>()
	{
		return UTurnNotify::StaticClass();
	}
	UTurnNotify::UTurnNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnNotify);
	UTurnNotify::~UTurnNotify() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_TurnNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_TurnNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTurnNotify, UTurnNotify::StaticClass, TEXT("UTurnNotify"), &Z_Registration_Info_UClass_UTurnNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnNotify), 1277503673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_TurnNotify_h_3728476794(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_TurnNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_TurnNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
