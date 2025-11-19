// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionInstance;
#ifdef SEAOFMEMORY_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define SEAOFMEMORY_MyPlayerController_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwimUpDownCompletedCallBack); \
	DECLARE_FUNCTION(execSwimUpDownStartedCallBack); \
	DECLARE_FUNCTION(execSwimUpDownTriggeredCallBack); \
	DECLARE_FUNCTION(execLeftMouseCallBack); \
	DECLARE_FUNCTION(execSetCameraModeCallBack); \
	DECLARE_FUNCTION(execRotateCallBack); \
	DECLARE_FUNCTION(execMovementStartedCallBack); \
	DECLARE_FUNCTION(execMovementCompletedCallBack); \
	DECLARE_FUNCTION(execMovementTriggeredCallBack);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwimUpDownCompletedCallBack); \
	DECLARE_FUNCTION(execSwimUpDownStartedCallBack); \
	DECLARE_FUNCTION(execSwimUpDownTriggeredCallBack); \
	DECLARE_FUNCTION(execLeftMouseCallBack); \
	DECLARE_FUNCTION(execSetCameraModeCallBack); \
	DECLARE_FUNCTION(execRotateCallBack); \
	DECLARE_FUNCTION(execMovementStartedCallBack); \
	DECLARE_FUNCTION(execMovementCompletedCallBack); \
	DECLARE_FUNCTION(execMovementTriggeredCallBack);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	NO_API virtual ~AMyPlayerController();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController) \
	NO_API virtual ~AMyPlayerController();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_12_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
