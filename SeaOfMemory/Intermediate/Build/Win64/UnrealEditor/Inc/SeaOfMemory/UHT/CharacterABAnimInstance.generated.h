// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterABAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEAOFMEMORY_CharacterABAnimInstance_generated_h
#error "CharacterABAnimInstance.generated.h already included, missing '#pragma once' in CharacterABAnimInstance.h"
#endif
#define SEAOFMEMORY_CharacterABAnimInstance_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_RPC_WRAPPERS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterABAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterABAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterABAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UCharacterABAnimInstance)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterABAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterABAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterABAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UCharacterABAnimInstance)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterABAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterABAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterABAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterABAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterABAnimInstance(UCharacterABAnimInstance&&); \
	NO_API UCharacterABAnimInstance(const UCharacterABAnimInstance&); \
public: \
	NO_API virtual ~UCharacterABAnimInstance();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterABAnimInstance(UCharacterABAnimInstance&&); \
	NO_API UCharacterABAnimInstance(const UCharacterABAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterABAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterABAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterABAnimInstance) \
	NO_API virtual ~UCharacterABAnimInstance();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_19_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UCharacterABAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h


#define FOREACH_ENUM_OVERVELOCITY(op) \
	op(OverVelocity::Over300) \
	op(OverVelocity::Under300) 

enum class OverVelocity : uint8;
template<> struct TIsUEnumClass<OverVelocity> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<OverVelocity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
