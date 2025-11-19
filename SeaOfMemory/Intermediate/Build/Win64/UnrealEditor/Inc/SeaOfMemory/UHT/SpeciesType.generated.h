// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpeciesType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEAOFMEMORY_SpeciesType_generated_h
#error "SpeciesType.generated.h already included, missing '#pragma once' in SpeciesType.h"
#endif
#define SEAOFMEMORY_SpeciesType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SpeciesType_h


#define FOREACH_ENUM_ESPECIESTYPE(op) \
	op(ESpeciesType::Null) \
	op(ESpeciesType::Anchovy) \
	op(ESpeciesType::Bluetang1) \
	op(ESpeciesType::Bluetang2) \
	op(ESpeciesType::ButterflyFish1) \
	op(ESpeciesType::ButterflyFish2) \
	op(ESpeciesType::Clam) \
	op(ESpeciesType::Clownfish) \
	op(ESpeciesType::Colortetra) \
	op(ESpeciesType::Firefish) \
	op(ESpeciesType::Shark) \
	op(ESpeciesType::Skate) \
	op(ESpeciesType::Sunfish) \
	op(ESpeciesType::Turtle) \
	op(ESpeciesType::Whale) 

enum class ESpeciesType : uint8;
template<> struct TIsUEnumClass<ESpeciesType> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<ESpeciesType>();

#define FOREACH_ENUM_EFISHBEHAVIORSTATE(op) \
	op(EFishBehaviorState::Searching) \
	op(EFishBehaviorState::Hunting) \
	op(EFishBehaviorState::Fleeing) 

enum class EFishBehaviorState : uint8;
template<> struct TIsUEnumClass<EFishBehaviorState> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<EFishBehaviorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
