// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/CharacterABAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterABAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCharacterABAnimInstance();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCharacterABAnimInstance_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_OverVelocity();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_OverVelocity;
	static UEnum* OverVelocity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_OverVelocity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_OverVelocity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_OverVelocity, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("OverVelocity"));
		}
		return Z_Registration_Info_UEnum_OverVelocity.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<OverVelocity>()
	{
		return OverVelocity_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::Enumerators[] = {
		{ "OverVelocity::Over300", (int64)OverVelocity::Over300 },
		{ "OverVelocity::Under300", (int64)OverVelocity::Under300 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
		{ "Over300.Comment", "/**\n * \n */" },
		{ "Over300.DisplayName", "Over300" },
		{ "Over300.Name", "OverVelocity::Over300" },
		{ "Under300.Comment", "/**\n * \n */" },
		{ "Under300.DisplayName", "Under300" },
		{ "Under300.Name", "OverVelocity::Under300" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"OverVelocity",
		"OverVelocity",
		Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_OverVelocity()
	{
		if (!Z_Registration_Info_UEnum_OverVelocity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_OverVelocity.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_OverVelocity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_OverVelocity.InnerSingleton;
	}
	void UCharacterABAnimInstance::StaticRegisterNativesUCharacterABAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterABAnimInstance);
	UClass* Z_Construct_UClass_UCharacterABAnimInstance_NoRegister()
	{
		return UCharacterABAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterABAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyCharacterMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyCharacterMovement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_isOver300_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOver300_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_isOver300;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isFalling_MetaData[];
#endif
		static void NewProp_isFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isFalling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasAcceleration_MetaData[];
#endif
		static void NewProp_HasAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementSinceLastUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementSinceLastUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isSwimming_MetaData[];
#endif
		static void NewProp_isSwimming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSwimming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterABAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CharacterABAnimInstance.h" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, Speed), METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Velocity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacter = { "MyCharacter", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, MyCharacter), Z_Construct_UClass_ASOMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacterMovement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacterMovement = { "MyCharacterMovement", nullptr, (EPropertyFlags)0x004000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, MyCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacterMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacterMovement_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300 = { "isOver300", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, isOver300), Z_Construct_UEnum_SeaOfMemory_OverVelocity, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300_MetaData)) }; // 4167208729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling_SetBit(void* Obj)
	{
		((UCharacterABAnimInstance*)Obj)->isFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling = { "isFalling", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharacterABAnimInstance), &Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration_SetBit(void* Obj)
	{
		((UCharacterABAnimInstance*)Obj)->HasAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration = { "HasAcceleration", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharacterABAnimInstance), &Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSinceLastUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSinceLastUpdate = { "DisplacementSinceLastUpdate", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, DisplacementSinceLastUpdate), METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSinceLastUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSinceLastUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSpeed = { "DisplacementSpeed", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterABAnimInstance, DisplacementSpeed), METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Animation Variables" },
		{ "ModuleRelativePath", "CharacterABAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming_SetBit(void* Obj)
	{
		((UCharacterABAnimInstance*)Obj)->isSwimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming = { "isSwimming", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCharacterABAnimInstance), &Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterABAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_MyCharacterMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isOver300,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_HasAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSinceLastUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_DisplacementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterABAnimInstance_Statics::NewProp_isSwimming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterABAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterABAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterABAnimInstance_Statics::ClassParams = {
		&UCharacterABAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterABAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterABAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterABAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterABAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UCharacterABAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterABAnimInstance.OuterSingleton, Z_Construct_UClass_UCharacterABAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterABAnimInstance.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UCharacterABAnimInstance>()
	{
		return UCharacterABAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterABAnimInstance);
	UCharacterABAnimInstance::~UCharacterABAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics::EnumInfo[] = {
		{ OverVelocity_StaticEnum, TEXT("OverVelocity"), &Z_Registration_Info_UEnum_OverVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4167208729U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterABAnimInstance, UCharacterABAnimInstance::StaticClass, TEXT("UCharacterABAnimInstance"), &Z_Registration_Info_UClass_UCharacterABAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterABAnimInstance), 1781719313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_4179833487(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_CharacterABAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
