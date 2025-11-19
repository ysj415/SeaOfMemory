// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESpecies : uint8;
#ifdef SEAOFMEMORY_ImageUserWidget_generated_h
#error "ImageUserWidget.generated.h already included, missing '#pragma once' in ImageUserWidget.h"
#endif
#define SEAOFMEMORY_ImageUserWidget_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSpeciesName); \
	DECLARE_FUNCTION(execOnShareButtonClicked); \
	DECLARE_FUNCTION(execOnDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execSetMainImage); \
	DECLARE_FUNCTION(execNativeOnInitialized);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSpeciesName); \
	DECLARE_FUNCTION(execOnShareButtonClicked); \
	DECLARE_FUNCTION(execOnDeleteButtonClicked); \
	DECLARE_FUNCTION(execOnButtonClicked); \
	DECLARE_FUNCTION(execSetMainImage); \
	DECLARE_FUNCTION(execNativeOnInitialized);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageUserWidget(); \
	friend struct Z_Construct_UClass_UImageUserWidget_Statics; \
public: \
	DECLARE_CLASS(UImageUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UImageUserWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUImageUserWidget(); \
	friend struct Z_Construct_UClass_UImageUserWidget_Statics; \
public: \
	DECLARE_CLASS(UImageUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UImageUserWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageUserWidget(UImageUserWidget&&); \
	NO_API UImageUserWidget(const UImageUserWidget&); \
public: \
	NO_API virtual ~UImageUserWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageUserWidget(UImageUserWidget&&); \
	NO_API UImageUserWidget(const UImageUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageUserWidget) \
	NO_API virtual ~UImageUserWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_12_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UImageUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
