// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyTaxiProcGen/GenerateGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateGrid() {}
// Cross Module References
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_AGenerateGrid_NoRegister();
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_AGenerateGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrazyTaxiProcGen();
// End Cross Module References
	void AGenerateGrid::StaticRegisterNativesAGenerateGrid()
	{
	}
	UClass* Z_Construct_UClass_AGenerateGrid_NoRegister()
	{
		return AGenerateGrid::StaticClass();
	}
	struct Z_Construct_UClass_AGenerateGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenerateGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyTaxiProcGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerateGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GenerateGrid.h" },
		{ "ModuleRelativePath", "GenerateGrid.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerateGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerateGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenerateGrid_Statics::ClassParams = {
		&AGenerateGrid::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AGenerateGrid_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGenerateGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenerateGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenerateGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenerateGrid, 2876438858);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenerateGrid(Z_Construct_UClass_AGenerateGrid, &AGenerateGrid::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("AGenerateGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerateGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
