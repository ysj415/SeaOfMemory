// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeaOfMemory_init() {}
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SeaOfMemory;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SeaOfMemory()
	{
		if (!Z_Registration_Info_UPackage__Script_SeaOfMemory.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SeaOfMemory_NewCollectionRegistered__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeaOfMemory_OnButtonClickedWithParam__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeaOfMemory_OnListButtonClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SeaOfMemory",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9CC8E6DA,
				0x2B28E1F2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SeaOfMemory.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SeaOfMemory.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SeaOfMemory(Z_Construct_UPackage__Script_SeaOfMemory, TEXT("/Script/SeaOfMemory"), Z_Registration_Info_UPackage__Script_SeaOfMemory, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9CC8E6DA, 0x2B28E1F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
