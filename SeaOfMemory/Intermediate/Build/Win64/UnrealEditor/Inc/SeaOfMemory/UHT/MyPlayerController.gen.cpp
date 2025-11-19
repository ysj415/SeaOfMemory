// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/MyPlayerController.h"
#include "InputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerController() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_AMyPlayerController();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(AMyPlayerController::execSwimUpDownCompletedCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwimUpDownCompletedCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execSwimUpDownStartedCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwimUpDownStartedCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execSwimUpDownTriggeredCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwimUpDownTriggeredCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execLeftMouseCallBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftMouseCallBack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execSetCameraModeCallBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraModeCallBack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execRotateCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execMovementStartedCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementStartedCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execMovementCompletedCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementCompletedCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyPlayerController::execMovementTriggeredCallBack)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovementTriggeredCallBack(Z_Param_Out_instance);
		P_NATIVE_END;
	}
	void AMyPlayerController::StaticRegisterNativesAMyPlayerController()
	{
		UClass* Class = AMyPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LeftMouseCallBack", &AMyPlayerController::execLeftMouseCallBack },
			{ "MovementCompletedCallBack", &AMyPlayerController::execMovementCompletedCallBack },
			{ "MovementStartedCallBack", &AMyPlayerController::execMovementStartedCallBack },
			{ "MovementTriggeredCallBack", &AMyPlayerController::execMovementTriggeredCallBack },
			{ "RotateCallBack", &AMyPlayerController::execRotateCallBack },
			{ "SetCameraModeCallBack", &AMyPlayerController::execSetCameraModeCallBack },
			{ "SwimUpDownCompletedCallBack", &AMyPlayerController::execSwimUpDownCompletedCallBack },
			{ "SwimUpDownStartedCallBack", &AMyPlayerController::execSwimUpDownStartedCallBack },
			{ "SwimUpDownTriggeredCallBack", &AMyPlayerController::execSwimUpDownTriggeredCallBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*const struct FInputActionInstance& instance*/" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "const struct FInputActionInstance& instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "LeftMouseCallBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics
	{
		struct MyPlayerController_eventMovementCompletedCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventMovementCompletedCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "MovementCompletedCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::MyPlayerController_eventMovementCompletedCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics
	{
		struct MyPlayerController_eventMovementStartedCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventMovementStartedCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "MovementStartedCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::MyPlayerController_eventMovementStartedCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics
	{
		struct MyPlayerController_eventMovementTriggeredCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventMovementTriggeredCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "MovementTriggeredCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::MyPlayerController_eventMovementTriggeredCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics
	{
		struct MyPlayerController_eventRotateCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventRotateCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "RotateCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::MyPlayerController_eventRotateCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_RotateCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_RotateCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*const struct FInputActionInstance& instanc*/" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "const struct FInputActionInstance& instanc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "SetCameraModeCallBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics
	{
		struct MyPlayerController_eventSwimUpDownCompletedCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventSwimUpDownCompletedCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "SwimUpDownCompletedCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::MyPlayerController_eventSwimUpDownCompletedCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics
	{
		struct MyPlayerController_eventSwimUpDownStartedCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventSwimUpDownStartedCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "SwimUpDownStartedCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::MyPlayerController_eventSwimUpDownStartedCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics
	{
		struct MyPlayerController_eventSwimUpDownTriggeredCallBack_Parms
		{
			FInputActionInstance instance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_instance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::NewProp_instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::NewProp_instance = { "instance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MyPlayerController_eventSwimUpDownTriggeredCallBack_Parms, instance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::NewProp_instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::NewProp_instance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::NewProp_instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayerController, nullptr, "SwimUpDownTriggeredCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::MyPlayerController_eventSwimUpDownTriggeredCallBack_Parms), Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayerController);
	UClass* Z_Construct_UClass_AMyPlayerController_NoRegister()
	{
		return AMyPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMyPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovamentInput_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MovamentInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateInput_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RotateInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetCameraInput_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SetCameraInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMouseInput_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LeftMouseInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwimUpDwon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SwimUpDwon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShutterSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShutterSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_a_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_a_vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_b_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_b_vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_c_vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_c_vector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayerController_LeftMouseCallBack, "LeftMouseCallBack" }, // 2500245221
		{ &Z_Construct_UFunction_AMyPlayerController_MovementCompletedCallBack, "MovementCompletedCallBack" }, // 212315261
		{ &Z_Construct_UFunction_AMyPlayerController_MovementStartedCallBack, "MovementStartedCallBack" }, // 2124128079
		{ &Z_Construct_UFunction_AMyPlayerController_MovementTriggeredCallBack, "MovementTriggeredCallBack" }, // 3088432877
		{ &Z_Construct_UFunction_AMyPlayerController_RotateCallBack, "RotateCallBack" }, // 2283145417
		{ &Z_Construct_UFunction_AMyPlayerController_SetCameraModeCallBack, "SetCameraModeCallBack" }, // 838136439
		{ &Z_Construct_UFunction_AMyPlayerController_SwimUpDownCompletedCallBack, "SwimUpDownCompletedCallBack" }, // 2826840689
		{ &Z_Construct_UFunction_AMyPlayerController_SwimUpDownStartedCallBack, "SwimUpDownStartedCallBack" }, // 334333367
		{ &Z_Construct_UFunction_AMyPlayerController_SwimUpDownTriggeredCallBack, "SwimUpDownTriggeredCallBack" }, // 2499015499
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyPlayerController.h" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InputMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InputMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MovamentInput_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MovamentInput = { "MovamentInput", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, MovamentInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MovamentInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MovamentInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RotateInput_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RotateInput = { "RotateInput", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, RotateInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RotateInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RotateInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SetCameraInput_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SetCameraInput = { "SetCameraInput", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, SetCameraInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SetCameraInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SetCameraInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_LeftMouseInput_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_LeftMouseInput = { "LeftMouseInput", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, LeftMouseInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_LeftMouseInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_LeftMouseInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SwimUpDwon_MetaData[] = {
		{ "Category", "Input Mapping" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SwimUpDwon = { "SwimUpDwon", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, SwimUpDwon), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SwimUpDwon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SwimUpDwon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ShutterSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ShutterSound = { "ShutterSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, ShutterSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ShutterSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ShutterSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue_MetaData[] = {
		{ "Category", "RightValue" },
		{ "Comment", "//UInputAction* GetMovementInputAction() { return MovamentInput.Get(); }\n" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
		{ "ToolTip", "UInputAction* GetMovementInputAction() { return MovamentInput.Get(); }" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue = { "RightValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, RightValue), METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_a_vector_MetaData[] = {
		{ "Category", "RightValue" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_a_vector = { "a_vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, a_vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_a_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_a_vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_b_vector_MetaData[] = {
		{ "Category", "RightValue" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_b_vector = { "b_vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, b_vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_b_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_b_vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyPlayerController_Statics::NewProp_c_vector_MetaData[] = {
		{ "Category", "RightValue" },
		{ "ModuleRelativePath", "MyPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyPlayerController_Statics::NewProp_c_vector = { "c_vector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMyPlayerController, c_vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_c_vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::NewProp_c_vector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_MovamentInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RotateInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SetCameraInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_LeftMouseInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_SwimUpDwon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_ShutterSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_RightValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_a_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_b_vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayerController_Statics::NewProp_c_vector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayerController_Statics::ClassParams = {
		&AMyPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyPlayerController()
	{
		if (!Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton, Z_Construct_UClass_AMyPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyPlayerController.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<AMyPlayerController>()
	{
		return AMyPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayerController);
	AMyPlayerController::~AMyPlayerController() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayerController, AMyPlayerController::StaticClass, TEXT("AMyPlayerController"), &Z_Registration_Info_UClass_AMyPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayerController), 1739224131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_2738308839(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_MyPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
