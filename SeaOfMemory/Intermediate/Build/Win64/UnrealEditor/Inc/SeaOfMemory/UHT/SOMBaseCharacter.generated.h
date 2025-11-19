// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SOMBaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UCameraComponent;
class UNiagaraComponent;
class UUserWidget;
enum class ESpecies : uint8;
#ifdef SEAOFMEMORY_SOMBaseCharacter_generated_h
#error "SOMBaseCharacter.generated.h already included, missing '#pragma once' in SOMBaseCharacter.h"
#endif
#define SEAOFMEMORY_SOMBaseCharacter_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_RPC_WRAPPERS \
	virtual void UnUseRequlator_Implementation(); \
	virtual void UnUseMask_Implementation(); \
	virtual void UseRequlator_Implementation(); \
	virtual void UseMask_Implementation(); \
	virtual void BuyFlippers_Implementation(); \
	virtual void BuyTank_Implementation(); \
	virtual void SetVisibilityHidden_Implementation(); \
	virtual void SetVisibilityVisible_Implementation(); \
 \
	DECLARE_FUNCTION(execSetIsInfiniteBreath); \
	DECLARE_FUNCTION(execOutNewCollection); \
	DECLARE_FUNCTION(execToggleNiagaraEffect); \
	DECLARE_FUNCTION(execUpCurrentFocalLength); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execUnUseRequlator); \
	DECLARE_FUNCTION(execUnUseMask); \
	DECLARE_FUNCTION(execUseRequlator); \
	DECLARE_FUNCTION(execUseMask); \
	DECLARE_FUNCTION(execBuyFlippers); \
	DECLARE_FUNCTION(execBuyTank); \
	DECLARE_FUNCTION(execSetVisibilityHidden); \
	DECLARE_FUNCTION(execSetVisibilityVisible); \
	DECLARE_FUNCTION(execNewCollectionRegisteredEvent); \
	DECLARE_FUNCTION(execNoticeNewMessage); \
	DECLARE_FUNCTION(execStopNewMessageNotice); \
	DECLARE_FUNCTION(execPlayDivingSound); \
	DECLARE_FUNCTION(execSetInputModeToGameOnly); \
	DECLARE_FUNCTION(execSetInputModeToUIOnly); \
	DECLARE_FUNCTION(execUseSkill); \
	DECLARE_FUNCTION(execSetSkillSlotIcon); \
	DECLARE_FUNCTION(execGetCameraProjectionMatrix); \
	DECLARE_FUNCTION(execGetCameraViewMatrix); \
	DECLARE_FUNCTION(execGetCameraViewProjectionMatrix); \
	DECLARE_FUNCTION(execSwitchCamera); \
	DECLARE_FUNCTION(execSetDiveMode); \
	DECLARE_FUNCTION(execSetWalkingMode); \
	DECLARE_FUNCTION(execSetSwimMode);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UnUseRequlator_Implementation(); \
	virtual void UnUseMask_Implementation(); \
	virtual void UseRequlator_Implementation(); \
	virtual void UseMask_Implementation(); \
	virtual void BuyFlippers_Implementation(); \
	virtual void BuyTank_Implementation(); \
	virtual void SetVisibilityHidden_Implementation(); \
	virtual void SetVisibilityVisible_Implementation(); \
 \
	DECLARE_FUNCTION(execSetIsInfiniteBreath); \
	DECLARE_FUNCTION(execOutNewCollection); \
	DECLARE_FUNCTION(execToggleNiagaraEffect); \
	DECLARE_FUNCTION(execUpCurrentFocalLength); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execUnUseRequlator); \
	DECLARE_FUNCTION(execUnUseMask); \
	DECLARE_FUNCTION(execUseRequlator); \
	DECLARE_FUNCTION(execUseMask); \
	DECLARE_FUNCTION(execBuyFlippers); \
	DECLARE_FUNCTION(execBuyTank); \
	DECLARE_FUNCTION(execSetVisibilityHidden); \
	DECLARE_FUNCTION(execSetVisibilityVisible); \
	DECLARE_FUNCTION(execNewCollectionRegisteredEvent); \
	DECLARE_FUNCTION(execNoticeNewMessage); \
	DECLARE_FUNCTION(execStopNewMessageNotice); \
	DECLARE_FUNCTION(execPlayDivingSound); \
	DECLARE_FUNCTION(execSetInputModeToGameOnly); \
	DECLARE_FUNCTION(execSetInputModeToUIOnly); \
	DECLARE_FUNCTION(execUseSkill); \
	DECLARE_FUNCTION(execSetSkillSlotIcon); \
	DECLARE_FUNCTION(execGetCameraProjectionMatrix); \
	DECLARE_FUNCTION(execGetCameraViewMatrix); \
	DECLARE_FUNCTION(execGetCameraViewProjectionMatrix); \
	DECLARE_FUNCTION(execSwitchCamera); \
	DECLARE_FUNCTION(execSetDiveMode); \
	DECLARE_FUNCTION(execSetWalkingMode); \
	DECLARE_FUNCTION(execSetSwimMode);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_CALLBACK_WRAPPERS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASOMBaseCharacter(); \
	friend struct Z_Construct_UClass_ASOMBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASOMBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(ASOMBaseCharacter)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesASOMBaseCharacter(); \
	friend struct Z_Construct_UClass_ASOMBaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ASOMBaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(ASOMBaseCharacter)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASOMBaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASOMBaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOMBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOMBaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOMBaseCharacter(ASOMBaseCharacter&&); \
	NO_API ASOMBaseCharacter(const ASOMBaseCharacter&); \
public: \
	NO_API virtual ~ASOMBaseCharacter();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASOMBaseCharacter(ASOMBaseCharacter&&); \
	NO_API ASOMBaseCharacter(const ASOMBaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASOMBaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASOMBaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASOMBaseCharacter) \
	NO_API virtual ~ASOMBaseCharacter();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_19_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_CALLBACK_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_CALLBACK_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class ASOMBaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h


#define FOREACH_ENUM_SOMCHARACTERMOVEMENTMODE(op) \
	op(SOMCharacterMovementMode::WALKMODE) \
	op(SOMCharacterMovementMode::SWIMMODE) \
	op(SOMCharacterMovementMode::DIVEMODE) 

enum class SOMCharacterMovementMode : uint8;
template<> struct TIsUEnumClass<SOMCharacterMovementMode> { enum { Value = true }; };
template<> SEAOFMEMORY_API UEnum* StaticEnum<SOMCharacterMovementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
