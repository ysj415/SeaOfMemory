// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/CharacterWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCharacterWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCharacterWidget_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_SkillName();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterWidget::execSetOxygenTankPointerOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOxygenTankPointerOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execOxygenTankPointerOnOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OxygenTankPointerOnOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execOxygenTankPointerTurnOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OxygenTankPointerTurnOff_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execOxygenTankPointerTurnOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OxygenTankPointerTurnOn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execUpdateOxygen)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Oxygen);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OxygenTank);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOxygen(Z_Param_Oxygen,Z_Param_OxygenTank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execVisibleWarningMasage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VisibleWarningMasage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execGetSkillImage)
	{
		P_GET_ENUM(SkillName,Z_Param_skillname);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetSkillImage(SkillName(Z_Param_skillname));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execUseSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_skillslot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UseSkill(Z_Param_skillslot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterWidget::execChangeSkillSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSkillSlot();
		P_NATIVE_END;
	}
	static FName NAME_UCharacterWidget_OxygenTankPointerTurnOff = FName(TEXT("OxygenTankPointerTurnOff"));
	void UCharacterWidget::OxygenTankPointerTurnOff()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterWidget_OxygenTankPointerTurnOff),NULL);
	}
	static FName NAME_UCharacterWidget_OxygenTankPointerTurnOn = FName(TEXT("OxygenTankPointerTurnOn"));
	void UCharacterWidget::OxygenTankPointerTurnOn()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCharacterWidget_OxygenTankPointerTurnOn),NULL);
	}
	void UCharacterWidget::StaticRegisterNativesUCharacterWidget()
	{
		UClass* Class = UCharacterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeSkillSlot", &UCharacterWidget::execChangeSkillSlot },
			{ "GetSkillImage", &UCharacterWidget::execGetSkillImage },
			{ "OxygenTankPointerOnOff", &UCharacterWidget::execOxygenTankPointerOnOff },
			{ "OxygenTankPointerTurnOff", &UCharacterWidget::execOxygenTankPointerTurnOff },
			{ "OxygenTankPointerTurnOn", &UCharacterWidget::execOxygenTankPointerTurnOn },
			{ "SetOxygenTankPointerOff", &UCharacterWidget::execSetOxygenTankPointerOff },
			{ "UpdateOxygen", &UCharacterWidget::execUpdateOxygen },
			{ "UseSkill", &UCharacterWidget::execUseSkill },
			{ "VisibleWarningMasage", &UCharacterWidget::execVisibleWarningMasage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "ChangeSkillSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics
	{
		struct CharacterWidget_eventGetSkillImage_Parms
		{
			SkillName skillname;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_skillname_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillname;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::NewProp_skillname_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::NewProp_skillname = { "skillname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterWidget_eventGetSkillImage_Parms, skillname), Z_Construct_UEnum_SeaOfMemory_SkillName, METADATA_PARAMS(nullptr, 0) }; // 3864623515
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterWidget_eventGetSkillImage_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::NewProp_skillname_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::NewProp_skillname,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "GetSkillImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::CharacterWidget_eventGetSkillImage_Parms), Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_GetSkillImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_GetSkillImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "OxygenTankPointerOnOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "OxygenTankPointerTurnOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "OxygenTankPointerTurnOn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "SetOxygenTankPointerOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics
	{
		struct CharacterWidget_eventUpdateOxygen_Parms
		{
			float Oxygen;
			float OxygenTank;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Oxygen;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OxygenTank;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::NewProp_Oxygen = { "Oxygen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterWidget_eventUpdateOxygen_Parms, Oxygen), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::NewProp_OxygenTank = { "OxygenTank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterWidget_eventUpdateOxygen_Parms, OxygenTank), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::NewProp_Oxygen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::NewProp_OxygenTank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "UpdateOxygen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::CharacterWidget_eventUpdateOxygen_Parms), Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_UpdateOxygen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_UpdateOxygen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics
	{
		struct CharacterWidget_eventUseSkill_Parms
		{
			int32 skillslot;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillslot;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::NewProp_skillslot = { "skillslot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterWidget_eventUseSkill_Parms, skillslot), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterWidget_eventUseSkill_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CharacterWidget_eventUseSkill_Parms), &Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::NewProp_skillslot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "UseSkill", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::CharacterWidget_eventUseSkill_Parms), Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_UseSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_UseSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterWidget, nullptr, "VisibleWarningMasage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterWidget);
	UClass* Z_Construct_UClass_UCharacterWidget_NoRegister()
	{
		return UCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NullSkill_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NullSkill;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AquaJet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AquaJet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCamouflage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCamouflage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Residualbait_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Residualbait;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Repellent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Repellent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill1_Blur_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill1_Blur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill2_Blur_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill2_Blur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill1_CoolTime_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill1_CoolTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skill2_CoolTime_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skill2_CoolTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningMasage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarningMasage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HPBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowHPEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LowHPEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OxygenTankPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OxygenTankPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Oxygen_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Oxygen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OxygenBG_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OxygenBG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowOxygenEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LowOxygenEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blurforbreath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blurforbreath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterWidget_ChangeSkillSlot, "ChangeSkillSlot" }, // 2524320603
		{ &Z_Construct_UFunction_UCharacterWidget_GetSkillImage, "GetSkillImage" }, // 1706311272
		{ &Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerOnOff, "OxygenTankPointerOnOff" }, // 1078535487
		{ &Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOff, "OxygenTankPointerTurnOff" }, // 3567092280
		{ &Z_Construct_UFunction_UCharacterWidget_OxygenTankPointerTurnOn, "OxygenTankPointerTurnOn" }, // 2768042115
		{ &Z_Construct_UFunction_UCharacterWidget_SetOxygenTankPointerOff, "SetOxygenTankPointerOff" }, // 834191241
		{ &Z_Construct_UFunction_UCharacterWidget_UpdateOxygen, "UpdateOxygen" }, // 1146369203
		{ &Z_Construct_UFunction_UCharacterWidget_UseSkill, "UseSkill" }, // 3356811709
		{ &Z_Construct_UFunction_UCharacterWidget_VisibleWarningMasage, "VisibleWarningMasage" }, // 4173624071
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CharacterWidget.h" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_NullSkill_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_NullSkill = { "NullSkill", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, NullSkill), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_NullSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_NullSkill_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_AquaJet_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_AquaJet = { "AquaJet", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, AquaJet), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_AquaJet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_AquaJet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_ActiveCamouflage_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_ActiveCamouflage = { "ActiveCamouflage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, ActiveCamouflage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_ActiveCamouflage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_ActiveCamouflage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Residualbait_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Residualbait = { "Residualbait", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Residualbait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Residualbait_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Residualbait_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Repellent_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Repellent = { "Repellent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Repellent), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Repellent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Repellent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "Comment", "// -------------------------------\xec\x8a\xa4\xed\x82\xac \xec\x95\x84\xec\x9d\xb4\xec\xbd\x98 \xec\x9c\x84\xec\xa0\xaf -------------------------------\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
		{ "ToolTip", "-------------------------------\xec\x8a\xa4\xed\x82\xac \xec\x95\x84\xec\x9d\xb4\xec\xbd\x98 \xec\x9c\x84\xec\xa0\xaf -------------------------------" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1 = { "Skill1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Skill1), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2 = { "Skill2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Skill2), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_Blur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_Blur = { "Skill1_Blur", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Skill1_Blur), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_Blur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_Blur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_Blur_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_Blur = { "Skill2_Blur", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Skill2_Blur), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_Blur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_Blur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_CoolTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_CoolTime = { "Skill1_CoolTime", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Skill1_CoolTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_CoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_CoolTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_CoolTime_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_CoolTime = { "Skill2_CoolTime", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Skill2_CoolTime), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_CoolTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_CoolTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_WarningMasage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_WarningMasage = { "WarningMasage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, WarningMasage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_WarningMasage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_WarningMasage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_HPBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_HPBar = { "HPBar", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, HPBar), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_HPBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowHPEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowHPEffect = { "LowHPEffect", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, LowHPEffect), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowHPEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowHPEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenTankPointer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenTankPointer = { "OxygenTankPointer", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, OxygenTankPointer), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenTankPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenTankPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Oxygen_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Oxygen = { "Oxygen", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Oxygen), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Oxygen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Oxygen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenBG_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenBG = { "OxygenBG", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, OxygenBG), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenBG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenBG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowOxygenEffect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowOxygenEffect = { "LowOxygenEffect", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, LowOxygenEffect), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowOxygenEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowOxygenEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_playback_MetaData[] = {
		{ "Category", "CharacterWidget" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_playback = { "playback", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, playback), METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_playback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_playback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Blurforbreath_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Blurforbreath = { "Blurforbreath", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterWidget, Blurforbreath), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Blurforbreath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Blurforbreath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_NullSkill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_AquaJet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_ActiveCamouflage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Residualbait,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Repellent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_Blur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_Blur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill1_CoolTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Skill2_CoolTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_WarningMasage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_HPBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowHPEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenTankPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Oxygen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_OxygenBG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_LowOxygenEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_playback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterWidget_Statics::NewProp_Blurforbreath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterWidget_Statics::ClassParams = {
		&UCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterWidget()
	{
		if (!Z_Registration_Info_UClass_UCharacterWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterWidget.OuterSingleton, Z_Construct_UClass_UCharacterWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UCharacterWidget>()
	{
		return UCharacterWidget::StaticClass();
	}
	UCharacterWidget::UCharacterWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterWidget);
	UCharacterWidget::~UCharacterWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterWidget, UCharacterWidget::StaticClass, TEXT("UCharacterWidget"), &Z_Registration_Info_UClass_UCharacterWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterWidget), 3190676023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_1926948655(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_CharacterWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
