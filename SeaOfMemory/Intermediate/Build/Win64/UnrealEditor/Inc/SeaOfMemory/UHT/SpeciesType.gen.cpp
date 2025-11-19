// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SpeciesType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeciesType() {}
// Cross Module References
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpeciesType();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeciesType;
	static UEnum* ESpeciesType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpeciesType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpeciesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_ESpeciesType, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("ESpeciesType"));
		}
		return Z_Registration_Info_UEnum_ESpeciesType.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<ESpeciesType>()
	{
		return ESpeciesType_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::Enumerators[] = {
		{ "ESpeciesType::Null", (int64)ESpeciesType::Null },
		{ "ESpeciesType::Anchovy", (int64)ESpeciesType::Anchovy },
		{ "ESpeciesType::Bluetang1", (int64)ESpeciesType::Bluetang1 },
		{ "ESpeciesType::Bluetang2", (int64)ESpeciesType::Bluetang2 },
		{ "ESpeciesType::ButterflyFish1", (int64)ESpeciesType::ButterflyFish1 },
		{ "ESpeciesType::ButterflyFish2", (int64)ESpeciesType::ButterflyFish2 },
		{ "ESpeciesType::Clam", (int64)ESpeciesType::Clam },
		{ "ESpeciesType::Clownfish", (int64)ESpeciesType::Clownfish },
		{ "ESpeciesType::Colortetra", (int64)ESpeciesType::Colortetra },
		{ "ESpeciesType::Firefish", (int64)ESpeciesType::Firefish },
		{ "ESpeciesType::Shark", (int64)ESpeciesType::Shark },
		{ "ESpeciesType::Skate", (int64)ESpeciesType::Skate },
		{ "ESpeciesType::Sunfish", (int64)ESpeciesType::Sunfish },
		{ "ESpeciesType::Turtle", (int64)ESpeciesType::Turtle },
		{ "ESpeciesType::Whale", (int64)ESpeciesType::Whale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::Enum_MetaDataParams[] = {
		{ "Anchovy.Comment", "/**\n * \n */" },
		{ "Anchovy.DisplayName", "Anchovy" },
		{ "Anchovy.Name", "ESpeciesType::Anchovy" },
		{ "BlueprintType", "true" },
		{ "Bluetang1.Comment", "/**\n * \n */" },
		{ "Bluetang1.DisplayName", "Bluetang1" },
		{ "Bluetang1.Name", "ESpeciesType::Bluetang1" },
		{ "Bluetang2.Comment", "/**\n * \n */" },
		{ "Bluetang2.DisplayName", "Bluetang2" },
		{ "Bluetang2.Name", "ESpeciesType::Bluetang2" },
		{ "ButterflyFish1.Comment", "/**\n * \n */" },
		{ "ButterflyFish1.DisplayName", "ButterflyFish1" },
		{ "ButterflyFish1.Name", "ESpeciesType::ButterflyFish1" },
		{ "ButterflyFish2.Comment", "/**\n * \n */" },
		{ "ButterflyFish2.DisplayName", "ButterflyFish2" },
		{ "ButterflyFish2.Name", "ESpeciesType::ButterflyFish2" },
		{ "Clam.Comment", "/**\n * \n */" },
		{ "Clam.DisplayName", "Clam" },
		{ "Clam.Name", "ESpeciesType::Clam" },
		{ "Clownfish.Comment", "/**\n * \n */" },
		{ "Clownfish.DisplayName", "Clownfish" },
		{ "Clownfish.Name", "ESpeciesType::Clownfish" },
		{ "Colortetra.Comment", "/**\n * \n */" },
		{ "Colortetra.DisplayName", "Colortetra" },
		{ "Colortetra.Name", "ESpeciesType::Colortetra" },
		{ "Comment", "/**\n * \n */" },
		{ "Firefish.Comment", "/**\n * \n */" },
		{ "Firefish.DisplayName", "Firefish" },
		{ "Firefish.Name", "ESpeciesType::Firefish" },
		{ "ModuleRelativePath", "Public/SpeciesType.h" },
		{ "Null.Comment", "/**\n * \n */" },
		{ "Null.DisplayName", "null" },
		{ "Null.Name", "ESpeciesType::Null" },
		{ "Shark.Comment", "/**\n * \n */" },
		{ "Shark.DisplayName", "Shark" },
		{ "Shark.Name", "ESpeciesType::Shark" },
		{ "Skate.Comment", "/**\n * \n */" },
		{ "Skate.DisplayName", "Skate" },
		{ "Skate.Name", "ESpeciesType::Skate" },
		{ "Sunfish.Comment", "/**\n * \n */" },
		{ "Sunfish.DisplayName", "Sunfish" },
		{ "Sunfish.Name", "ESpeciesType::Sunfish" },
		{ "Turtle.Comment", "/**\n * \n */" },
		{ "Turtle.DisplayName", "Turtle" },
		{ "Turtle.Name", "ESpeciesType::Turtle" },
		{ "Whale.Comment", "/**\n * \n */" },
		{ "Whale.DisplayName", "Whale" },
		{ "Whale.Name", "ESpeciesType::Whale" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"ESpeciesType",
		"ESpeciesType",
		Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_ESpeciesType()
	{
		if (!Z_Registration_Info_UEnum_ESpeciesType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeciesType.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_ESpeciesType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpeciesType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFishBehaviorState;
	static UEnum* EFishBehaviorState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFishBehaviorState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFishBehaviorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("EFishBehaviorState"));
		}
		return Z_Registration_Info_UEnum_EFishBehaviorState.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<EFishBehaviorState>()
	{
		return EFishBehaviorState_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::Enumerators[] = {
		{ "EFishBehaviorState::Searching", (int64)EFishBehaviorState::Searching },
		{ "EFishBehaviorState::Hunting", (int64)EFishBehaviorState::Hunting },
		{ "EFishBehaviorState::Fleeing", (int64)EFishBehaviorState::Fleeing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Fleeing.DisplayName", "Fleeing" },
		{ "Fleeing.Name", "EFishBehaviorState::Fleeing" },
		{ "Hunting.DisplayName", "Hunting" },
		{ "Hunting.Name", "EFishBehaviorState::Hunting" },
		{ "ModuleRelativePath", "Public/SpeciesType.h" },
		{ "Searching.DisplayName", "Searching" },
		{ "Searching.Name", "EFishBehaviorState::Searching" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"EFishBehaviorState",
		"EFishBehaviorState",
		Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState()
	{
		if (!Z_Registration_Info_UEnum_EFishBehaviorState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFishBehaviorState.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_EFishBehaviorState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFishBehaviorState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SpeciesType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SpeciesType_h_Statics::EnumInfo[] = {
		{ ESpeciesType_StaticEnum, TEXT("ESpeciesType"), &Z_Registration_Info_UEnum_ESpeciesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4256280452U) },
		{ EFishBehaviorState_StaticEnum, TEXT("EFishBehaviorState"), &Z_Registration_Info_UEnum_EFishBehaviorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2818759923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SpeciesType_h_1537597823(TEXT("/Script/SeaOfMemory"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SpeciesType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SpeciesType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
