// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/InterfazObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfazObserver() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UInterfazObserver_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UInterfazObserver();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
// End Cross Module References
	void UInterfazObserver::StaticRegisterNativesUInterfazObserver()
	{
	}
	UClass* Z_Construct_UClass_UInterfazObserver_NoRegister()
	{
		return UInterfazObserver::StaticClass();
	}
	struct Z_Construct_UClass_UInterfazObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfazObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfazObserver_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfazObserver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfazObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfazObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfazObserver_Statics::ClassParams = {
		&UInterfazObserver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterfazObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfazObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfazObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfazObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfazObserver, 2735532897);
	template<> NAVESUSFX2026_API UClass* StaticClass<UInterfazObserver>()
	{
		return UInterfazObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfazObserver(Z_Construct_UClass_UInterfazObserver, &UInterfazObserver::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("UInterfazObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfazObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
