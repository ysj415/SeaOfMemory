// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/MassageSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassageSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ASOMBaseCharacter_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMesageWidget_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageData();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageData_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageSubsystem();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_UMessageSubsystem_NoRegister();
	SEAOFMEMORY_API UEnum* Z_Construct_UEnum_SeaOfMemory_ESpecies();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FMessageContent();
	SEAOFMEMORY_API UScriptStruct* Z_Construct_UScriptStruct_FReserveMessageContent();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MessageContent;
class UScriptStruct* FMessageContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MessageContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MessageContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMessageContent, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("MessageContent"));
	}
	return Z_Registration_Info_UScriptStruct_MessageContent.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FMessageContent>()
{
	return FMessageContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMessageContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMessageContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMessageContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMessageContent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMessageContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		&NewStructOps,
		"MessageContent",
		sizeof(FMessageContent),
		alignof(FMessageContent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMessageContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMessageContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMessageContent()
	{
		if (!Z_Registration_Info_UScriptStruct_MessageContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MessageContent.InnerSingleton, Z_Construct_UScriptStruct_FMessageContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MessageContent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReserveMessageContent;
class UScriptStruct* FReserveMessageContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReserveMessageContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReserveMessageContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReserveMessageContent, (UObject*)Z_Construct_UPackage__Script_SeaOfMemory(), TEXT("ReserveMessageContent"));
	}
	return Z_Registration_Info_UScriptStruct_ReserveMessageContent.OuterSingleton;
}
template<> SEAOFMEMORY_API UScriptStruct* StaticStruct<FReserveMessageContent>()
{
	return FReserveMessageContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReserveMessageContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReserveMessageContent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReserveMessageContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReserveMessageContent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReserveMessageContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
		nullptr,
		&NewStructOps,
		"ReserveMessageContent",
		sizeof(FReserveMessageContent),
		alignof(FReserveMessageContent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReserveMessageContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReserveMessageContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReserveMessageContent()
	{
		if (!Z_Registration_Info_UScriptStruct_ReserveMessageContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReserveMessageContent.InnerSingleton, Z_Construct_UScriptStruct_FReserveMessageContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReserveMessageContent.InnerSingleton;
	}
	void UMessageData::StaticRegisterNativesUMessageData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMessageData);
	UClass* Z_Construct_UClass_UMessageData_NoRegister()
	{
		return UMessageData::StaticClass();
	}
	struct Z_Construct_UClass_UMessageData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MessageArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReserveArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReserveArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReserveArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFirsNotice_MetaData[];
#endif
		static void NewProp_IsFirsNotice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirsNotice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassageSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageData_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageData, Name), METADATA_PARAMS(Z_Construct_UClass_UMessageData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray_Inner = { "MessageArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMessageContent, METADATA_PARAMS(nullptr, 0) }; // 421465888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray = { "MessageArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageData, MessageArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray_MetaData)) }; // 421465888
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray_Inner = { "ReserveArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FReserveMessageContent, METADATA_PARAMS(nullptr, 0) }; // 1643598503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray = { "ReserveArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageData, ReserveArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray_MetaData)) }; // 1643598503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageData_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageData, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UMessageData_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::NewProp_TimerHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice_SetBit(void* Obj)
	{
		((UMessageData*)Obj)->IsFirsNotice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice = { "IsFirsNotice", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMessageData), &Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_MessageArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_ReserveArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_TimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageData_Statics::NewProp_IsFirsNotice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMessageData_Statics::ClassParams = {
		&UMessageData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMessageData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageData()
	{
		if (!Z_Registration_Info_UClass_UMessageData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMessageData.OuterSingleton, Z_Construct_UClass_UMessageData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMessageData.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UMessageData>()
	{
		return UMessageData::StaticClass();
	}
	UMessageData::UMessageData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageData);
	UMessageData::~UMessageData() {}
	DEFINE_FUNCTION(UMessageSubsystem::execAddGiveMoneyReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FIntProperty,Z_Param_Money);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGiveMoneyReserve(Z_Param_Target,Z_Param_Money);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddTextureChoiceReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_ENUM(ESpecies,Z_Param_Species);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTextureChoiceReserve(Z_Param_Target,ESpecies(Z_Param_Species));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddThreeMyChoiceForNewPersonReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice1);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice2);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddThreeMyChoiceForNewPersonReserve(Z_Param_Target,Z_Param_Name,Z_Param_Choice1,Z_Param_Choice2,Z_Param_Choice3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddThreeMyChoiceReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice1);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice2);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddThreeMyChoiceReserve(Z_Param_Target,Z_Param_Choice1,Z_Param_Choice2,Z_Param_Choice3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddTwoMyChoiceForNewPersonReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice1);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTwoMyChoiceForNewPersonReserve(Z_Param_Target,Z_Param_Name,Z_Param_Choice1,Z_Param_Choice2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddTwoMyChoiceReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice1);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTwoMyChoiceReserve(Z_Param_Target,Z_Param_Choice1,Z_Param_Choice2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddOneMyChoiceForNewPersonReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOneMyChoiceForNewPersonReserve(Z_Param_Target,Z_Param_Name,Z_Param_Choice1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddOneMyChoiceReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Choice1);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOneMyChoiceReserve(Z_Param_Target,Z_Param_Choice1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddMessageForNewPersonReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessageForNewPersonReserve(Z_Param_Target,Z_Param_Name,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddMessageReserve)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_isStoryLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMessageReserve(Z_Param_Target,Z_Param_Message,Z_Param_isStoryLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execTimerFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerFunction(Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execStartTimer)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer(Z_Param_Target,Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddNewMessageForNewPersonOnWidget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Name);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewMessageForNewPersonOnWidget(Z_Param_Target,Z_Param_Name,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddNewMessageOnWidget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewMessageOnWidget(Z_Param_Target,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddNewImage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddNewImage(Z_Param_Target,Z_Param_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddNewMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_isMyMessage);
		P_GET_UBOOL(Z_Param_isChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddNewMessage(Z_Param_Target,Z_Param_Message,Z_Param_isMyMessage,Z_Param_isChecked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execAddNewPerson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Target);
		P_GET_PROPERTY(FTextProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddNewPerson(Z_Param_Target,Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMessageSubsystem::execResetSubsystemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSubsystemData();
		P_NATIVE_END;
	}
	void UMessageSubsystem::StaticRegisterNativesUMessageSubsystem()
	{
		UClass* Class = UMessageSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGiveMoneyReserve", &UMessageSubsystem::execAddGiveMoneyReserve },
			{ "AddMessageForNewPersonReserve", &UMessageSubsystem::execAddMessageForNewPersonReserve },
			{ "AddMessageReserve", &UMessageSubsystem::execAddMessageReserve },
			{ "AddNewImage", &UMessageSubsystem::execAddNewImage },
			{ "AddNewMessage", &UMessageSubsystem::execAddNewMessage },
			{ "AddNewMessageForNewPersonOnWidget", &UMessageSubsystem::execAddNewMessageForNewPersonOnWidget },
			{ "AddNewMessageOnWidget", &UMessageSubsystem::execAddNewMessageOnWidget },
			{ "AddNewPerson", &UMessageSubsystem::execAddNewPerson },
			{ "AddOneMyChoiceForNewPersonReserve", &UMessageSubsystem::execAddOneMyChoiceForNewPersonReserve },
			{ "AddOneMyChoiceReserve", &UMessageSubsystem::execAddOneMyChoiceReserve },
			{ "AddTextureChoiceReserve", &UMessageSubsystem::execAddTextureChoiceReserve },
			{ "AddThreeMyChoiceForNewPersonReserve", &UMessageSubsystem::execAddThreeMyChoiceForNewPersonReserve },
			{ "AddThreeMyChoiceReserve", &UMessageSubsystem::execAddThreeMyChoiceReserve },
			{ "AddTwoMyChoiceForNewPersonReserve", &UMessageSubsystem::execAddTwoMyChoiceForNewPersonReserve },
			{ "AddTwoMyChoiceReserve", &UMessageSubsystem::execAddTwoMyChoiceReserve },
			{ "ResetSubsystemData", &UMessageSubsystem::execResetSubsystemData },
			{ "StartTimer", &UMessageSubsystem::execStartTimer },
			{ "TimerFunction", &UMessageSubsystem::execTimerFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics
	{
		struct MessageSubsystem_eventAddGiveMoneyReserve_Parms
		{
			FString Target;
			int32 Money;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Money;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddGiveMoneyReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::NewProp_Money = { "Money", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddGiveMoneyReserve_Parms, Money), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::NewProp_Money,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddGiveMoneyReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::MessageSubsystem_eventAddGiveMoneyReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics
	{
		struct MessageSubsystem_eventAddMessageForNewPersonReserve_Parms
		{
			FString Target;
			FText Name;
			FText Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddMessageForNewPersonReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddMessageForNewPersonReserve_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddMessageForNewPersonReserve_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddMessageForNewPersonReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::MessageSubsystem_eventAddMessageForNewPersonReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics
	{
		struct MessageSubsystem_eventAddMessageReserve_Parms
		{
			FString Target;
			FText Message;
			bool isStoryLine;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static void NewProp_isStoryLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isStoryLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddMessageReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddMessageReserve_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_isStoryLine_SetBit(void* Obj)
	{
		((MessageSubsystem_eventAddMessageReserve_Parms*)Obj)->isStoryLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_isStoryLine = { "isStoryLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MessageSubsystem_eventAddMessageReserve_Parms), &Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_isStoryLine_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::NewProp_isStoryLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_isStoryLine", "false" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddMessageReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::MessageSubsystem_eventAddMessageReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics
	{
		struct MessageSubsystem_eventAddNewImage_Parms
		{
			FString Target;
			UTexture2D* texture;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewImage_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewImage_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageSubsystem_eventAddNewImage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MessageSubsystem_eventAddNewImage_Parms), &Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddNewImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::MessageSubsystem_eventAddNewImage_Parms), Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddNewImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddNewImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics
	{
		struct MessageSubsystem_eventAddNewMessage_Parms
		{
			FString Target;
			FText Message;
			bool isMyMessage;
			bool isChecked;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static void NewProp_isMyMessage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMyMessage;
		static void NewProp_isChecked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isChecked;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessage_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessage_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isMyMessage_SetBit(void* Obj)
	{
		((MessageSubsystem_eventAddNewMessage_Parms*)Obj)->isMyMessage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isMyMessage = { "isMyMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MessageSubsystem_eventAddNewMessage_Parms), &Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isMyMessage_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isChecked_SetBit(void* Obj)
	{
		((MessageSubsystem_eventAddNewMessage_Parms*)Obj)->isChecked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isChecked = { "isChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MessageSubsystem_eventAddNewMessage_Parms), &Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageSubsystem_eventAddNewMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MessageSubsystem_eventAddNewMessage_Parms), &Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isMyMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_isChecked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_isChecked", "false" },
		{ "CPP_Default_isMyMessage", "false" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddNewMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::MessageSubsystem_eventAddNewMessage_Parms), Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddNewMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddNewMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics
	{
		struct MessageSubsystem_eventAddNewMessageForNewPersonOnWidget_Parms
		{
			FString Target;
			FText Name;
			FText Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessageForNewPersonOnWidget_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessageForNewPersonOnWidget_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessageForNewPersonOnWidget_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddNewMessageForNewPersonOnWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::MessageSubsystem_eventAddNewMessageForNewPersonOnWidget_Parms), Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics
	{
		struct MessageSubsystem_eventAddNewMessageOnWidget_Parms
		{
			FString Target;
			FText Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessageOnWidget_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewMessageOnWidget_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddNewMessageOnWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::MessageSubsystem_eventAddNewMessageOnWidget_Parms), Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics
	{
		struct MessageSubsystem_eventAddNewPerson_Parms
		{
			FString Target;
			FText name;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewPerson_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddNewPerson_Parms, name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MessageSubsystem_eventAddNewPerson_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MessageSubsystem_eventAddNewPerson_Parms), &Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xeb\xb8\xa6 \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\n\x09* \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n\x09""FText text = NSLOCTEXT(\"Korean\", \"Korean\", \"\xef\xbf\xbd\xdb\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\");\n\x09MessageSubsystem->AddNewPerson(\"sky\", text);\n\x09*/" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
		{ "ToolTip", "* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xeb\xb8\xa6 \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\n* \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\nFText text = NSLOCTEXT(\"Korean\", \"Korean\", \"\xef\xbf\xbd\xdb\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\");\nMessageSubsystem->AddNewPerson(\"sky\", text);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddNewPerson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::MessageSubsystem_eventAddNewPerson_Parms), Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddNewPerson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddNewPerson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics
	{
		struct MessageSubsystem_eventAddOneMyChoiceForNewPersonReserve_Parms
		{
			FString Target;
			FText Name;
			FText Choice1;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddOneMyChoiceForNewPersonReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddOneMyChoiceForNewPersonReserve_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddOneMyChoiceForNewPersonReserve_Parms, Choice1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::NewProp_Choice1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddOneMyChoiceForNewPersonReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::MessageSubsystem_eventAddOneMyChoiceForNewPersonReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics
	{
		struct MessageSubsystem_eventAddOneMyChoiceReserve_Parms
		{
			FString Target;
			FText Choice1;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddOneMyChoiceReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddOneMyChoiceReserve_Parms, Choice1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::NewProp_Choice1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddOneMyChoiceReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::MessageSubsystem_eventAddOneMyChoiceReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics
	{
		struct MessageSubsystem_eventAddTextureChoiceReserve_Parms
		{
			FString Target;
			ESpecies Species;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Species_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Species;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTextureChoiceReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::NewProp_Species_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::NewProp_Species = { "Species", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTextureChoiceReserve_Parms, Species), Z_Construct_UEnum_SeaOfMemory_ESpecies, METADATA_PARAMS(nullptr, 0) }; // 3767237422
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::NewProp_Species_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::NewProp_Species,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddTextureChoiceReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::MessageSubsystem_eventAddTextureChoiceReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics
	{
		struct MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms
		{
			FString Target;
			FText Name;
			FText Choice1;
			FText Choice2;
			FText Choice3;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice1;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice2;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms, Choice1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Choice2 = { "Choice2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms, Choice2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Choice3 = { "Choice3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms, Choice3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Choice1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Choice2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::NewProp_Choice3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddThreeMyChoiceForNewPersonReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::MessageSubsystem_eventAddThreeMyChoiceForNewPersonReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics
	{
		struct MessageSubsystem_eventAddThreeMyChoiceReserve_Parms
		{
			FString Target;
			FText Choice1;
			FText Choice2;
			FText Choice3;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice1;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice2;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceReserve_Parms, Choice1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Choice2 = { "Choice2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceReserve_Parms, Choice2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Choice3 = { "Choice3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddThreeMyChoiceReserve_Parms, Choice3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Choice1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Choice2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::NewProp_Choice3,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddThreeMyChoiceReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::MessageSubsystem_eventAddThreeMyChoiceReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics
	{
		struct MessageSubsystem_eventAddTwoMyChoiceForNewPersonReserve_Parms
		{
			FString Target;
			FText Name;
			FText Choice1;
			FText Choice2;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice1;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceForNewPersonReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceForNewPersonReserve_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceForNewPersonReserve_Parms, Choice1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Choice2 = { "Choice2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceForNewPersonReserve_Parms, Choice2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Choice1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::NewProp_Choice2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddTwoMyChoiceForNewPersonReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::MessageSubsystem_eventAddTwoMyChoiceForNewPersonReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics
	{
		struct MessageSubsystem_eventAddTwoMyChoiceReserve_Parms
		{
			FString Target;
			FText Choice1;
			FText Choice2;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice1;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Choice2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceReserve_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::NewProp_Choice1 = { "Choice1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceReserve_Parms, Choice1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::NewProp_Choice2 = { "Choice2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventAddTwoMyChoiceReserve_Parms, Choice2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::NewProp_Choice1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::NewProp_Choice2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "AddTwoMyChoiceReserve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::MessageSubsystem_eventAddTwoMyChoiceReserve_Parms), Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "ResetSubsystemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics
	{
		struct MessageSubsystem_eventStartTimer_Parms
		{
			FString Target;
			float Delay;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventStartTimer_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventStartTimer_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::NewProp_Delay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Delay", "1.000000" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "StartTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::MessageSubsystem_eventStartTimer_Parms), Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics
	{
		struct MessageSubsystem_eventTimerFunction_Parms
		{
			FString Target;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MessageSubsystem_eventTimerFunction_Parms, Target), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMessageSubsystem, nullptr, "TimerFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::MessageSubsystem_eventTimerFunction_Parms), Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMessageSubsystem_TimerFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMessageSubsystem_TimerFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMessageSubsystem);
	UClass* Z_Construct_UClass_UMessageSubsystem_NoRegister()
	{
		return UMessageSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMessageSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageDataMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageDataMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MessageDataMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageIntervel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MessageIntervel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessageSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMessageSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMessageSubsystem_AddGiveMoneyReserve, "AddGiveMoneyReserve" }, // 1409524478
		{ &Z_Construct_UFunction_UMessageSubsystem_AddMessageForNewPersonReserve, "AddMessageForNewPersonReserve" }, // 3212040781
		{ &Z_Construct_UFunction_UMessageSubsystem_AddMessageReserve, "AddMessageReserve" }, // 1569551778
		{ &Z_Construct_UFunction_UMessageSubsystem_AddNewImage, "AddNewImage" }, // 269650601
		{ &Z_Construct_UFunction_UMessageSubsystem_AddNewMessage, "AddNewMessage" }, // 1058259830
		{ &Z_Construct_UFunction_UMessageSubsystem_AddNewMessageForNewPersonOnWidget, "AddNewMessageForNewPersonOnWidget" }, // 4211377775
		{ &Z_Construct_UFunction_UMessageSubsystem_AddNewMessageOnWidget, "AddNewMessageOnWidget" }, // 4028376734
		{ &Z_Construct_UFunction_UMessageSubsystem_AddNewPerson, "AddNewPerson" }, // 3068510941
		{ &Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceForNewPersonReserve, "AddOneMyChoiceForNewPersonReserve" }, // 2055969447
		{ &Z_Construct_UFunction_UMessageSubsystem_AddOneMyChoiceReserve, "AddOneMyChoiceReserve" }, // 439285063
		{ &Z_Construct_UFunction_UMessageSubsystem_AddTextureChoiceReserve, "AddTextureChoiceReserve" }, // 2122772532
		{ &Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceForNewPersonReserve, "AddThreeMyChoiceForNewPersonReserve" }, // 1764368247
		{ &Z_Construct_UFunction_UMessageSubsystem_AddThreeMyChoiceReserve, "AddThreeMyChoiceReserve" }, // 2462110291
		{ &Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceForNewPersonReserve, "AddTwoMyChoiceForNewPersonReserve" }, // 1440033481
		{ &Z_Construct_UFunction_UMessageSubsystem_AddTwoMyChoiceReserve, "AddTwoMyChoiceReserve" }, // 2443587838
		{ &Z_Construct_UFunction_UMessageSubsystem_ResetSubsystemData, "ResetSubsystemData" }, // 659554046
		{ &Z_Construct_UFunction_UMessageSubsystem_StartTimer, "StartTimer" }, // 4224391529
		{ &Z_Construct_UFunction_UMessageSubsystem_TimerFunction, "TimerFunction" }, // 1397352577
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassageSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_ValueProp = { "MessageDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMessageData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_Key_KeyProp = { "MessageDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap = { "MessageDataMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageSubsystem, MessageDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageIntervel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageIntervel = { "MessageIntervel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageSubsystem, MessageIntervel), METADATA_PARAMS(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageIntervel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageIntervel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageWidget = { "MessageWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageSubsystem, MessageWidget), Z_Construct_UClass_UMesageWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageSubsystem, Character), Z_Construct_UClass_ASOMBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassageSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMessageSubsystem, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_TimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_TimerHandle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMessageSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageDataMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageIntervel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_MessageWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMessageSubsystem_Statics::NewProp_TimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessageSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessageSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMessageSubsystem_Statics::ClassParams = {
		&UMessageSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMessageSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMessageSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMessageSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessageSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMessageSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMessageSubsystem.OuterSingleton, Z_Construct_UClass_UMessageSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMessageSubsystem.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<UMessageSubsystem>()
	{
		return UMessageSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessageSubsystem);
	UMessageSubsystem::~UMessageSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMessageContent::StaticStruct, Z_Construct_UScriptStruct_FMessageContent_Statics::NewStructOps, TEXT("MessageContent"), &Z_Registration_Info_UScriptStruct_MessageContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMessageContent), 421465888U) },
		{ FReserveMessageContent::StaticStruct, Z_Construct_UScriptStruct_FReserveMessageContent_Statics::NewStructOps, TEXT("ReserveMessageContent"), &Z_Registration_Info_UScriptStruct_ReserveMessageContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReserveMessageContent), 1643598503U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMessageData, UMessageData::StaticClass, TEXT("UMessageData"), &Z_Registration_Info_UClass_UMessageData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMessageData), 2897404550U) },
		{ Z_Construct_UClass_UMessageSubsystem, UMessageSubsystem::StaticClass, TEXT("UMessageSubsystem"), &Z_Registration_Info_UClass_UMessageSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMessageSubsystem), 3730518996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_1636879525(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_MassageSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
