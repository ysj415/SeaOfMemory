// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/StorySubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStorySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UStorySubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UStorySubsystem_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_QuestLine();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_QuestLine;
	static UEnum* QuestLine_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_QuestLine.OuterSingleton)
		{
			Z_Registration_Info_UEnum_QuestLine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SeaOfMemory_QuestLine, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("QuestLine"));
		}
		return Z_Registration_Info_UEnum_QuestLine.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UEnum* StaticEnum<QuestLine>()
	{
		return QuestLine_StaticEnum();
	}
	struct Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::Enumerators[] = {
		{ "QuestLine::OpenPhone", (int64)QuestLine::OpenPhone },
		{ "QuestLine::DrivingBoat", (int64)QuestLine::DrivingBoat },
		{ "QuestLine::GotoUnderWater", (int64)QuestLine::GotoUnderWater },
		{ "QuestLine::Engine", (int64)QuestLine::Engine },
		{ "QuestLine::GotoBoat", (int64)QuestLine::GotoBoat },
		{ "QuestLine::ShipPhone", (int64)QuestLine::ShipPhone },
		{ "QuestLine::GotoShip", (int64)QuestLine::GotoShip },
		{ "QuestLine::Item", (int64)QuestLine::Item },
		{ "QuestLine::CompletetoGetItem", (int64)QuestLine::CompletetoGetItem },
		{ "QuestLine::Clear", (int64)QuestLine::Clear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clear.Comment", "/**\n * \n */" },
		{ "Clear.DisplayName", "Clear" },
		{ "Clear.Name", "QuestLine::Clear" },
		{ "Comment", "/**\n * \n */" },
		{ "CompletetoGetItem.Comment", "/**\n * \n */" },
		{ "CompletetoGetItem.DisplayName", "CompletetoGetItem" },
		{ "CompletetoGetItem.Name", "QuestLine::CompletetoGetItem" },
		{ "DrivingBoat.Comment", "/**\n * \n */" },
		{ "DrivingBoat.DisplayName", "DrivingBoat" },
		{ "DrivingBoat.Name", "QuestLine::DrivingBoat" },
		{ "Engine.Comment", "/**\n * \n */" },
		{ "Engine.DisplayName", "Engine" },
		{ "Engine.Name", "QuestLine::Engine" },
		{ "GotoBoat.Comment", "/**\n * \n */" },
		{ "GotoBoat.DisplayName", "GotoBoat" },
		{ "GotoBoat.Name", "QuestLine::GotoBoat" },
		{ "GotoShip.Comment", "/**\n * \n */" },
		{ "GotoShip.DisplayName", "GotoShip" },
		{ "GotoShip.Name", "QuestLine::GotoShip" },
		{ "GotoUnderWater.Comment", "/**\n * \n */" },
		{ "GotoUnderWater.DisplayName", "GotoUnderWater" },
		{ "GotoUnderWater.Name", "QuestLine::GotoUnderWater" },
		{ "Item.Comment", "/**\n * \n */" },
		{ "Item.DisplayName", "Item" },
		{ "Item.Name", "QuestLine::Item" },
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
		{ "OpenPhone.Comment", "/**\n * \n */" },
		{ "OpenPhone.DisplayName", "OpenPhone" },
		{ "OpenPhone.Name", "QuestLine::OpenPhone" },
		{ "ShipPhone.Comment", "/**\n * \n */" },
		{ "ShipPhone.DisplayName", "ShipPhone" },
		{ "ShipPhone.Name", "QuestLine::ShipPhone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		"QuestLine",
		"QuestLine",
		Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SeaOfMemory_QuestLine()
	{
		if (!Z_Registration_Info_UEnum_QuestLine.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_QuestLine.InnerSingleton, Z_Construct_UEnum_SeaOfMemory_QuestLine_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_QuestLine.InnerSingleton;
	}
	DEFINE_FUNCTION(UStorySubsystem::execKidEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KidEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorySubsystem::execCollectorEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectorEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorySubsystem::execClearCurrentQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurrentQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStorySubsystem::execResetSubsystemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSubsystemData();
		P_NATIVE_END;
	}
	void UStorySubsystem::StaticRegisterNativesUStorySubsystem()
	{
		UClass* Class = UStorySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCurrentQuest", &UStorySubsystem::execClearCurrentQuest },
			{ "CollectorEvent", &UStorySubsystem::execCollectorEvent },
			{ "KidEvent", &UStorySubsystem::execKidEvent },
			{ "ResetSubsystemData", &UStorySubsystem::execResetSubsystemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorySubsystem, nullptr, "ClearCurrentQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorySubsystem_CollectorEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorySubsystem_CollectorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorySubsystem_CollectorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorySubsystem, nullptr, "CollectorEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorySubsystem_CollectorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorySubsystem_CollectorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorySubsystem_CollectorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorySubsystem_CollectorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorySubsystem_KidEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorySubsystem_KidEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorySubsystem_KidEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorySubsystem, nullptr, "KidEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorySubsystem_KidEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorySubsystem_KidEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorySubsystem_KidEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorySubsystem_KidEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStorySubsystem, nullptr, "ResetSubsystemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStorySubsystem);
	UClass* Z_Construct_UClass_UStorySubsystem_NoRegister()
	{
		return UStorySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UStorySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentLine_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLine_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStorySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStorySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStorySubsystem_ClearCurrentQuest, "ClearCurrentQuest" }, // 2228675099
		{ &Z_Construct_UFunction_UStorySubsystem_CollectorEvent, "CollectorEvent" }, // 742806665
		{ &Z_Construct_UFunction_UStorySubsystem_KidEvent, "KidEvent" }, // 3179037773
		{ &Z_Construct_UFunction_UStorySubsystem_ResetSubsystemData, "ResetSubsystemData" }, // 4088623764
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StorySubsystem.h" },
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine_MetaData[] = {
		{ "Category", "StorySubsystem" },
		{ "ModuleRelativePath", "Public/StorySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine = { "CurrentLine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStorySubsystem, CurrentLine), Z_Construct_UEnum_SeaOfMemory_QuestLine, METADATA_PARAMS(Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine_MetaData)) }; // 330349489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStorySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStorySubsystem_Statics::NewProp_CurrentLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStorySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStorySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStorySubsystem_Statics::ClassParams = {
		&UStorySubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStorySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStorySubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStorySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStorySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStorySubsystem()
	{
		if (!Z_Registration_Info_UClass_UStorySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStorySubsystem.OuterSingleton, Z_Construct_UClass_UStorySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStorySubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UStorySubsystem>()
	{
		return UStorySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStorySubsystem);
	UStorySubsystem::~UStorySubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics::EnumInfo[] = {
		{ QuestLine_StaticEnum, TEXT("QuestLine"), &Z_Registration_Info_UEnum_QuestLine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 330349489U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStorySubsystem, UStorySubsystem::StaticClass, TEXT("UStorySubsystem"), &Z_Registration_Info_UClass_UStorySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStorySubsystem), 3675772469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_641864074(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_StorySubsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
