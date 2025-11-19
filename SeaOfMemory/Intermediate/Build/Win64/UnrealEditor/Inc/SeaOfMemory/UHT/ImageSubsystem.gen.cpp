// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/ImageSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "SeaOfMemory/Public/UGridSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UGridSubsystem_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UIllustratedGuideSubsystem_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UImageSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UImageSubsystem_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UPhotoData();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UPhotoData_NoRegister();
	SEAOFMEMORY_API UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FGridEntityInfo();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics
	{
		struct _Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms
		{
			UTexture2D* texture;
			UPhotoData* Photoobject;
			int32 index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Photoobject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::NewProp_Photoobject = { "Photoobject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms, Photoobject), Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::NewProp_Photoobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory, nullptr, "OnScreenshotCapturedParam__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::_Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms), Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SeaOfMemory_OnScreenshotCapturedParam__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnScreenshotCapturedParam_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotCapturedParam, UTexture2D* texture, UPhotoData* Photoobject, int32 index)
{
	struct _Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms
	{
		UTexture2D* texture;
		UPhotoData* Photoobject;
		int32 index;
	};
	_Script_SeaOfMemory_eventOnScreenshotCapturedParam_Parms Parms;
	Parms.texture=texture;
	Parms.Photoobject=Photoobject;
	Parms.index=index;
	OnScreenshotCapturedParam.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UPhotoData::StaticRegisterNativesUPhotoData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhotoData);
	UClass* Z_Construct_UClass_UPhotoData_NoRegister()
	{
		return UPhotoData::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ImageSubsystem.h" },
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoData_Statics::NewProp_texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPhotoData_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhotoData, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhotoData_Statics::NewProp_texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoData_Statics::NewProp_texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoData_Statics::NewProp_texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhotoData_Statics::ClassParams = {
		&UPhotoData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhotoData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoData()
	{
		if (!Z_Registration_Info_UClass_UPhotoData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhotoData.OuterSingleton, Z_Construct_UClass_UPhotoData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhotoData.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UPhotoData>()
	{
		return UPhotoData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoData);
	UPhotoData::~UPhotoData() {}
	DEFINE_FUNCTION(UImageSubsystem::execGetPhotoDataFromIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoData**)Z_Param__Result=P_THIS->GetPhotoDataFromIndex(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execAnalyzeIntersectEntitys)
	{
		P_GET_OBJECT(UIllustratedGuideSubsystem,Z_Param_GuideSubsystem);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnalyzeIntersectEntitys(Z_Param_GuideSubsystem,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execUpdateVolumeAndTestIntersect)
	{
		P_GET_STRUCT(FMatrix,Z_Param_matrix);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_GET_OBJECT(UGridSubsystem,Z_Param_GridSubsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGridEntityInfo>*)Z_Param__Result=P_THIS->UpdateVolumeAndTestIntersect(Z_Param_matrix,Z_Param_Location,Z_Param_ForwardVector,Z_Param_GridSubsystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execTestEntityIntersectFrustum)
	{
		P_GET_OBJECT(UGridSubsystem,Z_Param_GridSubsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGridEntityInfo>*)Z_Param__Result=P_THIS->TestEntityIntersectFrustum(Z_Param_GridSubsystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execIntersectEntity)
	{
		P_GET_OBJECT(UGridSubsystem,Z_Param_GridSubsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntersectEntity(Z_Param_GridSubsystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execIntersectGrid)
	{
		P_GET_OBJECT(UGridSubsystem,Z_Param_GridSubsystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntersectGrid(Z_Param_GridSubsystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execCalculateFarPlane)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_W);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlane*)Z_Param__Result=P_THIS->CalculateFarPlane(Z_Param_Location,Z_Param_ForwardVector,Z_Param_W);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execIntersectBox)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IntersectBox(Z_Param_Out_Origin,Z_Param_Out_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execTestConvexVolume)
	{
		P_GET_STRUCT(FVector,Z_Param_vector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TestConvexVolume(Z_Param_vector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execDrawConvexVolume)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LineLength);
		P_GET_STRUCT(FColor,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawConvexVolume(Z_Param_World,Z_Param_LineLength,Z_Param_color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execDrawConvexVolumePlanes)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawConvexVolumePlanes(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execCalculatePlaneIntersection)
	{
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane1);
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane2);
		P_GET_STRUCT_REF(FPlane,Z_Param_Out_Plane3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculatePlaneIntersection(Z_Param_Out_Plane1,Z_Param_Out_Plane2,Z_Param_Out_Plane3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execUpdateConvexVolumeWithFarPlane)
	{
		P_GET_STRUCT(FMatrix,Z_Param_matrix);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_ForwardVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateConvexVolumeWithFarPlane(Z_Param_matrix,Z_Param_Location,Z_Param_ForwardVector,Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execUpdateConvexVolume)
	{
		P_GET_STRUCT(FMatrix,Z_Param_matrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateConvexVolume(Z_Param_matrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execInitializeConvexVolume)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeConvexVolume();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execSetViewProjectionMatrix)
	{
		P_GET_STRUCT(FMatrix,Z_Param_matrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewProjectionMatrix(Z_Param_matrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execResetSubsystemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSubsystemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execOnScreenshotCaptured)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_GET_OBJECT(UPhotoData,Z_Param_Photoobject);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnScreenshotCaptured(Z_Param_texture,Z_Param_Photoobject,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execDeleteTextureInArray)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeleteTextureInArray(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execUpdateTextures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTextures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execGetPhoto)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhotoData**)Z_Param__Result=P_THIS->GetPhoto(Z_Param_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execGetPhotoArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPhotoData*>*)Z_Param__Result=P_THIS->GetPhotoArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execGetTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_num);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTexture(Z_Param_num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execGetTextureArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture2D*>*)Z_Param__Result=P_THIS->GetTextureArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImageSubsystem::execInitializedSubsystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializedSubsystem();
		P_NATIVE_END;
	}
	void UImageSubsystem::StaticRegisterNativesUImageSubsystem()
	{
		UClass* Class = UImageSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalyzeIntersectEntitys", &UImageSubsystem::execAnalyzeIntersectEntitys },
			{ "CalculateFarPlane", &UImageSubsystem::execCalculateFarPlane },
			{ "CalculatePlaneIntersection", &UImageSubsystem::execCalculatePlaneIntersection },
			{ "DeleteTextureInArray", &UImageSubsystem::execDeleteTextureInArray },
			{ "DrawConvexVolume", &UImageSubsystem::execDrawConvexVolume },
			{ "DrawConvexVolumePlanes", &UImageSubsystem::execDrawConvexVolumePlanes },
			{ "GetPhoto", &UImageSubsystem::execGetPhoto },
			{ "GetPhotoArray", &UImageSubsystem::execGetPhotoArray },
			{ "GetPhotoDataFromIndex", &UImageSubsystem::execGetPhotoDataFromIndex },
			{ "GetTexture", &UImageSubsystem::execGetTexture },
			{ "GetTextureArray", &UImageSubsystem::execGetTextureArray },
			{ "InitializeConvexVolume", &UImageSubsystem::execInitializeConvexVolume },
			{ "InitializedSubsystem", &UImageSubsystem::execInitializedSubsystem },
			{ "IntersectBox", &UImageSubsystem::execIntersectBox },
			{ "IntersectEntity", &UImageSubsystem::execIntersectEntity },
			{ "IntersectGrid", &UImageSubsystem::execIntersectGrid },
			{ "OnScreenshotCaptured", &UImageSubsystem::execOnScreenshotCaptured },
			{ "ResetSubsystemData", &UImageSubsystem::execResetSubsystemData },
			{ "SetViewProjectionMatrix", &UImageSubsystem::execSetViewProjectionMatrix },
			{ "TestConvexVolume", &UImageSubsystem::execTestConvexVolume },
			{ "TestEntityIntersectFrustum", &UImageSubsystem::execTestEntityIntersectFrustum },
			{ "UpdateConvexVolume", &UImageSubsystem::execUpdateConvexVolume },
			{ "UpdateConvexVolumeWithFarPlane", &UImageSubsystem::execUpdateConvexVolumeWithFarPlane },
			{ "UpdateTextures", &UImageSubsystem::execUpdateTextures },
			{ "UpdateVolumeAndTestIntersect", &UImageSubsystem::execUpdateVolumeAndTestIntersect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics
	{
		struct ImageSubsystem_eventAnalyzeIntersectEntitys_Parms
		{
			UIllustratedGuideSubsystem* GuideSubsystem;
			int32 index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GuideSubsystem;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::NewProp_GuideSubsystem = { "GuideSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventAnalyzeIntersectEntitys_Parms, GuideSubsystem), Z_Construct_UClass_UIllustratedGuideSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventAnalyzeIntersectEntitys_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::NewProp_GuideSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "AnalyzeIntersectEntitys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::ImageSubsystem_eventAnalyzeIntersectEntitys_Parms), Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics
	{
		struct ImageSubsystem_eventCalculateFarPlane_Parms
		{
			FVector Location;
			FVector ForwardVector;
			float W;
			FPlane ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_W;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculateFarPlane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculateFarPlane_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculateFarPlane_Parms, W), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculateFarPlane_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "CalculateFarPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::ImageSubsystem_eventCalculateFarPlane_Parms), Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics
	{
		struct ImageSubsystem_eventCalculatePlaneIntersection_Parms
		{
			FPlane Plane1;
			FPlane Plane2;
			FPlane Plane3;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plane3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plane3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane1 = { "Plane1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculatePlaneIntersection_Parms, Plane1), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane2 = { "Plane2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculatePlaneIntersection_Parms, Plane2), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane3 = { "Plane3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculatePlaneIntersection_Parms, Plane3), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane3_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventCalculatePlaneIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_Plane3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "CalculatePlaneIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::ImageSubsystem_eventCalculatePlaneIntersection_Parms), Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics
	{
		struct ImageSubsystem_eventDeleteTextureInArray_Parms
		{
			int32 index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventDeleteTextureInArray_Parms, index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImageSubsystem_eventDeleteTextureInArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ImageSubsystem_eventDeleteTextureInArray_Parms), &Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "DeleteTextureInArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::ImageSubsystem_eventDeleteTextureInArray_Parms), Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics
	{
		struct ImageSubsystem_eventDrawConvexVolume_Parms
		{
			UWorld* World;
			float LineLength;
			FColor color;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventDrawConvexVolume_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::NewProp_LineLength = { "LineLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventDrawConvexVolume_Parms, LineLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventDrawConvexVolume_Parms, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::NewProp_LineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::NewProp_color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "DrawConvexVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::ImageSubsystem_eventDrawConvexVolume_Parms), Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics
	{
		struct ImageSubsystem_eventDrawConvexVolumePlanes_Parms
		{
			UWorld* World;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventDrawConvexVolumePlanes_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "DrawConvexVolumePlanes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::ImageSubsystem_eventDrawConvexVolumePlanes_Parms), Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics
	{
		struct ImageSubsystem_eventGetPhoto_Parms
		{
			int32 num;
			UPhotoData* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetPhoto_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetPhoto_Parms, ReturnValue), Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::NewProp_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "GetPhoto", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::ImageSubsystem_eventGetPhoto_Parms), Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_GetPhoto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_GetPhoto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics
	{
		struct ImageSubsystem_eventGetPhotoArray_Parms
		{
			TArray<UPhotoData*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetPhotoArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "GetPhotoArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::ImageSubsystem_eventGetPhotoArray_Parms), Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_GetPhotoArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_GetPhotoArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics
	{
		struct ImageSubsystem_eventGetPhotoDataFromIndex_Parms
		{
			int32 index;
			UPhotoData* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetPhotoDataFromIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetPhotoDataFromIndex_Parms, ReturnValue), Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "GetPhotoDataFromIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::ImageSubsystem_eventGetPhotoDataFromIndex_Parms), Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics
	{
		struct ImageSubsystem_eventGetTexture_Parms
		{
			int32 num;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_num;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::NewProp_num = { "num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetTexture_Parms, num), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::NewProp_num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "GetTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::ImageSubsystem_eventGetTexture_Parms), Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_GetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_GetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics
	{
		struct ImageSubsystem_eventGetTextureArray_Parms
		{
			TArray<UTexture2D*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventGetTextureArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "GetTextureArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::ImageSubsystem_eventGetTextureArray_Parms), Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_GetTextureArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_GetTextureArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "InitializeConvexVolume", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "InitializedSubsystem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics
	{
		struct ImageSubsystem_eventIntersectBox_Parms
		{
			FVector Origin;
			FVector Extent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventIntersectBox_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Extent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventIntersectBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Extent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Extent_MetaData)) };
	void Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImageSubsystem_eventIntersectBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ImageSubsystem_eventIntersectBox_Parms), &Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "IntersectBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::ImageSubsystem_eventIntersectBox_Parms), Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_IntersectBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_IntersectBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics
	{
		struct ImageSubsystem_eventIntersectEntity_Parms
		{
			UGridSubsystem* GridSubsystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::NewProp_GridSubsystem = { "GridSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventIntersectEntity_Parms, GridSubsystem), Z_Construct_UClass_UGridSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::NewProp_GridSubsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "IntersectEntity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::ImageSubsystem_eventIntersectEntity_Parms), Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_IntersectEntity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_IntersectEntity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics
	{
		struct ImageSubsystem_eventIntersectGrid_Parms
		{
			UGridSubsystem* GridSubsystem;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::NewProp_GridSubsystem = { "GridSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventIntersectGrid_Parms, GridSubsystem), Z_Construct_UClass_UGridSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::NewProp_GridSubsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "IntersectGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::ImageSubsystem_eventIntersectGrid_Parms), Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_IntersectGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_IntersectGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics
	{
		struct ImageSubsystem_eventOnScreenshotCaptured_Parms
		{
			UTexture2D* texture;
			UPhotoData* Photoobject;
			int32 index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Photoobject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventOnScreenshotCaptured_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::NewProp_Photoobject = { "Photoobject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventOnScreenshotCaptured_Parms, Photoobject), Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventOnScreenshotCaptured_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::NewProp_Photoobject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "OnScreenshotCaptured", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::ImageSubsystem_eventOnScreenshotCaptured_Parms), Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "ResetSubsystemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct ImageSubsystem_eventSetViewProjectionMatrix_Parms
		{
			FMatrix matrix;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_matrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::NewProp_matrix = { "matrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventSetViewProjectionMatrix_Parms, matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::NewProp_matrix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "SetViewProjectionMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::ImageSubsystem_eventSetViewProjectionMatrix_Parms), Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics
	{
		struct ImageSubsystem_eventTestConvexVolume_Parms
		{
			FVector vector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_vector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::NewProp_vector = { "vector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventTestConvexVolume_Parms, vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ImageSubsystem_eventTestConvexVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ImageSubsystem_eventTestConvexVolume_Parms), &Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::NewProp_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "TestConvexVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::ImageSubsystem_eventTestConvexVolume_Parms), Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_TestConvexVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_TestConvexVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics
	{
		struct ImageSubsystem_eventTestEntityIntersectFrustum_Parms
		{
			UGridSubsystem* GridSubsystem;
			TArray<FGridEntityInfo> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSubsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::NewProp_GridSubsystem = { "GridSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventTestEntityIntersectFrustum_Parms, GridSubsystem), Z_Construct_UClass_UGridSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGridEntityInfo, METADATA_PARAMS(nullptr, 0) }; // 3861851371
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventTestEntityIntersectFrustum_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3861851371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::NewProp_GridSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "TestEntityIntersectFrustum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::ImageSubsystem_eventTestEntityIntersectFrustum_Parms), Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct ImageSubsystem_eventUpdateConvexVolume_Parms
		{
			FMatrix matrix;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_matrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::NewProp_matrix = { "matrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateConvexVolume_Parms, matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::NewProp_matrix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "UpdateConvexVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::ImageSubsystem_eventUpdateConvexVolume_Parms), Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct ImageSubsystem_eventUpdateConvexVolumeWithFarPlane_Parms
		{
			FMatrix matrix;
			FVector Location;
			FVector ForwardVector;
			float Distance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_matrix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_matrix = { "matrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateConvexVolumeWithFarPlane_Parms, matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateConvexVolumeWithFarPlane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateConvexVolumeWithFarPlane_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateConvexVolumeWithFarPlane_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "UpdateConvexVolumeWithFarPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::ImageSubsystem_eventUpdateConvexVolumeWithFarPlane_Parms), Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_UpdateTextures_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_UpdateTextures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_UpdateTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "UpdateTextures", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_UpdateTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_UpdateTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_UpdateTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms
		{
			FMatrix matrix;
			FVector Location;
			FVector ForwardVector;
			UGridSubsystem* GridSubsystem;
			TArray<FGridEntityInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_matrix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridSubsystem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_matrix = { "matrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms, matrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_ForwardVector = { "ForwardVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_GridSubsystem = { "GridSubsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms, GridSubsystem), Z_Construct_UClass_UGridSubsystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGridEntityInfo, METADATA_PARAMS(nullptr, 0) }; // 3861851371
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3861851371
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_ForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_GridSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageSubsystem, nullptr, "UpdateVolumeAndTestIntersect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::ImageSubsystem_eventUpdateVolumeAndTestIntersect_Parms), Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageSubsystem);
	UClass* Z_Construct_UClass_UImageSubsystem_NoRegister()
	{
		return UImageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UImageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CaptureTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImageSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageSubsystem_AnalyzeIntersectEntitys, "AnalyzeIntersectEntitys" }, // 382729391
		{ &Z_Construct_UFunction_UImageSubsystem_CalculateFarPlane, "CalculateFarPlane" }, // 241662762
		{ &Z_Construct_UFunction_UImageSubsystem_CalculatePlaneIntersection, "CalculatePlaneIntersection" }, // 3635125135
		{ &Z_Construct_UFunction_UImageSubsystem_DeleteTextureInArray, "DeleteTextureInArray" }, // 873880360
		{ &Z_Construct_UFunction_UImageSubsystem_DrawConvexVolume, "DrawConvexVolume" }, // 3282084322
		{ &Z_Construct_UFunction_UImageSubsystem_DrawConvexVolumePlanes, "DrawConvexVolumePlanes" }, // 3329490563
		{ &Z_Construct_UFunction_UImageSubsystem_GetPhoto, "GetPhoto" }, // 415329735
		{ &Z_Construct_UFunction_UImageSubsystem_GetPhotoArray, "GetPhotoArray" }, // 2615094752
		{ &Z_Construct_UFunction_UImageSubsystem_GetPhotoDataFromIndex, "GetPhotoDataFromIndex" }, // 4014883827
		{ &Z_Construct_UFunction_UImageSubsystem_GetTexture, "GetTexture" }, // 923096929
		{ &Z_Construct_UFunction_UImageSubsystem_GetTextureArray, "GetTextureArray" }, // 1910578078
		{ &Z_Construct_UFunction_UImageSubsystem_InitializeConvexVolume, "InitializeConvexVolume" }, // 3896128540
		{ &Z_Construct_UFunction_UImageSubsystem_InitializedSubsystem, "InitializedSubsystem" }, // 182310111
		{ &Z_Construct_UFunction_UImageSubsystem_IntersectBox, "IntersectBox" }, // 3325527174
		{ &Z_Construct_UFunction_UImageSubsystem_IntersectEntity, "IntersectEntity" }, // 525879982
		{ &Z_Construct_UFunction_UImageSubsystem_IntersectGrid, "IntersectGrid" }, // 137645266
		{ &Z_Construct_UFunction_UImageSubsystem_OnScreenshotCaptured, "OnScreenshotCaptured" }, // 4018128116
		{ &Z_Construct_UFunction_UImageSubsystem_ResetSubsystemData, "ResetSubsystemData" }, // 774032458
		{ &Z_Construct_UFunction_UImageSubsystem_SetViewProjectionMatrix, "SetViewProjectionMatrix" }, // 1040275022
		{ &Z_Construct_UFunction_UImageSubsystem_TestConvexVolume, "TestConvexVolume" }, // 3464627249
		{ &Z_Construct_UFunction_UImageSubsystem_TestEntityIntersectFrustum, "TestEntityIntersectFrustum" }, // 2188704260
		{ &Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolume, "UpdateConvexVolume" }, // 2560075398
		{ &Z_Construct_UFunction_UImageSubsystem_UpdateConvexVolumeWithFarPlane, "UpdateConvexVolumeWithFarPlane" }, // 265359246
		{ &Z_Construct_UFunction_UImageSubsystem_UpdateTextures, "UpdateTextures" }, // 2847751459
		{ &Z_Construct_UFunction_UImageSubsystem_UpdateVolumeAndTestIntersect, "UpdateVolumeAndTestIntersect" }, // 2595047968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImageSubsystem.h" },
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures_Inner = { "CaptureTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhotoData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/ImageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures = { "CaptureTextures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImageSubsystem, CaptureTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageSubsystem_Statics::NewProp_CaptureTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageSubsystem_Statics::ClassParams = {
		&UImageSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImageSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImageSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImageSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImageSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImageSubsystem()
	{
		if (!Z_Registration_Info_UClass_UImageSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageSubsystem.OuterSingleton, Z_Construct_UClass_UImageSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImageSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UImageSubsystem>()
	{
		return UImageSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImageSubsystem);
	UImageSubsystem::~UImageSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhotoData, UPhotoData::StaticClass, TEXT("UPhotoData"), &Z_Registration_Info_UClass_UPhotoData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhotoData), 3884030014U) },
		{ Z_Construct_UClass_UImageSubsystem, UImageSubsystem::StaticClass, TEXT("UImageSubsystem"), &Z_Registration_Info_UClass_UImageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageSubsystem), 1465051816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_4079558406(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_ImageSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
