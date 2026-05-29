// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/EnemigoAlien.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoAlien() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AEnemigoAlien_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AEnemigoAlien();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AEnemigoAlien::StaticRegisterNativesAEnemigoAlien()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoAlien_NoRegister()
	{
		return AEnemigoAlien::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoAlien_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaEnemigo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoAlien_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAlien_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoAlien.h" },
		{ "ModuleRelativePath", "EnemigoAlien.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoAlien_Statics::NewProp_mallaEnemigo_MetaData[] = {
		{ "Category", "EnemigoAlien" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoAlien.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoAlien_Statics::NewProp_mallaEnemigo = { "mallaEnemigo", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoAlien, mallaEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoAlien_Statics::NewProp_mallaEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAlien_Statics::NewProp_mallaEnemigo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoAlien_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoAlien_Statics::NewProp_mallaEnemigo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoAlien_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoAlien>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoAlien_Statics::ClassParams = {
		&AEnemigoAlien::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoAlien_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAlien_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoAlien_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoAlien_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoAlien()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoAlien_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoAlien, 2442477171);
	template<> NAVESUSFX2026_API UClass* StaticClass<AEnemigoAlien>()
	{
		return AEnemigoAlien::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoAlien(Z_Construct_UClass_AEnemigoAlien, &AEnemigoAlien::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("AEnemigoAlien"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoAlien);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
