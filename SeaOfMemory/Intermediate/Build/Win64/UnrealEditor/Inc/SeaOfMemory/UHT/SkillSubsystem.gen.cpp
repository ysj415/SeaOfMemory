// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SkillSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USkillSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USkillSubsystem_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_SkillName();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FSkillData();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkillData;
class UScriptStruct* FSkillData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillData, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("SkillData"));
	}
	return Z_Registration_Info_UScriptStruct_SkillData.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FSkillData>()
{
	return FSkillData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkillData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		&NewStructOps,
		"SkillData",
		sizeof(FSkillData),
		alignof(FSkillData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillData()
	{
		if (!Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton, Z_Construct_UScriptStruct_FSkillData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkillData.InnerSingleton;
	}
	DEFINE_FUNCTION(USkillSubsystem::execGetRandomSkillPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_min);
		P_GET_PROPERTY(FIntProperty,Z_Param_max);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRandomSkillPoint(Z_Param_min,Z_Param_max,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillSubsystem::execSkillSlotChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_skillslotnum);
		P_GET_ENUM(SkillName,Z_Param_skillname);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SkillSlotChange(Z_Param_skillslotnum,SkillName(Z_Param_skillname));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillSubsystem::execIsSkillUnlock)
	{
		P_GET_ENUM(SkillName,Z_Param_skillname);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSkillUnlock(SkillName(Z_Param_skillname));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillSubsystem::execUnlockSkill)
	{
		P_GET_ENUM(SkillName,Z_Param_skillname);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnlockSkill(SkillName(Z_Param_skillname));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillSubsystem::execResetSubsystemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSubsystemData();
		P_NATIVE_END;
	}
	void USkillSubsystem::StaticRegisterNativesUSkillSubsystem()
	{
		UClass* Class = USkillSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomSkillPoint", &USkillSubsystem::execGetRandomSkillPoint },
			{ "IsSkillUnlock", &USkillSubsystem::execIsSkillUnlock },
			{ "ResetSubsystemData", &USkillSubsystem::execResetSubsystemData },
			{ "SkillSlotChange", &USkillSubsystem::execSkillSlotChange },
			{ "UnlockSkill", &USkillSubsystem::execUnlockSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics
	{
		struct SkillSubsystem_eventGetRandomSkillPoint_Parms
		{
			int32 min;
			int32 max;
			int32 count;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_min;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_max;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventGetRandomSkillPoint_Parms, min), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventGetRandomSkillPoint_Parms, max), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventGetRandomSkillPoint_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::NewProp_max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::NewProp_count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillSubsystem, nullptr, "GetRandomSkillPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::SkillSubsystem_eventGetRandomSkillPoint_Parms), Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics
	{
		struct SkillSubsystem_eventIsSkillUnlock_Parms
		{
			SkillName skillname;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_skillname_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillname;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_skillname_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_skillname = { "skillname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventIsSkillUnlock_Parms, skillname), Z_Construct_UEnum_SeaOfMemory_SkillName, METADATA_PARAMS(nullptr, 0) }; // 3864623515
	void Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillSubsystem_eventIsSkillUnlock_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkillSubsystem_eventIsSkillUnlock_Parms), &Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_skillname_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_skillname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheckSkillUnlock" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillSubsystem, nullptr, "IsSkillUnlock", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::SkillSubsystem_eventIsSkillUnlock_Parms), Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillSubsystem, nullptr, "ResetSubsystemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics
	{
		struct SkillSubsystem_eventSkillSlotChange_Parms
		{
			int32 skillslotnum;
			SkillName skillname;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillslotnum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_skillname_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillname;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_skillslotnum = { "skillslotnum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventSkillSlotChange_Parms, skillslotnum), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_skillname_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_skillname = { "skillname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventSkillSlotChange_Parms, skillname), Z_Construct_UEnum_SeaOfMemory_SkillName, METADATA_PARAMS(nullptr, 0) }; // 3864623515
	void Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillSubsystem_eventSkillSlotChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkillSubsystem_eventSkillSlotChange_Parms), &Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_skillslotnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_skillname_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_skillname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillSubsystem, nullptr, "SkillSlotChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::SkillSubsystem_eventSkillSlotChange_Parms), Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillSubsystem_SkillSlotChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillSubsystem_SkillSlotChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics
	{
		struct SkillSubsystem_eventUnlockSkill_Parms
		{
			SkillName skillname;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_skillname_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillname;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_skillname_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_skillname = { "skillname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillSubsystem_eventUnlockSkill_Parms, skillname), Z_Construct_UEnum_SeaOfMemory_SkillName, METADATA_PARAMS(nullptr, 0) }; // 3864623515
	void Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkillSubsystem_eventUnlockSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkillSubsystem_eventUnlockSkill_Parms), &Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_skillname_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_skillname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::Function_MetaDataParams[] = {
		{ "Category", "CheckSkillUnlock" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillSubsystem, nullptr, "UnlockSkill", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::SkillSubsystem_eventUnlockSkill_Parms), Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillSubsystem_UnlockSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillSubsystem_UnlockSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillSubsystem);
	UClass* Z_Construct_UClass_USkillSubsystem_NoRegister()
	{
		return USkillSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USkillSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkillDataMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkillDataMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkillDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SkillDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkillPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NullSkillIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NullSkillIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AquaJetIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AquaJetIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCamouflageIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCamouflageIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResidualbaitIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResidualbaitIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepellentIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RepellentIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillSubsystem_GetRandomSkillPoint, "GetRandomSkillPoint" }, // 464951781
		{ &Z_Construct_UFunction_USkillSubsystem_IsSkillUnlock, "IsSkillUnlock" }, // 1117833036
		{ &Z_Construct_UFunction_USkillSubsystem_ResetSubsystemData, "ResetSubsystemData" }, // 3533575781
		{ &Z_Construct_UFunction_USkillSubsystem_SkillSlotChange, "SkillSlotChange" }, // 1051998638
		{ &Z_Construct_UFunction_USkillSubsystem_UnlockSkill, "UnlockSkill" }, // 309363974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkillSubsystem.h" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_ValueProp = { "SkillDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSkillData, METADATA_PARAMS(nullptr, 0) }; // 2218643541
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_Key_KeyProp = { "SkillDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_SeaOfMemory_SkillName, METADATA_PARAMS(nullptr, 0) }; // 3864623515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_MetaData[] = {
		{ "Category", "SkillUnlockMap" },
		{ "Comment", "// \xec\x8a\xa4\xed\x82\xac \xec\xa0\x95\xeb\xb3\xb4 \n" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
		{ "ToolTip", "\xec\x8a\xa4\xed\x82\xac \xec\xa0\x95\xeb\xb3\xb4" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap = { "SkillDataMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, SkillDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_MetaData)) }; // 3864623515 2218643541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "Category", "SkillUnlockMap" },
		{ "Comment", "// \xec\x8a\xa4\xed\x82\xac \xed\x8f\xac\xec\x9d\xb8\xed\x8a\xb8\n" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
		{ "ToolTip", "\xec\x8a\xa4\xed\x82\xac \xed\x8f\xac\xec\x9d\xb8\xed\x8a\xb8" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, SkillPoint), METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_NullSkillIcon_MetaData[] = {
		{ "Category", "Skill Icon" },
		{ "Comment", "// \xec\x8a\xa4\xed\x82\xac \xec\x95\x84\xec\x9d\xb4\xec\xbd\x98\n" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
		{ "ToolTip", "\xec\x8a\xa4\xed\x82\xac \xec\x95\x84\xec\x9d\xb4\xec\xbd\x98" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_NullSkillIcon = { "NullSkillIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, NullSkillIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_NullSkillIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_NullSkillIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_AquaJetIcon_MetaData[] = {
		{ "Category", "Skill Icon" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_AquaJetIcon = { "AquaJetIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, AquaJetIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_AquaJetIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_AquaJetIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ActiveCamouflageIcon_MetaData[] = {
		{ "Category", "Skill Icon" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ActiveCamouflageIcon = { "ActiveCamouflageIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, ActiveCamouflageIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ActiveCamouflageIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ActiveCamouflageIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ResidualbaitIcon_MetaData[] = {
		{ "Category", "Skill Icon" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ResidualbaitIcon = { "ResidualbaitIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, ResidualbaitIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ResidualbaitIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ResidualbaitIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_RepellentIcon_MetaData[] = {
		{ "Category", "Skill Icon" },
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_RepellentIcon = { "RepellentIcon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, RepellentIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_RepellentIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_RepellentIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillSubsystem_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSubsystem_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillSubsystem, Character), Z_Construct_UClass_ASOMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_SkillPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_NullSkillIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_AquaJetIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ActiveCamouflageIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_ResidualbaitIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_RepellentIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSubsystem_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillSubsystem_Statics::ClassParams = {
		&USkillSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkillSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillSubsystem()
	{
		if (!Z_Registration_Info_UClass_USkillSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillSubsystem.OuterSingleton, Z_Construct_UClass_USkillSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USkillSubsystem>()
	{
		return USkillSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillSubsystem);
	USkillSubsystem::~USkillSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FSkillData::StaticStruct, Z_Construct_UScriptStruct_FSkillData_Statics::NewStructOps, TEXT("SkillData"), &Z_Registration_Info_UScriptStruct_SkillData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillData), 2218643541U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillSubsystem, USkillSubsystem::StaticClass, TEXT("USkillSubsystem"), &Z_Registration_Info_UClass_USkillSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillSubsystem), 4292130411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_2313767381(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
