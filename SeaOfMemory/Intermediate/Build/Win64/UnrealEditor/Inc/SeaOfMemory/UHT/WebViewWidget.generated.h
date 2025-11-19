// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WebViewWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SEAOFMEMORY_WebViewWidget_generated_h
#error "WebViewWidget.generated.h already included, missing '#pragma once' in WebViewWidget.h"
#endif
#define SEAOFMEMORY_WebViewWidget_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetViewTweetMod); \
	DECLARE_FUNCTION(execSetPostTweetMod); \
	DECLARE_FUNCTION(execOnPostTweetWindClicked); \
	DECLARE_FUNCTION(execTweetButtonClick); \
	DECLARE_FUNCTION(execOnUrlChanged); \
	DECLARE_FUNCTION(execNativeConstruct); \
	DECLARE_FUNCTION(execOpenAuthenticationPage);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetViewTweetMod); \
	DECLARE_FUNCTION(execSetPostTweetMod); \
	DECLARE_FUNCTION(execOnPostTweetWindClicked); \
	DECLARE_FUNCTION(execTweetButtonClick); \
	DECLARE_FUNCTION(execOnUrlChanged); \
	DECLARE_FUNCTION(execNativeConstruct); \
	DECLARE_FUNCTION(execOpenAuthenticationPage);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWebViewWidget(); \
	friend struct Z_Construct_UClass_UWebViewWidget_Statics; \
public: \
	DECLARE_CLASS(UWebViewWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UWebViewWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWebViewWidget(); \
	friend struct Z_Construct_UClass_UWebViewWidget_Statics; \
public: \
	DECLARE_CLASS(UWebViewWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UWebViewWidget)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebViewWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebViewWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebViewWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebViewWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebViewWidget(UWebViewWidget&&); \
	NO_API UWebViewWidget(const UWebViewWidget&); \
public: \
	NO_API virtual ~UWebViewWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWebViewWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWebViewWidget(UWebViewWidget&&); \
	NO_API UWebViewWidget(const UWebViewWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWebViewWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWebViewWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWebViewWidget) \
	NO_API virtual ~UWebViewWidget();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_18_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UWebViewWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_WebViewWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
