// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CRAZYTAXIPROCGEN_EndGoal_generated_h
#error "EndGoal.generated.h already included, missing '#pragma once' in EndGoal.h"
#endif
#define CRAZYTAXIPROCGEN_EndGoal_generated_h

#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEndGoal(); \
	friend struct Z_Construct_UClass_AEndGoal_Statics; \
public: \
	DECLARE_CLASS(AEndGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyTaxiProcGen"), NO_API) \
	DECLARE_SERIALIZER(AEndGoal)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAEndGoal(); \
	friend struct Z_Construct_UClass_AEndGoal_Statics; \
public: \
	DECLARE_CLASS(AEndGoal, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyTaxiProcGen"), NO_API) \
	DECLARE_SERIALIZER(AEndGoal)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEndGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEndGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndGoal(AEndGoal&&); \
	NO_API AEndGoal(const AEndGoal&); \
public:


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEndGoal(AEndGoal&&); \
	NO_API AEndGoal(const AEndGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEndGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEndGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEndGoal)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(AEndGoal, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AEndGoal, Mesh); }


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_10_PROLOG
#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_PRIVATE_PROPERTY_OFFSET \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_RPC_WRAPPERS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_INCLASS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_PRIVATE_PROPERTY_OFFSET \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_INCLASS_NO_PURE_DECLS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrazyTaxiProcGen_Source_CrazyTaxiProcGen_EndGoal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
