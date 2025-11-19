// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/FishSwarmSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishSwarmSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishSwarmSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UFishSwarmSubsystem_NoRegister();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FishSwarm();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ishSwarm;
class UScriptStruct* FishSwarm::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ishSwarm.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ishSwarm.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FishSwarm, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("ishSwarm"));
	}
	return Z_Registration_Info_UScriptStruct_ishSwarm.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FishSwarm>()
{
	return FishSwarm::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FishSwarm_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishSwarm_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "FishSwarmSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FishSwarm_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FishSwarm>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FishSwarm_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		&NewStructOps,
		"ishSwarm",
		sizeof(FishSwarm),
		alignof(FishSwarm),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FishSwarm_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishSwarm_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FishSwarm()
	{
		if (!Z_Registration_Info_UScriptStruct_ishSwarm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ishSwarm.InnerSingleton, Z_Construct_UScriptStruct_FishSwarm_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ishSwarm.InnerSingleton;
	}
	void UFishSwarmSubsystem::StaticRegisterNativesUFishSwarmSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFishSwarmSubsystem);
	UClass* Z_Construct_UClass_UFishSwarmSubsystem_NoRegister()
	{
		return UFishSwarmSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UFishSwarmSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFishSwarmSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFishSwarmSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FishSwarmSubsystem.h" },
		{ "ModuleRelativePath", "FishSwarmSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFishSwarmSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFishSwarmSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFishSwarmSubsystem_Statics::ClassParams = {
		&UFishSwarmSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFishSwarmSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFishSwarmSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFishSwarmSubsystem()
	{
		if (!Z_Registration_Info_UClass_UFishSwarmSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFishSwarmSubsystem.OuterSingleton, Z_Construct_UClass_UFishSwarmSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFishSwarmSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UFishSwarmSubsystem>()
	{
		return UFishSwarmSubsystem::StaticClass();
	}
	UFishSwarmSubsystem::UFishSwarmSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFishSwarmSubsystem);
	UFishSwarmSubsystem::~UFishSwarmSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FishSwarm::StaticStruct, Z_Construct_UScriptStruct_FishSwarm_Statics::NewStructOps, TEXT("ishSwarm"), &Z_Registration_Info_UScriptStruct_ishSwarm, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FishSwarm), 481961975U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFishSwarmSubsystem, UFishSwarmSubsystem::StaticClass, TEXT("UFishSwarmSubsystem"), &Z_Registration_Info_UClass_UFishSwarmSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFishSwarmSubsystem), 2590105239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_51971716(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_FishSwarmSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
