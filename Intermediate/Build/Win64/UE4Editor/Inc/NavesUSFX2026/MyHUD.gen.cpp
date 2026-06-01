// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/MyHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AMyHUD_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AMyHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	DEFINE_FUNCTION(AMyHUD::execOnPuntajeCambiado)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NuevoPuntaje);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPuntajeCambiado(Z_Param_NuevoPuntaje);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyHUD::execOnVidaCambiada)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NuevaVida);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVidaCambiada(Z_Param_NuevaVida);
		P_NATIVE_END;
	}
	void AMyHUD::StaticRegisterNativesAMyHUD()
	{
		UClass* Class = AMyHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPuntajeCambiado", &AMyHUD::execOnPuntajeCambiado },
			{ "OnVidaCambiada", &AMyHUD::execOnVidaCambiada },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics
	{
		struct MyHUD_eventOnPuntajeCambiado_Parms
		{
			int32 NuevoPuntaje;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NuevoPuntaje;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::NewProp_NuevoPuntaje = { "NuevoPuntaje", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyHUD_eventOnPuntajeCambiado_Parms, NuevoPuntaje), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::NewProp_NuevoPuntaje,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "OnPuntajeCambiado", nullptr, nullptr, sizeof(MyHUD_eventOnPuntajeCambiado_Parms), Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics
	{
		struct MyHUD_eventOnVidaCambiada_Parms
		{
			float NuevaVida;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NuevaVida;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::NewProp_NuevaVida = { "NuevaVida", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyHUD_eventOnVidaCambiada_Parms, NuevaVida), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::NewProp_NuevaVida,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Estas son las funciones \"Observadoras\" (reaccionar?n autom?ticamente)\n" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ToolTip", "Estas son las funciones \"Observadoras\" (reaccionar?n autom?ticamente)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyHUD, nullptr, "OnVidaCambiada", nullptr, nullptr, sizeof(MyHUD_eventOnVidaCambiada_Parms), Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyHUD_OnVidaCambiada()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyHUD_OnVidaCambiada_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyHUD_NoRegister()
	{
		return AMyHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyHUD_OnPuntajeCambiado, "OnPuntajeCambiado" }, // 737243252
		{ &Z_Construct_UFunction_AMyHUD_OnVidaCambiada, "OnVidaCambiada" }, // 914160818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MyHUD.h" },
		{ "ModuleRelativePath", "MyHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_Statics::ClassParams = {
		&AMyHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyHUD, 2589269474);
	template<> NAVESUSFX2026_API UClass* StaticClass<AMyHUD>()
	{
		return AMyHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyHUD(Z_Construct_UClass_AMyHUD, &AMyHUD::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AMyHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
