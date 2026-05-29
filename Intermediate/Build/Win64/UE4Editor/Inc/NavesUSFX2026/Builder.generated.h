// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVESUSFX2026_Builder_generated_h
#error "Builder.generated.h already included, missing '#pragma once' in Builder.h"
#endif
#define NAVESUSFX2026_Builder_generated_h

#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_SPARSE_DATA
#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_RPC_WRAPPERS
#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UBuilder(UBuilder&&); \
	NAVESUSFX2026_API UBuilder(const UBuilder&); \
public:


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UBuilder(UBuilder&&); \
	NAVESUSFX2026_API UBuilder(const UBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuilder); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuilder)


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBuilder(); \
	friend struct Z_Construct_UClass_UBuilder_Statics; \
public: \
	DECLARE_CLASS(UBuilder, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavesUSFX2026"), NAVESUSFX2026_API) \
	DECLARE_SERIALIZER(UBuilder)


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_GENERATED_UINTERFACE_BODY() \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_GENERATED_UINTERFACE_BODY() \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBuilder() {} \
public: \
	typedef UBuilder UClassType; \
	typedef IBuilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBuilder() {} \
public: \
	typedef UBuilder UClassType; \
	typedef IBuilder ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_10_PROLOG
#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_SPARSE_DATA \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_RPC_WRAPPERS \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_SPARSE_DATA \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVESUSFX2026_API UClass* StaticClass<class UBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NavesUSFX2026_master_Source_NavesUSFX2026_Builder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
