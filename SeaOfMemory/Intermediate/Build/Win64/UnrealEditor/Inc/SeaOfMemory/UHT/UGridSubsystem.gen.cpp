// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/UGridSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGridSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UGridSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FGridEntityInfo();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridEntityInfo;
class UScriptStruct* FGridEntityInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridEntityInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridEntityInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridEntityInfo, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("GridEntityInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GridEntityInfo.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FGridEntityInfo>()
{
	return FGridEntityInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGridEntityInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntityIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Species_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Species_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Species;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridEntityInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridEntityInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_EntityIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_EntityIndex = { "EntityIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGridEntityInfo, EntityIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_EntityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_EntityIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGridEntityInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species_MetaData[] = {
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species = { "Species", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGridEntityInfo, Species), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species_MetaData)) }; // 3767237422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridEntityInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_EntityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewProp_Species,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridEntityInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		&NewStructOps,
		"GridEntityInfo",
		sizeof(FGridEntityInfo),
		alignof(FGridEntityInfo),
		Z_Construct_UScriptStruct_FGridEntityInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridEntityInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGridEntityInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GridEntityInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridEntityInfo.InnerSingleton, Z_Construct_UScriptStruct_FGridEntityInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GridEntityInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UGridSubsystem::execRemoveGrid)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_EntityIndex);
		P_GET_STRUCT_REF(FIntVector,Z_Param_Out_OldGridIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGrid(Z_Param_Out_EntityIndex,Z_Param_Out_OldGridIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSubsystem::execDrawGridDebugLine)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawGridDebugLine(Z_Param_World,Z_Param_color);
		P_NATIVE_END;
	}
	void UGridSubsystem::StaticRegisterNativesUGridSubsystem()
	{
		UClass* Class = UGridSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawGridDebugLine", &UGridSubsystem::execDrawGridDebugLine },
			{ "RemoveGrid", &UGridSubsystem::execRemoveGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics
	{
		struct GridSubsystem_eventDrawGridDebugLine_Parms
		{
			UWorld* World;
			FColor color;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSubsystem_eventDrawGridDebugLine_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSubsystem_eventDrawGridDebugLine_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_color", "(R=255,G=0,B=0,A=255)" },
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "DrawGridDebugLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::GridSubsystem_eventDrawGridDebugLine_Parms), Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics
	{
		struct GridSubsystem_eventRemoveGrid_Parms
		{
			int32 EntityIndex;
			FIntVector OldGridIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EntityIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldGridIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldGridIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_EntityIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_EntityIndex = { "EntityIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSubsystem_eventRemoveGrid_Parms, EntityIndex), METADATA_PARAMS(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_EntityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_EntityIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_OldGridIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_OldGridIndex = { "OldGridIndex", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSubsystem_eventRemoveGrid_Parms, OldGridIndex), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_OldGridIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_OldGridIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_EntityIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::NewProp_OldGridIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSubsystem, nullptr, "RemoveGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::GridSubsystem_eventRemoveGrid_Parms), Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSubsystem_RemoveGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSubsystem_RemoveGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridSubsystem);
	UClass* Z_Construct_UClass_UGridSubsystem_NoRegister()
	{
		return UGridSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGridSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridSubsystem_DrawGridDebugLine, "DrawGridDebugLine" }, // 1349985884
		{ &Z_Construct_UFunction_UGridSubsystem_RemoveGrid, "RemoveGrid" }, // 4119750331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UGridSubsystem.h" },
		{ "ModuleRelativePath", "Public/UGridSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSubsystem_Statics::ClassParams = {
		&UGridSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGridSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSubsystem.OuterSingleton, Z_Construct_UClass_UGridSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UGridSubsystem>()
	{
		return UGridSubsystem::StaticClass();
	}
	UGridSubsystem::UGridSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSubsystem);
	UGridSubsystem::~UGridSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FGridEntityInfo::StaticStruct, Z_Construct_UScriptStruct_FGridEntityInfo_Statics::NewStructOps, TEXT("GridEntityInfo"), &Z_Registration_Info_UScriptStruct_GridEntityInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridEntityInfo), 3861851371U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridSubsystem, UGridSubsystem::StaticClass, TEXT("UGridSubsystem"), &Z_Registration_Info_UClass_UGridSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSubsystem), 1771050149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_1170964488(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
