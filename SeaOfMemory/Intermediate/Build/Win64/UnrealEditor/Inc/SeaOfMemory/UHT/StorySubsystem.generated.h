// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StorySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEAOFMEMORY_StorySubsystem_generated_h
#error "StorySubsystem.generated.h already included, missing '#pragma once' in StorySubsystem.h"
#endif
#define SEAOFMEMORY_StorySubsystem_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execKidEvent); \
	DECLARE_FUNCTION(execCollectorEvent); \
	DECLARE_FUNCTION(execClearCurrentQuest); \
	DECLARE_FUNCTION(execResetSubsystemData);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execKidEvent); \
	DECLARE_FUNCTION(execCollectorEvent); \
	DECLARE_FUNCTION(execClearCurrentQuest); \
	DECLARE_FUNCTION(execResetSubsystemData);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorySubsystem(); \
	friend struct Z_Construct_UClass_UStorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UStorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UStorySubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUStorySubsystem(); \
	friend struct Z_Construct_UClass_UStorySubsystem_Statics; \
public: \
	DECLARE_CLASS(UStorySubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UStorySubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorySubsystem(UStorySubsystem&&); \
	NO_API UStorySubsystem(const UStorySubsystem&); \
public: \
	NO_API virtual ~UStorySubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorySubsystem(UStorySubsystem&&); \
	NO_API UStorySubsystem(const UStorySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStorySubsystem) \
	NO_API virtual ~UStorySubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_27_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UStorySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h


#define FOREACH_ENUM_QUESTLINE(op) \
	op(QuestLine::OpenPhone) \
	op(QuestLine::DrivingBoat) \
	op(QuestLine::GotoUnderWater) \
	op(QuestLine::Engine) \
	op(QuestLine::GotoBoat) \
	op(QuestLine::ShipPhone) \
	op(QuestLine::GotoShip) \
	op(QuestLine::Item) \
	op(QuestLine::CompletetoGetItem) \
	op(QuestLine::Clear) 

enum class QuestLine : uint8;
template<> struct TIsUEnumClass<QuestLine> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<QuestLine>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
