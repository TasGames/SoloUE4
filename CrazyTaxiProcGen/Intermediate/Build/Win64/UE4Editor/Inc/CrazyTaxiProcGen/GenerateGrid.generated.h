// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRAZYTAXIPROCGEN_GenerateGrid_generated_h
#error "GenerateGrid.generated.h already included, missing '#pragma once' in GenerateGrid.h"
#endif
#define CRAZYTAXIPROCGEN_GenerateGrid_generated_h

#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Regenerate(); \
		P_NATIVE_END; \
	}


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegenerate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Regenerate(); \
		P_NATIVE_END; \
	}


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGenerateGrid(); \
	friend struct Z_Construct_UClass_AGenerateGrid_Statics; \
public: \
	DECLARE_CLASS(AGenerateGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyTaxiProcGen"), NO_API) \
	DECLARE_SERIALIZER(AGenerateGrid)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGenerateGrid(); \
	friend struct Z_Construct_UClass_AGenerateGrid_Statics; \
public: \
	DECLARE_CLASS(AGenerateGrid, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyTaxiProcGen"), NO_API) \
	DECLARE_SERIALIZER(AGenerateGrid)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGenerateGrid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGenerateGrid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerateGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerateGrid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenerateGrid(AGenerateGrid&&); \
	NO_API AGenerateGrid(const AGenerateGrid&); \
public:


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGenerateGrid(AGenerateGrid&&); \
	NO_API AGenerateGrid(const AGenerateGrid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGenerateGrid); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGenerateGrid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGenerateGrid)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__cellClass() { return STRUCT_OFFSET(AGenerateGrid, cellClass); }


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_10_PROLOG
#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_RPC_WRAPPERS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_INCLASS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_PRIVATE_PROPERTY_OFFSET \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_INCLASS_NO_PURE_DECLS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrazyTaxiProcGen_Source_CrazyTaxiProcGen_GenerateGrid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
