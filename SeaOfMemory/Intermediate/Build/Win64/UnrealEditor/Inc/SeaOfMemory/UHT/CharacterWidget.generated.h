// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class SkillName : uint8;
#ifdef SEAOFMEMORY_CharacterWidget_generated_h
#error "CharacterWidget.generated.h already included, missing '#pragma once' in CharacterWidget.h"
#endif
#define SEAOFMEMORY_CharacterWidget_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_RPC_WRAPPERS \
	virtual void OxygenTankPointerTurnOff_Implementation(); \
	virtual void OxygenTankPointerTurnOn_Implementation(); \
 \
	DECLARE_FUNCTION(execSetOxygenTankPointerOff); \
	DECLARE_FUNCTION(execOxygenTankPointerOnOff); \
	DECLARE_FUNCTION(execOxygenTankPointerTurnOff); \
	DECLARE_FUNCTION(execOxygenTankPointerTurnOn); \
	DECLARE_FUNCTION(execUpdateOxygen); \
	DECLARE_FUNCTION(execVisibleWarningMasage); \
	DECLARE_FUNCTION(execGetSkillImage); \
	DECLARE_FUNCTION(execUseSkill); \
	DECLARE_FUNCTION(execChangeSkillSlot);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OxygenTankPointerTurnOff_Implementation(); \
	virtual void OxygenTankPointerTurnOn_Implementation(); \
 \
	DECLARE_FUNCTION(execSetOxygenTankPointerOff); \
	DECLARE_FUNCTION(execOxygenTankPointerOnOff); \
	DECLARE_FUNCTION(execOxygenTankPointerTurnOff); \
	DECLARE_FUNCTION(execOxygenTankPointerTurnOn); \
	DECLARE_FUNCTION(execUpdateOxygen); \
	DECLARE_FUNCTION(execVisibleWarningMasage); \
	DECLARE_FUNCTION(execGetSkillImage); \
	DECLARE_FUNCTION(execUseSkill); \
	DECLARE_FUNCTION(execChangeSkillSlot);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_CALLBACK_WRAPPERS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterWidget(); \
	friend struct Z_Construct_UClass_UCharacterWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UCharacterWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterWidget(); \
	friend struct Z_Construct_UClass_UCharacterWidget_Statics; \
public: \
	DECLARE_CLASS(UCharacterWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UCharacterWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterWidget(UCharacterWidget&&); \
	NO_API UCharacterWidget(const UCharacterWidget&); \
public: \
	NO_API virtual ~UCharacterWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterWidget(UCharacterWidget&&); \
	NO_API UCharacterWidget(const UCharacterWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterWidget) \
	NO_API virtual ~UCharacterWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_13_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_CALLBACK_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_CALLBACK_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UCharacterWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
