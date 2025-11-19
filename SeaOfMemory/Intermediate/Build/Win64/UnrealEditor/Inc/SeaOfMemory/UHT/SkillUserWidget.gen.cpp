// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/SkillUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillUserWidget() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USkillUserWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_USkillUserWidget_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_SkillName();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(USkillUserWidget::execSetSellectedSkill)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Cost);
		P_GET_PROPERTY(FTextProperty,Z_Param_Explain);
		P_GET_ENUM(SkillName,Z_Param_skillname);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSellectedSkill(Z_Param_Name,Z_Param_Cost,Z_Param_Explain,SkillName(Z_Param_skillname));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execUpdateSkillPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSkillPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execSelectSkill2Click)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSkill2Click();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execSelectSkill1Click)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSkill1Click();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execPurchaseClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PurchaseClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execBreathClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BreathClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execSpeedClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpeedClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execTankClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TankClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execRepellentClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RepellentClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execBaitButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BaitButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execActiveCamouflageClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActiveCamouflageClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillUserWidget::execAquaJetButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AquaJetButtonClick();
		P_NATIVE_END;
	}
	void USkillUserWidget::StaticRegisterNativesUSkillUserWidget()
	{
		UClass* Class = USkillUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActiveCamouflageClick", &USkillUserWidget::execActiveCamouflageClick },
			{ "AquaJetButtonClick", &USkillUserWidget::execAquaJetButtonClick },
			{ "BaitButtonClick", &USkillUserWidget::execBaitButtonClick },
			{ "BreathClick", &USkillUserWidget::execBreathClick },
			{ "PurchaseClick", &USkillUserWidget::execPurchaseClick },
			{ "RepellentClick", &USkillUserWidget::execRepellentClick },
			{ "SelectSkill1Click", &USkillUserWidget::execSelectSkill1Click },
			{ "SelectSkill2Click", &USkillUserWidget::execSelectSkill2Click },
			{ "SetSellectedSkill", &USkillUserWidget::execSetSellectedSkill },
			{ "SpeedClick", &USkillUserWidget::execSpeedClick },
			{ "TankClick", &USkillUserWidget::execTankClick },
			{ "UpdateSkillPoint", &USkillUserWidget::execUpdateSkillPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "ActiveCamouflageClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "AquaJetButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_BaitButtonClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_BaitButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_BaitButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "BaitButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_BaitButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_BaitButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_BaitButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_BaitButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_BreathClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_BreathClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_BreathClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "BreathClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_BreathClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_BreathClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_BreathClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_BreathClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_PurchaseClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_PurchaseClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_PurchaseClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "PurchaseClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_PurchaseClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_PurchaseClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_PurchaseClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_PurchaseClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_RepellentClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_RepellentClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_RepellentClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "RepellentClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_RepellentClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_RepellentClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_RepellentClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_RepellentClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "SelectSkill1Click", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "SelectSkill2Click", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics
	{
		struct SkillUserWidget_eventSetSellectedSkill_Parms
		{
			FText Name;
			int32 Cost;
			FText Explain;
			SkillName skillname;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Explain;
		static const UECodeGen_Private::FBytePropertyParams NewProp_skillname_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_skillname;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillUserWidget_eventSetSellectedSkill_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillUserWidget_eventSetSellectedSkill_Parms, Cost), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_Explain = { "Explain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillUserWidget_eventSetSellectedSkill_Parms, Explain), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_skillname_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_skillname = { "skillname", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkillUserWidget_eventSetSellectedSkill_Parms, skillname), Z_Construct_UEnum_SeaOfMemory_SkillName, METADATA_PARAMS(nullptr, 0) }; // 3864623515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_Cost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_Explain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_skillname_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::NewProp_skillname,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "SetSellectedSkill", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::SkillUserWidget_eventSetSellectedSkill_Parms), Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_SpeedClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_SpeedClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_SpeedClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "SpeedClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_SpeedClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_SpeedClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_SpeedClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_SpeedClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_TankClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_TankClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_TankClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "TankClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_TankClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_TankClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_TankClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_TankClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillUserWidget, nullptr, "UpdateSkillPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillUserWidget);
	UClass* Z_Construct_UClass_USkillUserWidget_NoRegister()
	{
		return USkillUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_USkillUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AquaJetButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AquaJetButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCamouflage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCamouflage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaitButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Repellent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Repellent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purchase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Purchase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tank_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Breath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Breath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillNameTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillNameTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillCostTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillCostTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkillPointCount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillPointCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Detail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Detail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectSkill1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectSkill1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectSkill2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectSkill2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CantChangeSkill_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CantChangeSkill;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillUserWidget_ActiveCamouflageClick, "ActiveCamouflageClick" }, // 2738275407
		{ &Z_Construct_UFunction_USkillUserWidget_AquaJetButtonClick, "AquaJetButtonClick" }, // 547177804
		{ &Z_Construct_UFunction_USkillUserWidget_BaitButtonClick, "BaitButtonClick" }, // 3929213250
		{ &Z_Construct_UFunction_USkillUserWidget_BreathClick, "BreathClick" }, // 4052008877
		{ &Z_Construct_UFunction_USkillUserWidget_PurchaseClick, "PurchaseClick" }, // 2124679419
		{ &Z_Construct_UFunction_USkillUserWidget_RepellentClick, "RepellentClick" }, // 1080831554
		{ &Z_Construct_UFunction_USkillUserWidget_SelectSkill1Click, "SelectSkill1Click" }, // 1876216785
		{ &Z_Construct_UFunction_USkillUserWidget_SelectSkill2Click, "SelectSkill2Click" }, // 3015181343
		{ &Z_Construct_UFunction_USkillUserWidget_SetSellectedSkill, "SetSellectedSkill" }, // 3857269400
		{ &Z_Construct_UFunction_USkillUserWidget_SpeedClick, "SpeedClick" }, // 2264321690
		{ &Z_Construct_UFunction_USkillUserWidget_TankClick, "TankClick" }, // 275630825
		{ &Z_Construct_UFunction_USkillUserWidget_UpdateSkillPoint, "UpdateSkillPoint" }, // 2652619236
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkillUserWidget.h" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_AquaJetButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_AquaJetButton = { "AquaJetButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, AquaJetButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_AquaJetButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_AquaJetButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_ActiveCamouflage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_ActiveCamouflage = { "ActiveCamouflage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, ActiveCamouflage), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_ActiveCamouflage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_ActiveCamouflage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_BaitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_BaitButton = { "BaitButton", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, BaitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_BaitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_BaitButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Repellent_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Repellent = { "Repellent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, Repellent), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Repellent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Repellent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Purchase_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Purchase = { "Purchase", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, Purchase), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Purchase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Purchase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Tank_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Tank = { "Tank", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, Tank), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Tank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Tank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Speed_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, Speed), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Breath_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Breath = { "Breath", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, Breath), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Breath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Breath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillNameTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillNameTextBlock = { "SkillNameTextBlock", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, SkillNameTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillNameTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillNameTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillCostTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillCostTextBlock = { "SkillCostTextBlock", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, SkillCostTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillCostTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillCostTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillPointCount_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillPointCount = { "SkillPointCount", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, SkillPointCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillPointCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillPointCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Detail_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Detail = { "Detail", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, Detail), Z_Construct_UClass_UMultiLineEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Detail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Detail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill1 = { "SelectSkill1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, SelectSkill1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill2 = { "SelectSkill2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, SelectSkill2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillUserWidget_Statics::NewProp_CantChangeSkill_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SkillUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillUserWidget_Statics::NewProp_CantChangeSkill = { "CantChangeSkill", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkillUserWidget, CantChangeSkill), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_CantChangeSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::NewProp_CantChangeSkill_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_AquaJetButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_ActiveCamouflage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_BaitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Repellent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Purchase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Tank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Breath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillNameTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillCostTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SkillPointCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_Detail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_SelectSkill2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillUserWidget_Statics::NewProp_CantChangeSkill,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillUserWidget_Statics::ClassParams = {
		&USkillUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkillUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkillUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillUserWidget()
	{
		if (!Z_Registration_Info_UClass_USkillUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillUserWidget.OuterSingleton, Z_Construct_UClass_USkillUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkillUserWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<USkillUserWidget>()
	{
		return USkillUserWidget::StaticClass();
	}
	USkillUserWidget::USkillUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillUserWidget);
	USkillUserWidget::~USkillUserWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkillUserWidget, USkillUserWidget::StaticClass, TEXT("USkillUserWidget"), &Z_Registration_Info_UClass_USkillUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillUserWidget), 3658022425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillUserWidget_h_714777645(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_SkillUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
