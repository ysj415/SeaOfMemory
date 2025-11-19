// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/SOMBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOMBaseCharacter() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCameraWidget_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UCharacterWidget_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UNewCollectionWidget_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UNewMessageWidget_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UWebViewWidget_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_SOMCharacterMovementMode;
	static UEnum* SOMCharacterMovementMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_SOMCharacterMovementMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_SOMCharacterMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("SOMCharacterMovementMode"));
		}
		return Z_Registration_Info_UEnum_SOMCharacterMovementMode.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<SOMCharacterMovementMode>()
	{
		return SOMCharacterMovementMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::Enumerators[] = {
		{ "SOMCharacterMovementMode::WALKMODE", (int64)SOMCharacterMovementMode::WALKMODE },
		{ "SOMCharacterMovementMode::SWIMMODE", (int64)SOMCharacterMovementMode::SWIMMODE },
		{ "SOMCharacterMovementMode::DIVEMODE", (int64)SOMCharacterMovementMode::DIVEMODE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DIVEMODE.DisplayName", "DIVEMODE" },
		{ "DIVEMODE.Name", "SOMCharacterMovementMode::DIVEMODE" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "SWIMMODE.DisplayName", "SWIMMODE" },
		{ "SWIMMODE.Name", "SOMCharacterMovementMode::SWIMMODE" },
		{ "WALKMODE.DisplayName", "WALKMODE" },
		{ "WALKMODE.Name", "SOMCharacterMovementMode::WALKMODE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"SOMCharacterMovementMode",
		"SOMCharacterMovementMode",
		Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode()
	{
		if (!Z_Registration_Info_UEnum_SOMCharacterMovementMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SOMCharacterMovementMode.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_SOMCharacterMovementMode.InnerSingleton;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetIsInfiniteBreath)
	{
		P_GET_UBOOL(Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInfiniteBreath(Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execOutNewCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OutNewCollection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execToggleNiagaraEffect)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleNiagaraEffect(Z_Param_NiagaraComponent,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execUpCurrentFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpCurrentFocalLength(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execUnUseRequlator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnUseRequlator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execUnUseMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnUseMask_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execUseRequlator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseRequlator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execUseMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseMask_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execBuyFlippers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyFlippers_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execBuyTank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuyTank_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetVisibilityHidden)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityHidden_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetVisibilityVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityVisible_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execNewCollectionRegisteredEvent)
	{
		P_GET_ENUM(ESpecies,Z_Param_BestSpecies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewCollectionRegisteredEvent(ESpecies(Z_Param_BestSpecies));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execNoticeNewMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoticeNewMessage(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execStopNewMessageNotice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopNewMessageNotice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execPlayDivingSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDivingSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetInputModeToGameOnly)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputModeToGameOnly(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetInputModeToUIOnly)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputModeToUIOnly(Z_Param_PlayerController,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execUseSkill)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_skillslot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseSkill(Z_Param_skillslot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetSkillSlotIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkillSlotIcon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execGetCameraProjectionMatrix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=P_THIS->GetCameraProjectionMatrix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execGetCameraViewMatrix)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_CameraComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=P_THIS->GetCameraViewMatrix(Z_Param_CameraComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execGetCameraViewProjectionMatrix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMatrix*)Z_Param__Result=P_THIS->GetCameraViewProjectionMatrix();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSwitchCamera)
	{
		P_GET_UBOOL(Z_Param_withBlend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchCamera(Z_Param_withBlend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetDiveMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDiveMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetWalkingMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalkingMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASOMBaseCharacter::execSetSwimMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSwimMode();
		P_NATIVE_END;
	}
	static FName NAME_ASOMBaseCharacter_BuyFlippers = FName(TEXT("BuyFlippers"));
	void ASOMBaseCharacter::BuyFlippers()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_BuyFlippers),NULL);
	}
	static FName NAME_ASOMBaseCharacter_BuyTank = FName(TEXT("BuyTank"));
	void ASOMBaseCharacter::BuyTank()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_BuyTank),NULL);
	}
	static FName NAME_ASOMBaseCharacter_SetVisibilityHidden = FName(TEXT("SetVisibilityHidden"));
	void ASOMBaseCharacter::SetVisibilityHidden()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_SetVisibilityHidden),NULL);
	}
	static FName NAME_ASOMBaseCharacter_SetVisibilityVisible = FName(TEXT("SetVisibilityVisible"));
	void ASOMBaseCharacter::SetVisibilityVisible()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_SetVisibilityVisible),NULL);
	}
	static FName NAME_ASOMBaseCharacter_UnUseMask = FName(TEXT("UnUseMask"));
	void ASOMBaseCharacter::UnUseMask()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_UnUseMask),NULL);
	}
	static FName NAME_ASOMBaseCharacter_UnUseRequlator = FName(TEXT("UnUseRequlator"));
	void ASOMBaseCharacter::UnUseRequlator()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_UnUseRequlator),NULL);
	}
	static FName NAME_ASOMBaseCharacter_UseMask = FName(TEXT("UseMask"));
	void ASOMBaseCharacter::UseMask()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_UseMask),NULL);
	}
	static FName NAME_ASOMBaseCharacter_UseRequlator = FName(TEXT("UseRequlator"));
	void ASOMBaseCharacter::UseRequlator()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASOMBaseCharacter_UseRequlator),NULL);
	}
	void ASOMBaseCharacter::StaticRegisterNativesASOMBaseCharacter()
	{
		UClass* Class = ASOMBaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuyFlippers", &ASOMBaseCharacter::execBuyFlippers },
			{ "BuyTank", &ASOMBaseCharacter::execBuyTank },
			{ "GetCameraProjectionMatrix", &ASOMBaseCharacter::execGetCameraProjectionMatrix },
			{ "GetCameraViewMatrix", &ASOMBaseCharacter::execGetCameraViewMatrix },
			{ "GetCameraViewProjectionMatrix", &ASOMBaseCharacter::execGetCameraViewProjectionMatrix },
			{ "NewCollectionRegisteredEvent", &ASOMBaseCharacter::execNewCollectionRegisteredEvent },
			{ "NoticeNewMessage", &ASOMBaseCharacter::execNoticeNewMessage },
			{ "OutNewCollection", &ASOMBaseCharacter::execOutNewCollection },
			{ "PlayDivingSound", &ASOMBaseCharacter::execPlayDivingSound },
			{ "SetDiveMode", &ASOMBaseCharacter::execSetDiveMode },
			{ "SetInputModeToGameOnly", &ASOMBaseCharacter::execSetInputModeToGameOnly },
			{ "SetInputModeToUIOnly", &ASOMBaseCharacter::execSetInputModeToUIOnly },
			{ "SetIsInfiniteBreath", &ASOMBaseCharacter::execSetIsInfiniteBreath },
			{ "SetSkillSlotIcon", &ASOMBaseCharacter::execSetSkillSlotIcon },
			{ "SetSwimMode", &ASOMBaseCharacter::execSetSwimMode },
			{ "SetVisibilityHidden", &ASOMBaseCharacter::execSetVisibilityHidden },
			{ "SetVisibilityVisible", &ASOMBaseCharacter::execSetVisibilityVisible },
			{ "SetWalkingMode", &ASOMBaseCharacter::execSetWalkingMode },
			{ "StopNewMessageNotice", &ASOMBaseCharacter::execStopNewMessageNotice },
			{ "SwitchCamera", &ASOMBaseCharacter::execSwitchCamera },
			{ "TakeDamage", &ASOMBaseCharacter::execTakeDamage },
			{ "ToggleNiagaraEffect", &ASOMBaseCharacter::execToggleNiagaraEffect },
			{ "UnUseMask", &ASOMBaseCharacter::execUnUseMask },
			{ "UnUseRequlator", &ASOMBaseCharacter::execUnUseRequlator },
			{ "UpCurrentFocalLength", &ASOMBaseCharacter::execUpCurrentFocalLength },
			{ "UseMask", &ASOMBaseCharacter::execUseMask },
			{ "UseRequlator", &ASOMBaseCharacter::execUseRequlator },
			{ "UseSkill", &ASOMBaseCharacter::execUseSkill },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "BuyFlippers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_BuyTank_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_BuyTank_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_BuyTank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "BuyTank", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_BuyTank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_BuyTank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_BuyTank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_BuyTank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct SOMBaseCharacter_eventGetCameraProjectionMatrix_Parms
		{
			FMatrix ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventGetCameraProjectionMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "GetCameraProjectionMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::SOMBaseCharacter_eventGetCameraProjectionMatrix_Parms), Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct SOMBaseCharacter_eventGetCameraViewMatrix_Parms
		{
			UCameraComponent* CameraComponent;
			FMatrix ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventGetCameraViewMatrix_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_CameraComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventGetCameraViewMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "GetCameraViewMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::SOMBaseCharacter_eventGetCameraViewMatrix_Parms), Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct SOMBaseCharacter_eventGetCameraViewProjectionMatrix_Parms
		{
			FMatrix ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventGetCameraViewProjectionMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "GetCameraViewProjectionMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::SOMBaseCharacter_eventGetCameraViewProjectionMatrix_Parms), Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics
	{
		struct SOMBaseCharacter_eventNewCollectionRegisteredEvent_Parms
		{
			ESpecies BestSpecies;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BestSpecies_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BestSpecies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::NewProp_BestSpecies_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::NewProp_BestSpecies = { "BestSpecies", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventNewCollectionRegisteredEvent_Parms, BestSpecies), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::NewProp_BestSpecies_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::NewProp_BestSpecies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// CameraWidget->NewCollctionRegistered \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9 \xed\x95\xa8\xec\x88\x98\n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "CameraWidget->NewCollctionRegistered \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9 \xed\x95\xa8\xec\x88\x98" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "NewCollectionRegisteredEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::SOMBaseCharacter_eventNewCollectionRegisteredEvent_Parms), Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics
	{
		struct SOMBaseCharacter_eventNoticeNewMessage_Parms
		{
			FText name;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventNoticeNewMessage_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "NoticeNewMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::SOMBaseCharacter_eventNoticeNewMessage_Parms), Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// NewCollectionWidget \xeb\xb9\xa0\xec\xa0\xb8\xeb\x82\x98\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "NewCollectionWidget \xeb\xb9\xa0\xec\xa0\xb8\xeb\x82\x98\xec\x98\xa4\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "OutNewCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "PlayDivingSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetDiveMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics
	{
		struct SOMBaseCharacter_eventSetInputModeToGameOnly_Parms
		{
			APlayerController* PlayerController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventSetInputModeToGameOnly_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetInputModeToGameOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::SOMBaseCharacter_eventSetInputModeToGameOnly_Parms), Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics
	{
		struct SOMBaseCharacter_eventSetInputModeToUIOnly_Parms
		{
			APlayerController* PlayerController;
			UUserWidget* Widget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventSetInputModeToUIOnly_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventSetInputModeToUIOnly_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xea\xb2\x8c\xec\x9e\x84\xeb\xaa\xa8\xeb\x93\x9c \xeb\xb3\x80\xea\xb2\xbd\n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84\xeb\xaa\xa8\xeb\x93\x9c \xeb\xb3\x80\xea\xb2\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetInputModeToUIOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::SOMBaseCharacter_eventSetInputModeToUIOnly_Parms), Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics
	{
		struct SOMBaseCharacter_eventSetIsInfiniteBreath_Parms
		{
			bool b;
		};
		static void NewProp_b_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_b;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::NewProp_b_SetBit(void* Obj)
	{
		((SOMBaseCharacter_eventSetIsInfiniteBreath_Parms*)Obj)->b = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SOMBaseCharacter_eventSetIsInfiniteBreath_Parms), &Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::NewProp_b_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::NewProp_b,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetIsInfiniteBreath", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::SOMBaseCharacter_eventSetIsInfiniteBreath_Parms), Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics
	{
		struct SOMBaseCharacter_eventSetSkillSlotIcon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SOMBaseCharacter_eventSetSkillSlotIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SOMBaseCharacter_eventSetSkillSlotIcon_Parms), &Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetSkillSlotIcon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::SOMBaseCharacter_eventSetSkillSlotIcon_Parms), Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetSwimMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "DmgSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetVisibilityHidden", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "DmgSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetVisibilityVisible", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SetWalkingMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "StopNewMessageNotice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics
	{
		struct SOMBaseCharacter_eventSwitchCamera_Parms
		{
			bool withBlend;
		};
		static void NewProp_withBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_withBlend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::NewProp_withBlend_SetBit(void* Obj)
	{
		((SOMBaseCharacter_eventSwitchCamera_Parms*)Obj)->withBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::NewProp_withBlend = { "withBlend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SOMBaseCharacter_eventSwitchCamera_Parms), &Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::NewProp_withBlend_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::NewProp_withBlend,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//class UCameraComponent* GetCameraComponent() { return Camera; }\n//class UCineCameraComponent* GetCineCameraComponent() { return CineCamera; }\n" },
		{ "CPP_Default_withBlend", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "class UCameraComponent* GetCameraComponent() { return Camera; }\nclass UCineCameraComponent* GetCineCameraComponent() { return CineCamera; }" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "SwitchCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::SOMBaseCharacter_eventSwitchCamera_Parms), Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics
	{
		struct SOMBaseCharacter_eventTakeDamage_Parms
		{
			float damage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventTakeDamage_Parms, damage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::NewProp_damage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::SOMBaseCharacter_eventTakeDamage_Parms), Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics
	{
		struct SOMBaseCharacter_eventToggleNiagaraEffect_Parms
		{
			UNiagaraComponent* NiagaraComponent;
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventToggleNiagaraEffect_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_NiagaraComponent_MetaData)) };
	void Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SOMBaseCharacter_eventToggleNiagaraEffect_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SOMBaseCharacter_eventToggleNiagaraEffect_Parms), &Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_NiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "ToggleNiagaraEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::SOMBaseCharacter_eventToggleNiagaraEffect_Parms), Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "UnUseMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "UnUseRequlator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics
	{
		struct SOMBaseCharacter_eventUpCurrentFocalLength_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventUpCurrentFocalLength_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "UpCurrentFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::SOMBaseCharacter_eventUpCurrentFocalLength_Parms), Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_UseMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_UseMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_UseMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "UseMask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_UseMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UseMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_UseMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_UseMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator_Statics::Function_MetaDataParams[] = {
		{ "Category", "SkillSystem" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "UseRequlator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics
	{
		struct SOMBaseCharacter_eventUseSkill_Parms
		{
			int32 skillslot;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_skillslot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::NewProp_skillslot = { "skillslot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SOMBaseCharacter_eventUseSkill_Parms, skillslot), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::NewProp_skillslot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASOMBaseCharacter, nullptr, "UseSkill", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::SOMBaseCharacter_eventUseSkill_Parms), Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASOMBaseCharacter_UseSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASOMBaseCharacter_UseSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASOMBaseCharacter);
	UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister()
	{
		return ASOMBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASOMBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isCineMode_MetaData[];
#endif
		static void NewProp_isCineMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isCineMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwimModeState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwimModeState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwimModeState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsVerticalMovement_MetaData[];
#endif
		static void NewProp_IsVerticalMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVerticalMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSwimToUp_MetaData[];
#endif
		static void NewProp_IsSwimToUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSwimToUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHorizontalMovement_MetaData[];
#endif
		static void NewProp_IsHorizontalMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHorizontalMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuoyancyStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BuoyancyStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsAquaJetActive_MetaData[];
#endif
		static void NewProp_IsAquaJetActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAquaJetActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpherCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpherCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoatAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoatAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsReadyToDiving_MetaData[];
#endif
		static void NewProp_IsReadyToDiving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReadyToDiving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsReadyToGetOnBoat_MetaData[];
#endif
		static void NewProp_IsReadyToGetOnBoat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReadyToGetOnBoat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_hp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_hp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Oxygen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Oxygen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_Oxygentank_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max_Oxygentank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Oxygentank_Decrease_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Oxygentank_Decrease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Oxygen_Decrease_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Oxygen_Decrease;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Oxygen_Recovery_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Oxygen_Recovery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Basic_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Basic_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Aquajet_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Aquajet_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FastSwim_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FastSwim_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMessageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMessageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isTankActive_MetaData[];
#endif
		static void NewProp_isTankActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isTankActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AquajetSkillEffectComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AquajetSkillEffectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamouflageSkillEffectComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CamouflageSkillEffectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCollectionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewCollectionWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCollectionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCollectionWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WebViewWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WebViewWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMessageWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewMessageWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaitClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BaitClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepellentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RepellentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFirstPlay_MetaData[];
#endif
		static void NewProp_IsFirstPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirstPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDrawDebugLine_MetaData[];
#endif
		static void NewProp_IsDrawDebugLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDrawDebugLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASOMBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASOMBaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASOMBaseCharacter_BuyFlippers, "BuyFlippers" }, // 657774096
		{ &Z_Construct_UFunction_ASOMBaseCharacter_BuyTank, "BuyTank" }, // 651704519
		{ &Z_Construct_UFunction_ASOMBaseCharacter_GetCameraProjectionMatrix, "GetCameraProjectionMatrix" }, // 703406528
		{ &Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewMatrix, "GetCameraViewMatrix" }, // 1088276522
		{ &Z_Construct_UFunction_ASOMBaseCharacter_GetCameraViewProjectionMatrix, "GetCameraViewProjectionMatrix" }, // 604973858
		{ &Z_Construct_UFunction_ASOMBaseCharacter_NewCollectionRegisteredEvent, "NewCollectionRegisteredEvent" }, // 11062527
		{ &Z_Construct_UFunction_ASOMBaseCharacter_NoticeNewMessage, "NoticeNewMessage" }, // 736836901
		{ &Z_Construct_UFunction_ASOMBaseCharacter_OutNewCollection, "OutNewCollection" }, // 1146476626
		{ &Z_Construct_UFunction_ASOMBaseCharacter_PlayDivingSound, "PlayDivingSound" }, // 2693838740
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetDiveMode, "SetDiveMode" }, // 2300496855
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToGameOnly, "SetInputModeToGameOnly" }, // 3741329250
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetInputModeToUIOnly, "SetInputModeToUIOnly" }, // 1352868928
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetIsInfiniteBreath, "SetIsInfiniteBreath" }, // 2588876513
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetSkillSlotIcon, "SetSkillSlotIcon" }, // 29226196
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetSwimMode, "SetSwimMode" }, // 1930947901
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityHidden, "SetVisibilityHidden" }, // 2169965150
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetVisibilityVisible, "SetVisibilityVisible" }, // 1034715061
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SetWalkingMode, "SetWalkingMode" }, // 2430132250
		{ &Z_Construct_UFunction_ASOMBaseCharacter_StopNewMessageNotice, "StopNewMessageNotice" }, // 1664267386
		{ &Z_Construct_UFunction_ASOMBaseCharacter_SwitchCamera, "SwitchCamera" }, // 3995943930
		{ &Z_Construct_UFunction_ASOMBaseCharacter_TakeDamage, "TakeDamage" }, // 4074509218
		{ &Z_Construct_UFunction_ASOMBaseCharacter_ToggleNiagaraEffect, "ToggleNiagaraEffect" }, // 1921722668
		{ &Z_Construct_UFunction_ASOMBaseCharacter_UnUseMask, "UnUseMask" }, // 2847778473
		{ &Z_Construct_UFunction_ASOMBaseCharacter_UnUseRequlator, "UnUseRequlator" }, // 2369033489
		{ &Z_Construct_UFunction_ASOMBaseCharacter_UpCurrentFocalLength, "UpCurrentFocalLength" }, // 836766469
		{ &Z_Construct_UFunction_ASOMBaseCharacter_UseMask, "UseMask" }, // 4275537521
		{ &Z_Construct_UFunction_ASOMBaseCharacter_UseRequlator, "UseRequlator" }, // 47781941
		{ &Z_Construct_UFunction_ASOMBaseCharacter_UseSkill, "UseSkill" }, // 2902495514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SOMBaseCharacter.h" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "SOMBaseCharacter" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Speed), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RightValue_MetaData[] = {
		{ "Category", "SOMBaseCharacter" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RightValue = { "RightValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, RightValue), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RightValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RightValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode_MetaData[] = {
		{ "Category", "SOMBaseCharacter" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->isCineMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode = { "isCineMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState = { "SwimModeState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, SwimModeState), Z_Construct_UEnum_SeaOfMemory_SOMCharacterMovementMode, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState_MetaData)) }; // 3127899568
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidget_MetaData[] = {
		{ "Category", "SOMBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidget = { "CharacterWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, CharacterWidget), Z_Construct_UClass_UCharacterWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsVerticalMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement = { "IsVerticalMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsSwimToUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp = { "IsSwimToUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsHorizontalMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement = { "IsHorizontalMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BuoyancyStrength_MetaData[] = {
		{ "Category", "Swim" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BuoyancyStrength = { "BuoyancyStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, BuoyancyStrength), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BuoyancyStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BuoyancyStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsAquaJetActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive = { "IsAquaJetActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpherCollision_MetaData[] = {
		{ "Category", "SOMBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpherCollision = { "SpherCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, SpherCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpherCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpherCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CineCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CineCamera = { "CineCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, CineCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CineCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CineCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BackgroundAudio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BackgroundAudio = { "BackgroundAudio", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, BackgroundAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BackgroundAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BackgroundAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_EffectAudio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_EffectAudio = { "EffectAudio", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, EffectAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_EffectAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_EffectAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_MessageAudio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_MessageAudio = { "MessageAudio", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, MessageAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_MessageAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_MessageAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BoatAudio_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BoatAudio = { "BoatAudio", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, BoatAudio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BoatAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BoatAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving_MetaData[] = {
		{ "Category", "Diving" },
		{ "Comment", "// \xeb\x8b\xa4\xec\x9d\xb4\xeb\xb9\x99\n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "\xeb\x8b\xa4\xec\x9d\xb4\xeb\xb9\x99" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsReadyToDiving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving = { "IsReadyToDiving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat_MetaData[] = {
		{ "Category", "Diving" },
		{ "Comment", "// \xeb\xb0\xb0 \xed\x83\x91\xec\x8a\xb9\n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "\xeb\xb0\xb0 \xed\x83\x91\xec\x8a\xb9" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsReadyToGetOnBoat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat = { "IsReadyToGetOnBoat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_hp_MetaData[] = {
		{ "Category", "Stat" },
		{ "Comment", "// \xec\x8a\xa4\xed\x83\xaf\n" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\xaf" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_hp = { "Max_hp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Max_hp), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_hp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_hp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygen_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygen = { "Max_Oxygen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Max_Oxygen), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygentank_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygentank = { "Max_Oxygentank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Max_Oxygentank), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygentank_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygentank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygentank_Decrease_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygentank_Decrease = { "Oxygentank_Decrease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Oxygentank_Decrease), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygentank_Decrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygentank_Decrease_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Decrease_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Decrease = { "Oxygen_Decrease", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Oxygen_Decrease), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Decrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Decrease_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Recovery_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Recovery = { "Oxygen_Recovery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Oxygen_Recovery), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Recovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Recovery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Basic_Speed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Basic_Speed = { "Basic_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Basic_Speed), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Basic_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Basic_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Aquajet_Speed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Aquajet_Speed = { "Aquajet_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, Aquajet_Speed), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Aquajet_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Aquajet_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_FastSwim_Speed_MetaData[] = {
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_FastSwim_Speed = { "FastSwim_Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, FastSwim_Speed), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_FastSwim_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_FastSwim_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidget_MetaData[] = {
		{ "Category", "SOMBaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidget = { "NewMessageWidget", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, NewMessageWidget), Z_Construct_UClass_UNewMessageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->isTankActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive = { "isTankActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_AquajetSkillEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Niagara" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_AquajetSkillEffectComponent = { "AquajetSkillEffectComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, AquajetSkillEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_AquajetSkillEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_AquajetSkillEffectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CamouflageSkillEffectComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Niagara" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CamouflageSkillEffectComponent = { "CamouflageSkillEffectComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, CamouflageSkillEffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CamouflageSkillEffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CamouflageSkillEffectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidgetClass = { "CameraWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, CameraWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidget = { "CameraWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, CameraWidget), Z_Construct_UClass_UCameraWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidgetClass = { "NewCollectionWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, NewCollectionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNewCollectionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidget = { "NewCollectionWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, NewCollectionWidget), Z_Construct_UClass_UNewCollectionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidgetClass = { "CharacterWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, CharacterWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCharacterWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_WebViewWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_WebViewWidgetClass = { "WebViewWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, WebViewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWebViewWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_WebViewWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_WebViewWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidgetClass = { "NewMessageWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, NewMessageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNewMessageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BaitClass_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BaitClass = { "BaitClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, BaitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BaitClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BaitClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RepellentClass_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RepellentClass = { "RepellentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, RepellentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RepellentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RepellentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpawnDistance_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpawnDistance = { "SpawnDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASOMBaseCharacter, SpawnDistance), METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpawnDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay_MetaData[] = {
		{ "Category", "bool" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsFirstPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay = { "IsFirstPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine_MetaData[] = {
		{ "Category", "bool" },
		{ "ModuleRelativePath", "SOMBaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine_SetBit(void* Obj)
	{
		((ASOMBaseCharacter*)Obj)->IsDrawDebugLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine = { "IsDrawDebugLine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ASOMBaseCharacter), &Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASOMBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RightValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isCineMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SwimModeState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsVerticalMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsSwimToUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsHorizontalMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BuoyancyStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsAquaJetActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpherCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CineCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BackgroundAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_EffectAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_MessageAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BoatAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToDiving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsReadyToGetOnBoat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_hp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Max_Oxygentank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygentank_Decrease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Decrease,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Oxygen_Recovery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Basic_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_Aquajet_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_FastSwim_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_isTankActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_AquajetSkillEffectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CamouflageSkillEffectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CameraWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewCollectionWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_CharacterWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_WebViewWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_NewMessageWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_BaitClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_RepellentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_SpawnDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsFirstPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASOMBaseCharacter_Statics::NewProp_IsDrawDebugLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASOMBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASOMBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASOMBaseCharacter_Statics::ClassParams = {
		&ASOMBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASOMBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASOMBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASOMBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASOMBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ASOMBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASOMBaseCharacter.OuterSingleton, Z_Construct_UClass_ASOMBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASOMBaseCharacter.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<ASOMBaseCharacter>()
	{
		return ASOMBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASOMBaseCharacter);
	ASOMBaseCharacter::~ASOMBaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics::EnumInfo[] = {
		{ SOMCharacterMovementMode_StaticEnum, TEXT("SOMCharacterMovementMode"), &Z_Registration_Info_UEnum_SOMCharacterMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3127899568U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASOMBaseCharacter, ASOMBaseCharacter::StaticClass, TEXT("ASOMBaseCharacter"), &Z_Registration_Info_UClass_ASOMBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASOMBaseCharacter), 1302220840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_143066340(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_SOMBaseCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
