// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/IA_Movement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIA_Movement() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIA_Movement();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIA_Movement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void UIA_Movement::StaticRegisterNativesUIA_Movement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIA_Movement);
	UClass* Z_Construct_UClass_UIA_Movement_NoRegister()
	{
		return UIA_Movement::StaticClass();
	}
	struct Z_Construct_UClass_UIA_Movement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIA_Movement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputAction,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIA_Movement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA_Movement.h" },
		{ "ModuleRelativePath", "IA_Movement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIA_Movement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIA_Movement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIA_Movement_Statics::ClassParams = {
		&UIA_Movement::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIA_Movement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIA_Movement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIA_Movement()
	{
		if (!Z_Registration_Info_UClass_UIA_Movement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIA_Movement.OuterSingleton, Z_Construct_UClass_UIA_Movement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIA_Movement.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UIA_Movement>()
	{
		return UIA_Movement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIA_Movement);
	UIA_Movement::~UIA_Movement() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IA_Movement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IA_Movement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIA_Movement, UIA_Movement::StaticClass, TEXT("UIA_Movement"), &Z_Registration_Info_UClass_UIA_Movement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIA_Movement), 118452986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IA_Movement_h_1690824518(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IA_Movement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_IA_Movement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
