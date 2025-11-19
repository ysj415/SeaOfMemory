// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeaOfMemory/Public/Repellent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepellent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ARepellent();
	SEAOFMEMORY_API UClass* Z_Construct_UClass_ARepellent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SeaOfMemory();
// End Cross Module References
	DEFINE_FUNCTION(ARepellent::execTimerFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimerFunction();
		P_NATIVE_END;
	}
	void ARepellent::StaticRegisterNativesARepellent()
	{
		UClass* Class = ARepellent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TimerFunction", &ARepellent::execTimerFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARepellent_TimerFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARepellent_TimerFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Repellent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARepellent_TimerFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARepellent, nullptr, "TimerFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARepellent_TimerFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARepellent_TimerFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARepellent_TimerFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARepellent_TimerFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARepellent);
	UClass* Z_Construct_UClass_ARepellent_NoRegister()
	{
		return ARepellent::StaticClass();
	}
	struct Z_Construct_UClass_ARepellent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARepellent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeaOfMemory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARepellent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARepellent_TimerFunction, "TimerFunction" }, // 2888267400
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARepellent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Repellent.h" },
		{ "ModuleRelativePath", "Public/Repellent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARepellent_Statics::NewProp_EffectComponent_MetaData[] = {
		{ "Category", "Niagara" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Repellent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARepellent_Statics::NewProp_EffectComponent = { "EffectComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARepellent, EffectComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARepellent_Statics::NewProp_EffectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARepellent_Statics::NewProp_EffectComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARepellent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARepellent_Statics::NewProp_EffectComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARepellent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepellent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARepellent_Statics::ClassParams = {
		&ARepellent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARepellent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARepellent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARepellent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARepellent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARepellent()
	{
		if (!Z_Registration_Info_UClass_ARepellent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARepellent.OuterSingleton, Z_Construct_UClass_ARepellent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARepellent.OuterSingleton;
	}
	template<> SEAOFMEMORY_API UClass* StaticClass<ARepellent>()
	{
		return ARepellent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARepellent);
	ARepellent::~ARepellent() {}
	struct Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_Repellent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_Repellent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARepellent, ARepellent::StaticClass, TEXT("ARepellent"), &Z_Registration_Info_UClass_ARepellent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARepellent), 1409801466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_Repellent_h_1794390661(TEXT("/Script/SeaOfMemory"),
		Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_Repellent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SeaOfMemory_SeaOfMemory_Source_SeaOfMemory_Public_Repellent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
