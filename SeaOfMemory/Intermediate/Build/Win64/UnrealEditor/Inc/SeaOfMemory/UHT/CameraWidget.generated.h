// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CameraWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpecies : uint8;
#ifdef SEAOFMEMORY_CameraWidget_generated_h
#error "CameraWidget.generated.h already included, missing '#pragma once' in CameraWidget.h"
#endif
#define SEAOFMEMORY_CameraWidget_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_12_DELEGATE \
SEAOFMEMORY_API void FNewCollectionRegistered_DelegateWrapper(const FMulticastScriptDelegate& NewCollectionRegistered, ESpecies BestSpecies);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawTargetCircle); \
	DECLARE_FUNCTION(execResetLastPhoto); \
	DECLARE_FUNCTION(execNewCollectionRegistered);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawTargetCircle); \
	DECLARE_FUNCTION(execResetLastPhoto); \
	DECLARE_FUNCTION(execNewCollectionRegistered);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraWidget(); \
	friend struct Z_Construct_UClass_UCameraWidget_Statics; \
public: \
	DECLARE_CLASS(UCameraWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UCameraWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCameraWidget(); \
	friend struct Z_Construct_UClass_UCameraWidget_Statics; \
public: \
	DECLARE_CLASS(UCameraWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UCameraWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraWidget(UCameraWidget&&); \
	NO_API UCameraWidget(const UCameraWidget&); \
public: \
	NO_API virtual ~UCameraWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraWidget(UCameraWidget&&); \
	NO_API UCameraWidget(const UCameraWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraWidget) \
	NO_API virtual ~UCameraWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_15_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UCameraWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CameraWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
