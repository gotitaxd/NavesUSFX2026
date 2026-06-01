// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVESUSFX2026_InterfazObserver_generated_h
#error "InterfazObserver.generated.h already included, missing '#pragma once' in InterfazObserver.h"
#endif
#define NAVESUSFX2026_InterfazObserver_generated_h

#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_SPARSE_DATA
#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_RPC_WRAPPERS
#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UInterfazObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfazObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UInterfazObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfazObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UInterfazObserver(UInterfazObserver&&); \
	NAVESUSFX2026_API UInterfazObserver(const UInterfazObserver&); \
public:


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UInterfazObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UInterfazObserver(UInterfazObserver&&); \
	NAVESUSFX2026_API UInterfazObserver(const UInterfazObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UInterfazObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfazObserver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfazObserver)


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfazObserver(); \
	friend struct Z_Construct_UClass_UInterfazObserver_Statics; \
public: \
	DECLARE_CLASS(UInterfazObserver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavesUSFX2026"), NAVESUSFX2026_API) \
	DECLARE_SERIALIZER(UInterfazObserver)


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_GENERATED_UINTERFACE_BODY() \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_GENERATED_UINTERFACE_BODY() \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfazObserver() {} \
public: \
	typedef UInterfazObserver UClassType; \
	typedef IInterfazObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterfazObserver() {} \
public: \
	typedef UInterfazObserver UClassType; \
	typedef IInterfazObserver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_9_PROLOG
#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_SPARSE_DATA \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_RPC_WRAPPERS \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_SPARSE_DATA \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVESUSFX2026_API UClass* StaticClass<class UInterfazObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavesUSFX2026_master_Source_NavesUSFX2026_InterfazObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
