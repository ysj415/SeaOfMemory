// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SOMGameDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOMGameDataBase() {}
// Cross Module References
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_Place();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_SkillName();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SkillName;
	static UEnum* SkillName_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SkillName.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SkillName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_SkillName, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("SkillName"));
		}
		return Z_Registration_Info_UEnum_SkillName.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<SkillName>()
	{
		return SkillName_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_SkillName_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::Enumerators[] = {
		{ "SkillName::Null", (int64)SkillName::Null },
		{ "SkillName::AquaJet", (int64)SkillName::AquaJet },
		{ "SkillName::ActiveCamouflage", (int64)SkillName::ActiveCamouflage },
		{ "SkillName::ResidualBait", (int64)SkillName::ResidualBait },
		{ "SkillName::Repellent", (int64)SkillName::Repellent },
		{ "SkillName::Tank", (int64)SkillName::Tank },
		{ "SkillName::Speed", (int64)SkillName::Speed },
		{ "SkillName::Breath", (int64)SkillName::Breath },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::Enum_MetaDataParams[] = {
		{ "ActiveCamouflage.DisplayName", "ActiveCamouflage" },
		{ "ActiveCamouflage.Name", "SkillName::ActiveCamouflage" },
		{ "AquaJet.DisplayName", "AquaJet" },
		{ "AquaJet.Name", "SkillName::AquaJet" },
		{ "BlueprintType", "true" },
		{ "Breath.DisplayName", "Breath" },
		{ "Breath.Name", "SkillName::Breath" },
		{ "ModuleRelativePath", "Public/SOMGameDataBase.h" },
		{ "Null.DisplayName", "Null" },
		{ "Null.Name", "SkillName::Null" },
		{ "Repellent.DisplayName", "Repellent" },
		{ "Repellent.Name", "SkillName::Repellent" },
		{ "ResidualBait.DisplayName", "ResidualBait" },
		{ "ResidualBait.Name", "SkillName::ResidualBait" },
		{ "Speed.DisplayName", "Speed" },
		{ "Speed.Name", "SkillName::Speed" },
		{ "Tank.DisplayName", "Tank" },
		{ "Tank.Name", "SkillName::Tank" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"SkillName",
		"SkillName",
		Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_SkillName()
	{
		if (!Z_Registration_Info_UEnum_SkillName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SkillName.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_SkillName_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SkillName.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpecies;
	static UEnum* ESpecies_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpecies.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpecies.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_ESpecies, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("ESpecies"));
		}
		return Z_Registration_Info_UEnum_ESpecies.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<ESpecies>()
	{
		return ESpecies_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::Enumerators[] = {
		{ "ESpecies::Null", (int64)ESpecies::Null },
		{ "ESpecies::Anchovy", (int64)ESpecies::Anchovy },
		{ "ESpecies::Bluetang1", (int64)ESpecies::Bluetang1 },
		{ "ESpecies::Bluetang2", (int64)ESpecies::Bluetang2 },
		{ "ESpecies::ButterflyFish1", (int64)ESpecies::ButterflyFish1 },
		{ "ESpecies::ButterflyFish2", (int64)ESpecies::ButterflyFish2 },
		{ "ESpecies::Clam", (int64)ESpecies::Clam },
		{ "ESpecies::Clownfish", (int64)ESpecies::Clownfish },
		{ "ESpecies::Colortetra", (int64)ESpecies::Colortetra },
		{ "ESpecies::Firefish", (int64)ESpecies::Firefish },
		{ "ESpecies::Shark", (int64)ESpecies::Shark },
		{ "ESpecies::Skate", (int64)ESpecies::Skate },
		{ "ESpecies::Sunfish", (int64)ESpecies::Sunfish },
		{ "ESpecies::Turtle", (int64)ESpecies::Turtle },
		{ "ESpecies::Whale", (int64)ESpecies::Whale },
		{ "ESpecies::Character", (int64)ESpecies::Character },
		{ "ESpecies::Bait", (int64)ESpecies::Bait },
		{ "ESpecies::Repellent", (int64)ESpecies::Repellent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::Enum_MetaDataParams[] = {
		{ "Anchovy.DisplayName", "Anchovy" },
		{ "Anchovy.Name", "ESpecies::Anchovy" },
		{ "Bait.DisplayName", "Bait" },
		{ "Bait.Name", "ESpecies::Bait" },
		{ "BlueprintType", "true" },
		{ "Bluetang1.DisplayName", "Bluetang1" },
		{ "Bluetang1.Name", "ESpecies::Bluetang1" },
		{ "Bluetang2.DisplayName", "Bluetang2" },
		{ "Bluetang2.Name", "ESpecies::Bluetang2" },
		{ "ButterflyFish1.DisplayName", "ButterflyFish1" },
		{ "ButterflyFish1.Name", "ESpecies::ButterflyFish1" },
		{ "ButterflyFish2.DisplayName", "ButterflyFish2" },
		{ "ButterflyFish2.Name", "ESpecies::ButterflyFish2" },
		{ "Character.DisplayName", "Character" },
		{ "Character.Name", "ESpecies::Character" },
		{ "Clam.DisplayName", "Clam" },
		{ "Clam.Name", "ESpecies::Clam" },
		{ "Clownfish.DisplayName", "Clownfish" },
		{ "Clownfish.Name", "ESpecies::Clownfish" },
		{ "Colortetra.DisplayName", "Colortetra" },
		{ "Colortetra.Name", "ESpecies::Colortetra" },
		{ "Firefish.DisplayName", "Firefish" },
		{ "Firefish.Name", "ESpecies::Firefish" },
		{ "ModuleRelativePath", "Public/SOMGameDataBase.h" },
		{ "Null.DisplayName", "Null" },
		{ "Null.Name", "ESpecies::Null" },
		{ "Repellent.DisplayName", "Repellent" },
		{ "Repellent.Name", "ESpecies::Repellent" },
		{ "Shark.DisplayName", "Shark" },
		{ "Shark.Name", "ESpecies::Shark" },
		{ "Skate.DisplayName", "Skate" },
		{ "Skate.Name", "ESpecies::Skate" },
		{ "Sunfish.DisplayName", "Sunfish" },
		{ "Sunfish.Name", "ESpecies::Sunfish" },
		{ "Turtle.DisplayName", "Turtle" },
		{ "Turtle.Name", "ESpecies::Turtle" },
		{ "Whale.DisplayName", "Whale" },
		{ "Whale.Name", "ESpecies::Whale" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"ESpecies",
		"ESpecies",
		Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies()
	{
		if (!Z_Registration_Info_UEnum_ESpecies.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpecies.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_ESpecies_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpecies.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_Place;
	static UEnum* Place_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_Place.OuterSingleton)
		{
			Z_Registration_Info_UEnum_Place.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_Place, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("Place"));
		}
		return Z_Registration_Info_UEnum_Place.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<Place>()
	{
		return Place_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_Place_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_Place_Statics::Enumerators[] = {
		{ "Place::Start", (int64)Place::Start },
		{ "Place::Ship", (int64)Place::Ship },
		{ "Place::PlayGround", (int64)Place::PlayGround },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_Place_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SOMGameDataBase.h" },
		{ "PlayGround.DisplayName", "PlayGround" },
		{ "PlayGround.Name", "Place::PlayGround" },
		{ "Ship.DisplayName", "Ship" },
		{ "Ship.Name", "Place::Ship" },
		{ "Start.DisplayName", "Start" },
		{ "Start.Name", "Place::Start" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_Place_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"Place",
		"Place",
		Z_Construct_UEnum_SeaOfMemory_Place_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_Place_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_Place_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_Place_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_Place()
	{
		if (!Z_Registration_Info_UEnum_Place.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_Place.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_Place_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_Place.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SOMGameDataBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SOMGameDataBase_h_Statics::EnumInfo[] = {
		{ SkillName_StaticEnum, TEXT("SkillName"), &Z_Registration_Info_UEnum_SkillName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3864623515U) },
		{ ESpecies_StaticEnum, TEXT("ESpecies"), &Z_Registration_Info_UEnum_ESpecies, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3767237422U) },
		{ Place_StaticEnum, TEXT("Place"), &Z_Registration_Info_UEnum_Place, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1488107671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SOMGameDataBase_h_3793613110(TEXT("/Script/SeaOfMemory"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SOMGameDataBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SOMGameDataBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
