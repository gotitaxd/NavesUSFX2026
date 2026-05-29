// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/EnemigoAnimal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAnimal() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AEnemigoAnimal_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AEnemigoAnimal();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemigoAnimal::StaticRegisterNativesAEnemigoAnimal()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAnimal_NoRegister()
	{
		return AEnemigoAnimal::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaCilindro_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaCilindro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoAnimal.h" },
		{ "ModuleRelativePath", "EnemigoAnimal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAnimal_Statics::NewProp_mallaCilindro_MetaData[] = {
		{ "Category", "EnemigoAnimal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoAnimal_Statics::NewProp_mallaCilindro = { "mallaCilindro", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAnimal, mallaCilindro), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoAnimal_Statics::NewProp_mallaCilindro_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimal_Statics::NewProp_mallaCilindro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAnimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAnimal_Statics::NewProp_mallaCilindro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAnimal_Statics::ClassParams = {
		&AEnemigoAnimal::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAnimal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAnimal, 1090192564);
	template<> NAVESUSFX2026_API UClass* StaticClass<AEnemigoAnimal>()
	{
		return AEnemigoAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAnimal(Z_Construct_UClass_AEnemigoAnimal, &AEnemigoAnimal::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AEnemigoAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
