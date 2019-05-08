// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyTaxiProcGen/MazeGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMazeGenerator() {}
// Cross Module References
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_AMazeGenerator_NoRegister();
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_AMazeGenerator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrazyTaxiProcGen();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMazeGenerator::StaticRegisterNativesAMazeGenerator()
	{
	}
	UClass* Z_Construct_UClass_AMazeGenerator_NoRegister()
	{
		return AMazeGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AMazeGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowLoopPaths_MetaData[];
#endif
		static void NewProp_AllowLoopPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowLoopPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowMaze_MetaData[];
#endif
		static void NewProp_ShowMaze_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowMaze;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowBoarder_MetaData[];
#endif
		static void NewProp_ShowBoarder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowBoarder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MazeMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MazeMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMazeGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyTaxiProcGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MazeGenerator.h" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths_SetBit(void* Obj)
	{
		((AMazeGenerator*)Obj)->AllowLoopPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths = { UE4CodeGen_Private::EPropertyClass::Bool, "AllowLoopPaths", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze_SetBit(void* Obj)
	{
		((AMazeGenerator*)Obj)->ShowMaze = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze = { UE4CodeGen_Private::EPropertyClass::Bool, "ShowMaze", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder_SetBit(void* Obj)
	{
		((AMazeGenerator*)Obj)->ShowBoarder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder = { UE4CodeGen_Private::EPropertyClass::Bool, "ShowBoarder", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMazeGenerator), &Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::NewProp_InitialSeed_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_InitialSeed = { UE4CodeGen_Private::EPropertyClass::Struct, "InitialSeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AMazeGenerator, InitialSeed), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_InitialSeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_InitialSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Maze" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AMazeGenerator, Size), METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MazeMesh_MetaData[] = {
		{ "Category", "Maze" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MazeGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MazeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MazeMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AMazeGenerator, MazeMesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MazeMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MazeMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMazeGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_AllowLoopPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowMaze,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_ShowBoarder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_InitialSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMazeGenerator_Statics::NewProp_MazeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMazeGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMazeGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMazeGenerator_Statics::ClassParams = {
		&AMazeGenerator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMazeGenerator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMazeGenerator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMazeGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMazeGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMazeGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMazeGenerator, 3047099766);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMazeGenerator(Z_Construct_UClass_AMazeGenerator, &AMazeGenerator::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("AMazeGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMazeGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
