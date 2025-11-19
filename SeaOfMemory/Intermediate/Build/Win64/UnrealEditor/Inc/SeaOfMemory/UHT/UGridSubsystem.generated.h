// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UGridSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
struct FColor;
#ifdef SEAOFMEMORY_UGridSubsystem_generated_h
#error "UGridSubsystem.generated.h already included, missing '#pragma once' in UGridSubsystem.h"
#endif
#define SEAOFMEMORY_UGridSubsystem_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridEntityInfo_Statics; \
	SEAOFMEMORY_API static class UScriptStruct* StaticStruct();


template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<struct FGridEntityInfo>();

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveGrid); \
	DECLARE_FUNCTION(execDrawGridDebugLine);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveGrid); \
	DECLARE_FUNCTION(execDrawGridDebugLine);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridSubsystem(); \
	friend struct Z_Construct_UClass_UGridSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGridSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UGridSubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUGridSubsystem(); \
	friend struct Z_Construct_UClass_UGridSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGridSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UGridSubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridSubsystem(UGridSubsystem&&); \
	NO_API UGridSubsystem(const UGridSubsystem&); \
public: \
	NO_API virtual ~UGridSubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridSubsystem(UGridSubsystem&&); \
	NO_API UGridSubsystem(const UGridSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridSubsystem) \
	NO_API virtual ~UGridSubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_26_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UGridSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_UGridSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
