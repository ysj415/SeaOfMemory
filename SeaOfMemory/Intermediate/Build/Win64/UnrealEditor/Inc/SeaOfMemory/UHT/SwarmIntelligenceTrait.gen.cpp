// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/SwarmIntelligenceTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmIntelligenceTrait() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USwarmIntelligenceProceessor();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USwarmIntelligenceProceessor_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USwarmIntelligenceTrait();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USwarmIntelligenceTrait_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FFishPerceptionFragment();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FishAttributes();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	void USwarmIntelligenceTrait::StaticRegisterNativesUSwarmIntelligenceTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwarmIntelligenceTrait);
	UClass* Z_Construct_UClass_USwarmIntelligenceTrait_NoRegister()
	{
		return USwarmIntelligenceTrait::StaticClass();
	}
	struct Z_Construct_UClass_USwarmIntelligenceTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoidsWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSwarm_MetaData[];
#endif
		static void NewProp_MoveSwarm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveSwarm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Avoids_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Avoids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Avoids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Avoids;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Chases_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Chases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionAvoidTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionAvoidTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistanceFromCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistanceFromCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseLODMove_MetaData[];
#endif
		static void NewProp_UseLODMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseLODMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwarmIntelligenceTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--------------------- Trait ------------------*/" },
		{ "IncludePath", "SwarmIntelligenceTrait.h" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
		{ "ToolTip", "--------------------- Trait ------------------" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinWeight_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinWeight = { "MinWeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, MinWeight), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxWeight_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxWeight = { "MaxWeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, MaxWeight), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_BoidsWeight_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_BoidsWeight = { "BoidsWeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, BoidsWeight), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_BoidsWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_BoidsWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, Speed), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, Type), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type_MetaData)) }; // 3767237422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	void Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm_SetBit(void* Obj)
	{
		((USwarmIntelligenceTrait*)Obj)->MoveSwarm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm = { "MoveSwarm", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USwarmIntelligenceTrait), &Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, InterpSpeed), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_InterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_InterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_SightRange_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_SightRange = { "SightRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, SightRange), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_SightRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_SightRange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_Inner = { "Avoids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids = { "Avoids", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, Avoids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_MetaData)) }; // 3767237422
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_Inner = { "Chases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases = { "Chases", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, Chases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_MetaData)) }; // 3767237422
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_CollisionAvoidTime_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_CollisionAvoidTime = { "CollisionAvoidTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, CollisionAvoidTime), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_CollisionAvoidTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_CollisionAvoidTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_TargetRange_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "// \xec\xb6\xa9\xeb\x8f\x8c \xed\x9a\x8c\xed\x94\xbc \xec\x9c\xa0\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84\n" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
		{ "ToolTip", "\xec\xb6\xa9\xeb\x8f\x8c \xed\x9a\x8c\xed\x94\xbc \xec\x9c\xa0\xec\xa7\x80 \xec\x8b\x9c\xea\xb0\x84" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_TargetRange = { "TargetRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, TargetRange), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_TargetRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_TargetRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveDistanceFromCharacter_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveDistanceFromCharacter = { "MoveDistanceFromCharacter", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USwarmIntelligenceTrait, MoveDistanceFromCharacter), METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveDistanceFromCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveDistanceFromCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	void Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove_SetBit(void* Obj)
	{
		((USwarmIntelligenceTrait*)Obj)->UseLODMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove = { "UseLODMove", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USwarmIntelligenceTrait), &Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwarmIntelligenceTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_BoidsWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveSwarm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_InterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_SightRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Avoids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_Chases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_CollisionAvoidTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_TargetRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_MoveDistanceFromCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwarmIntelligenceTrait_Statics::NewProp_UseLODMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwarmIntelligenceTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwarmIntelligenceTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwarmIntelligenceTrait_Statics::ClassParams = {
		&USwarmIntelligenceTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USwarmIntelligenceTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwarmIntelligenceTrait()
	{
		if (!Z_Registration_Info_UClass_USwarmIntelligenceTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwarmIntelligenceTrait.OuterSingleton, Z_Construct_UClass_USwarmIntelligenceTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwarmIntelligenceTrait.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USwarmIntelligenceTrait>()
	{
		return USwarmIntelligenceTrait::StaticClass();
	}
	USwarmIntelligenceTrait::USwarmIntelligenceTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwarmIntelligenceTrait);
	USwarmIntelligenceTrait::~USwarmIntelligenceTrait() {}

static_assert(std::is_polymorphic<FishAttributes>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FishAttributes cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ishAttributes;
class UScriptStruct* FishAttributes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ishAttributes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ishAttributes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FishAttributes, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("ishAttributes"));
	}
	return Z_Registration_Info_UScriptStruct_ishAttributes.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FishAttributes>()
{
	return FishAttributes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FishAttributes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoidsWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoidsWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*--------------------- Fragment ------------------*/" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
		{ "ToolTip", "--------------------- Fragment ------------------" },
	};
#endif
	void* Z_Construct_UScriptStruct_FishAttributes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FishAttributes>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinWeight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinWeight = { "MinWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, MinWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxWeight_MetaData[] = {
		{ "Category", "Weight" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxWeight = { "MaxWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, MaxWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_BoidsWeight_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_BoidsWeight = { "BoidsWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, BoidsWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_BoidsWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_BoidsWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Speed" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FishAttributes, Type), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type_MetaData)) }; // 3767237422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FishAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_BoidsWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FishAttributes_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FishAttributes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"ishAttributes",
		sizeof(FishAttributes),
		alignof(FishAttributes),
		Z_Construct_UScriptStruct_FishAttributes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FishAttributes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FishAttributes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FishAttributes()
	{
		if (!Z_Registration_Info_UScriptStruct_ishAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ishAttributes.InnerSingleton, Z_Construct_UScriptStruct_FishAttributes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ishAttributes.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFishPerceptionFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FFishPerceptionFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FishPerceptionFragment;
class UScriptStruct* FFishPerceptionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FishPerceptionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FishPerceptionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFishPerceptionFragment, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("FishPerceptionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FishPerceptionFragment.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FFishPerceptionFragment>()
{
	return FFishPerceptionFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFishPerceptionFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"FishPerceptionFragment",
		sizeof(FFishPerceptionFragment),
		alignof(FFishPerceptionFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFishPerceptionFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_FishPerceptionFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FishPerceptionFragment.InnerSingleton, Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FishPerceptionFragment.InnerSingleton;
	}
	void USwarmIntelligenceProceessor::StaticRegisterNativesUSwarmIntelligenceProceessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwarmIntelligenceProceessor);
	UClass* Z_Construct_UClass_USwarmIntelligenceProceessor_NoRegister()
	{
		return USwarmIntelligenceProceessor::StaticClass();
	}
	struct Z_Construct_UClass_USwarmIntelligenceProceessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--------------------- Proceessor ------------------*/" },
		{ "IncludePath", "SwarmIntelligenceTrait.h" },
		{ "ModuleRelativePath", "SwarmIntelligenceTrait.h" },
		{ "ToolTip", "--------------------- Proceessor ------------------" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwarmIntelligenceProceessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::ClassParams = {
		&USwarmIntelligenceProceessor::StaticClass,
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
		0x400030A6u,
		METADATA_PARAMS(Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwarmIntelligenceProceessor()
	{
		if (!Z_Registration_Info_UClass_USwarmIntelligenceProceessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwarmIntelligenceProceessor.OuterSingleton, Z_Construct_UClass_USwarmIntelligenceProceessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwarmIntelligenceProceessor.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USwarmIntelligenceProceessor>()
	{
		return USwarmIntelligenceProceessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwarmIntelligenceProceessor);
	USwarmIntelligenceProceessor::~USwarmIntelligenceProceessor() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics::ScriptStructInfo[] = {
		{ FishAttributes::StaticStruct, Z_Construct_UScriptStruct_FishAttributes_Statics::NewStructOps, TEXT("ishAttributes"), &Z_Registration_Info_UScriptStruct_ishAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FishAttributes), 3699622856U) },
		{ FFishPerceptionFragment::StaticStruct, Z_Construct_UScriptStruct_FFishPerceptionFragment_Statics::NewStructOps, TEXT("FishPerceptionFragment"), &Z_Registration_Info_UScriptStruct_FishPerceptionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFishPerceptionFragment), 2039917813U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwarmIntelligenceTrait, USwarmIntelligenceTrait::StaticClass, TEXT("USwarmIntelligenceTrait"), &Z_Registration_Info_UClass_USwarmIntelligenceTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwarmIntelligenceTrait), 679080403U) },
		{ Z_Construct_UClass_USwarmIntelligenceProceessor, USwarmIntelligenceProceessor::StaticClass, TEXT("USwarmIntelligenceProceessor"), &Z_Registration_Info_UClass_USwarmIntelligenceProceessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwarmIntelligenceProceessor), 3827520212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_532194617(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SwarmIntelligenceTrait_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
