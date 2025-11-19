// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOMGameDataBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEAOFMEMORY_SOMGameDataBase_generated_h
#error "SOMGameDataBase.generated.h already included, missing '#pragma once' in SOMGameDataBase.h"
#endif
#define SEAOFMEMORY_SOMGameDataBase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SOMGameDataBase_h


#define FOREACH_ENUM_SKILLNAME(op) \
	op(SkillName::Null) \
	op(SkillName::AquaJet) \
	op(SkillName::ActiveCamouflage) \
	op(SkillName::ResidualBait) \
	op(SkillName::Repellent) \
	op(SkillName::Tank) \
	op(SkillName::Speed) \
	op(SkillName::Breath) 

enum class SkillName : uint8;
template<> struct TIsUEnumClass<SkillName> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<SkillName>();

#define FOREACH_ENUM_ESPECIES(op) \
	op(ESpecies::Null) \
	op(ESpecies::Anchovy) \
	op(ESpecies::Bluetang1) \
	op(ESpecies::Bluetang2) \
	op(ESpecies::ButterflyFish1) \
	op(ESpecies::ButterflyFish2) \
	op(ESpecies::Clam) \
	op(ESpecies::Clownfish) \
	op(ESpecies::Colortetra) \
	op(ESpecies::Firefish) \
	op(ESpecies::Shark) \
	op(ESpecies::Skate) \
	op(ESpecies::Sunfish) \
	op(ESpecies::Turtle) \
	op(ESpecies::Whale) \
	op(ESpecies::Character) \
	op(ESpecies::Bait) \
	op(ESpecies::Repellent) 

enum class ESpecies : uint8;
template<> struct TIsUEnumClass<ESpecies> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<ESpecies>();

#define FOREACH_ENUM_PLACE(op) \
	op(Place::Start) \
	op(Place::Ship) \
	op(Place::PlayGround) 

enum class Place : uint8;
template<> struct TIsUEnumClass<Place> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<Place>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
