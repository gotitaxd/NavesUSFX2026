// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/ConBuilderFacil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConBuilderFacil() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AConBuilderFacil_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AConBuilderFacil();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UBuilder_NoRegister();
// End Cross Module References
	void AConBuilderFacil::StaticRegisterNativesAConBuilderFacil()
	{
	}
	UClass* Z_Construct_UClass_AConBuilderFacil_NoRegister()
	{
		return AConBuilderFacil::StaticClass();
	}
	struct Z_Construct_UClass_AConBuilderFacil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConBuilderFacil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConBuilderFacil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConBuilderFacil.h" },
		{ "ModuleRelativePath", "ConBuilderFacil.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConBuilderFacil_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilder_NoRegister, (int32)VTABLE_OFFSET(AConBuilderFacil, IBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConBuilderFacil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConBuilderFacil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConBuilderFacil_Statics::ClassParams = {
		&AConBuilderFacil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConBuilderFacil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConBuilderFacil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConBuilderFacil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConBuilderFacil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConBuilderFacil, 173719799);
	template<> NAVESUSFX2026_API UClass* StaticClass<AConBuilderFacil>()
	{
		return AConBuilderFacil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConBuilderFacil(Z_Construct_UClass_AConBuilderFacil, &AConBuilderFacil::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AConBuilderFacil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConBuilderFacil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
