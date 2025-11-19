// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridSubsystem;
class UIllustratedGuideSubsystem;
class UPhotoData;
class UTexture2D;
class UWorld;
struct FColor;
struct FGridEntityInfo;
#ifdef SEAOFMEMORY_ImageSubsystem_generated_h
#error "ImageSubsystem.generated.h already included, missing '#pragma once' in ImageSubsystem.h"
#endif
#define SEAOFMEMORY_ImageSubsystem_generated_h

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_10_DELEGATE \
SEAOFMEMORY_API void FOnScreenshotCapturedParam_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotCapturedParam, UTexture2D* texture, UPhotoData* Photoobject, int32 index);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_RPC_WRAPPERS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoData(); \
	friend struct Z_Construct_UClass_UPhotoData_Statics; \
public: \
	DECLARE_CLASS(UPhotoData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UPhotoData)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoData(); \
	friend struct Z_Construct_UClass_UPhotoData_Statics; \
public: \
	DECLARE_CLASS(UPhotoData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UPhotoData)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoData(UPhotoData&&); \
	NO_API UPhotoData(const UPhotoData&); \
public: \
	NO_API virtual ~UPhotoData();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoData(UPhotoData&&); \
	NO_API UPhotoData(const UPhotoData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoData) \
	NO_API virtual ~UPhotoData();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_14_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UPhotoData>();

#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_SPARSE_DATA
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPhotoDataFromIndex); \
	DECLARE_FUNCTION(execAnalyzeIntersectEntitys); \
	DECLARE_FUNCTION(execUpdateVolumeAndTestIntersect); \
	DECLARE_FUNCTION(execTestEntityIntersectFrustum); \
	DECLARE_FUNCTION(execIntersectEntity); \
	DECLARE_FUNCTION(execIntersectGrid); \
	DECLARE_FUNCTION(execCalculateFarPlane); \
	DECLARE_FUNCTION(execIntersectBox); \
	DECLARE_FUNCTION(execTestConvexVolume); \
	DECLARE_FUNCTION(execDrawConvexVolume); \
	DECLARE_FUNCTION(execDrawConvexVolumePlanes); \
	DECLARE_FUNCTION(execCalculatePlaneIntersection); \
	DECLARE_FUNCTION(execUpdateConvexVolumeWithFarPlane); \
	DECLARE_FUNCTION(execUpdateConvexVolume); \
	DECLARE_FUNCTION(execInitializeConvexVolume); \
	DECLARE_FUNCTION(execSetViewProjectionMatrix); \
	DECLARE_FUNCTION(execResetSubsystemData); \
	DECLARE_FUNCTION(execOnScreenshotCaptured); \
	DECLARE_FUNCTION(execDeleteTextureInArray); \
	DECLARE_FUNCTION(execUpdateTextures); \
	DECLARE_FUNCTION(execGetPhoto); \
	DECLARE_FUNCTION(execGetPhotoArray); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTextureArray); \
	DECLARE_FUNCTION(execInitializedSubsystem);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPhotoDataFromIndex); \
	DECLARE_FUNCTION(execAnalyzeIntersectEntitys); \
	DECLARE_FUNCTION(execUpdateVolumeAndTestIntersect); \
	DECLARE_FUNCTION(execTestEntityIntersectFrustum); \
	DECLARE_FUNCTION(execIntersectEntity); \
	DECLARE_FUNCTION(execIntersectGrid); \
	DECLARE_FUNCTION(execCalculateFarPlane); \
	DECLARE_FUNCTION(execIntersectBox); \
	DECLARE_FUNCTION(execTestConvexVolume); \
	DECLARE_FUNCTION(execDrawConvexVolume); \
	DECLARE_FUNCTION(execDrawConvexVolumePlanes); \
	DECLARE_FUNCTION(execCalculatePlaneIntersection); \
	DECLARE_FUNCTION(execUpdateConvexVolumeWithFarPlane); \
	DECLARE_FUNCTION(execUpdateConvexVolume); \
	DECLARE_FUNCTION(execInitializeConvexVolume); \
	DECLARE_FUNCTION(execSetViewProjectionMatrix); \
	DECLARE_FUNCTION(execResetSubsystemData); \
	DECLARE_FUNCTION(execOnScreenshotCaptured); \
	DECLARE_FUNCTION(execDeleteTextureInArray); \
	DECLARE_FUNCTION(execUpdateTextures); \
	DECLARE_FUNCTION(execGetPhoto); \
	DECLARE_FUNCTION(execGetPhotoArray); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetTextureArray); \
	DECLARE_FUNCTION(execInitializedSubsystem);


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_ACCESSORS
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageSubsystem(); \
	friend struct Z_Construct_UClass_UImageSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UImageSubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUImageSubsystem(); \
	friend struct Z_Construct_UClass_UImageSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImageSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeaOfMemory"), NO_API) \
	DECLARE_SERIALIZER(UImageSubsystem)


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSubsystem(UImageSubsystem&&); \
	NO_API UImageSubsystem(const UImageSubsystem&); \
public: \
	NO_API virtual ~UImageSubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImageSubsystem(UImageSubsystem&&); \
	NO_API UImageSubsystem(const UImageSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImageSubsystem) \
	NO_API virtual ~UImageSubsystem();


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_43_PROLOG
#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_RPC_WRAPPERS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_INCLASS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_SPARSE_DATA \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_ACCESSORS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_INCLASS_NO_PURE_DECLS \
	FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SEAOFMEMORY_API UClass* StaticClass<class UImageSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
