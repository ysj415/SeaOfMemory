// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/NewMessageWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewMessageWidget() {}
// Cross Module References
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UNewMessageWidget();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UNewMessageWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(UNewMessageWidget::execisTimerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isTimerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewMessageWidget::execNewMessageNoticeOn)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NewMessageNoticeOn(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewMessageWidget::execStopTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewMessageWidget::execPlayEndAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayEndAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewMessageWidget::execNativeConstruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeConstruct();
		P_NATIVE_END;
	}
	void UNewMessageWidget::StaticRegisterNativesUNewMessageWidget()
	{
		UClass* Class = UNewMessageWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "isTimerActive", &UNewMessageWidget::execisTimerActive },
			{ "NativeConstruct", &UNewMessageWidget::execNativeConstruct },
			{ "NewMessageNoticeOn", &UNewMessageWidget::execNewMessageNoticeOn },
			{ "PlayEndAnim", &UNewMessageWidget::execPlayEndAnim },
			{ "StopTimer", &UNewMessageWidget::execStopTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics
	{
		struct NewMessageWidget_eventisTimerActive_Parms
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
	void Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewMessageWidget_eventisTimerActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NewMessageWidget_eventisTimerActive_Parms), &Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMessageWidget, nullptr, "isTimerActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::NewMessageWidget_eventisTimerActive_Parms), Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewMessageWidget_isTimerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMessageWidget_isTimerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewMessageWidget_NativeConstruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewMessageWidget_NativeConstruct_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMessageWidget_NativeConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMessageWidget, nullptr, "NativeConstruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewMessageWidget_NativeConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_NativeConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewMessageWidget_NativeConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMessageWidget_NativeConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics
	{
		struct NewMessageWidget_eventNewMessageNoticeOn_Parms
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
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NewMessageWidget_eventNewMessageNoticeOn_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMessageWidget, nullptr, "NewMessageNoticeOn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::NewMessageWidget_eventNewMessageNoticeOn_Parms), Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMessageWidget, nullptr, "PlayEndAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewMessageWidget_StopTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewMessageWidget_StopTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewMessageWidget_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewMessageWidget, nullptr, "StopTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewMessageWidget_StopTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewMessageWidget_StopTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewMessageWidget_StopTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewMessageWidget_StopTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewMessageWidget);
	UClass* Z_Construct_UClass_UNewMessageWidget_NoRegister()
	{
		return UNewMessageWidget::StaticClass();
	}
	struct Z_Construct_UClass_UNewMessageWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoticeText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoticeText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewMessageWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewMessageWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewMessageWidget_isTimerActive, "isTimerActive" }, // 956987853
		{ &Z_Construct_UFunction_UNewMessageWidget_NativeConstruct, "NativeConstruct" }, // 241994014
		{ &Z_Construct_UFunction_UNewMessageWidget_NewMessageNoticeOn, "NewMessageNoticeOn" }, // 299796518
		{ &Z_Construct_UFunction_UNewMessageWidget_PlayEndAnim, "PlayEndAnim" }, // 3877061250
		{ &Z_Construct_UFunction_UNewMessageWidget_StopTimer, "StopTimer" }, // 3455633176
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewMessageWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NewMessageWidget.h" },
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_Start_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewMessageWidget, Start), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_End_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewMessageWidget, End), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_NoticeText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_NoticeText = { "NoticeText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewMessageWidget, NoticeText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_NoticeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_NoticeText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_TimerTime_MetaData[] = {
		{ "Category", "NewMessageWidget" },
		{ "ModuleRelativePath", "Public/NewMessageWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_TimerTime = { "TimerTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNewMessageWidget, TimerTime), METADATA_PARAMS(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_TimerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_TimerTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewMessageWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_NoticeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewMessageWidget_Statics::NewProp_TimerTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewMessageWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewMessageWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewMessageWidget_Statics::ClassParams = {
		&UNewMessageWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewMessageWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewMessageWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNewMessageWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewMessageWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewMessageWidget()
	{
		if (!Z_Registration_Info_UClass_UNewMessageWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewMessageWidget.OuterSingleton, Z_Construct_UClass_UNewMessageWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewMessageWidget.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UNewMessageWidget>()
	{
		return UNewMessageWidget::StaticClass();
	}
	UNewMessageWidget::UNewMessageWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewMessageWidget);
	UNewMessageWidget::~UNewMessageWidget() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewMessageWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewMessageWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewMessageWidget, UNewMessageWidget::StaticClass, TEXT("UNewMessageWidget"), &Z_Registration_Info_UClass_UNewMessageWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewMessageWidget), 1966476818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewMessageWidget_h_1066684745(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewMessageWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_NewMessageWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
