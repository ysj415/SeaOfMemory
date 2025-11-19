// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class SkillName : uint8;
#ifdef SEAOFMEMORY_SkillSubsystem_generated_h
#error "SkillSubsystem.generated.h already included, missing '#pragma once' in SkillSubsystem.h"
#endif
#define SEAOFMEMORY_SkillSubsystem_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkillData_Statics; \
	SEAOFMEMORY_API static class UScriptStruct* StaticStruct();


template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<struct FSkillData>();

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomSkillPoint); \
	DECLARE_FUNCTION(execSkillSlotChange); \
	DECLARE_FUNCTION(execIsSkillUnlock); \
	DECLARE_FUNCTION(execUnlockSkill); \
	DECLARE_FUNCTION(execResetSubsystemData);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomSkillPoint); \
	DECLARE_FUNCTION(execSkillSlotChange); \
	DECLARE_FUNCTION(execIsSkillUnlock); \
	DECLARE_FUNCTION(execUnlockSkill); \
	DECLARE_FUNCTION(execResetSubsystemData);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkillSubsystem(); \
	friend struct Z_Construct_UClass_USkillSubsystem_Statics; \
public: \
	DECLARE_CLASS(USkillSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(USkillSubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUSkillSubsystem(); \
	friend struct Z_Construct_UClass_USkillSubsystem_Statics; \
public: \
	DECLARE_CLASS(USkillSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(USkillSubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillSubsystem(USkillSubsystem&&); \
	NO_API USkillSubsystem(const USkillSubsystem&); \
public: \
	NO_API virtual ~USkillSubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillSubsystem(USkillSubsystem&&); \
	NO_API USkillSubsystem(const USkillSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkillSubsystem) \
	NO_API virtual ~USkillSubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_31_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class USkillSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
