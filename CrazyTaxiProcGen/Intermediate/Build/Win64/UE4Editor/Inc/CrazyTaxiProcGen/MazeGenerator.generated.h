// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRAZYTAXIPROCGEN_MazeGenerator_generated_h
#error "MazeGenerator.generated.h already included, missing '#pragma once' in MazeGenerator.h"
#endif
#define CRAZYTAXIPROCGEN_MazeGenerator_generated_h

#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Construction(); \
		P_NATIVE_END; \
	}


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstruction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Construction(); \
		P_NATIVE_END; \
	}


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMazeGenerator(); \
	friend struct Z_Construct_UClass_AMazeGenerator_Statics; \
public: \
	DECLARE_CLASS(AMazeGenerator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyTaxiProcGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeGenerator)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMazeGenerator(); \
	friend struct Z_Construct_UClass_AMazeGenerator_Statics; \
public: \
	DECLARE_CLASS(AMazeGenerator, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrazyTaxiProcGen"), NO_API) \
	DECLARE_SERIALIZER(AMazeGenerator)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMazeGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMazeGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGenerator(AMazeGenerator&&); \
	NO_API AMazeGenerator(const AMazeGenerator&); \
public:


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMazeGenerator(AMazeGenerator&&); \
	NO_API AMazeGenerator(const AMazeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMazeGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMazeGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMazeGenerator)


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MazeMesh() { return STRUCT_OFFSET(AMazeGenerator, MazeMesh); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(AMazeGenerator, Size); } \
	FORCEINLINE static uint32 __PPO__InitialSeed() { return STRUCT_OFFSET(AMazeGenerator, InitialSeed); } \
	FORCEINLINE static uint32 __PPO__ShowBoarder() { return STRUCT_OFFSET(AMazeGenerator, ShowBoarder); } \
	FORCEINLINE static uint32 __PPO__ShowMaze() { return STRUCT_OFFSET(AMazeGenerator, ShowMaze); } \
	FORCEINLINE static uint32 __PPO__AllowLoopPaths() { return STRUCT_OFFSET(AMazeGenerator, AllowLoopPaths); }


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_9_PROLOG
#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_RPC_WRAPPERS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_INCLASS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_PRIVATE_PROPERTY_OFFSET \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_INCLASS_NO_PURE_DECLS \
	CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrazyTaxiProcGen_Source_CrazyTaxiProcGen_MazeGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
