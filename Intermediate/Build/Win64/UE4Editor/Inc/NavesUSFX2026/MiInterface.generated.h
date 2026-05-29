// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVESUSFX2026_MiInterface_generated_h
#error "MiInterface.generated.h already included, missing '#pragma once' in MiInterface.h"
#endif
#define NAVESUSFX2026_MiInterface_generated_h

#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_SPARSE_DATA
#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_RPC_WRAPPERS
#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UMiInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UMiInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UMiInterface(UMiInterface&&); \
	NAVESUSFX2026_API UMiInterface(const UMiInterface&); \
public:


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UMiInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UMiInterface(UMiInterface&&); \
	NAVESUSFX2026_API UMiInterface(const UMiInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UMiInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMiInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMiInterface)


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMiInterface(); \
	friend struct Z_Construct_UClass_UMiInterface_Statics; \
public: \
	DECLARE_CLASS(UMiInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavesUSFX2026"), NAVESUSFX2026_API) \
	DECLARE_SERIALIZER(UMiInterface)


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_GENERATED_UINTERFACE_BODY() \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_GENERATED_UINTERFACE_BODY() \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMiInterface() {} \
public: \
	typedef UMiInterface UClassType; \
	typedef IMiInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IMiInterface() {} \
public: \
	typedef UMiInterface UClassType; \
	typedef IMiInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_10_PROLOG
#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_SPARSE_DATA \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_RPC_WRAPPERS \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_SPARSE_DATA \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVESUSFX2026_API UClass* StaticClass<class UMiInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavesUSFX2026_master_Source_NavesUSFX2026_MiInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
