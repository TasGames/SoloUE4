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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACell_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_cellClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerateGrid_Statics::NewProp_cellClass_MetaData[] = {
		{ "Category", "Cell" },
		{ "ModuleRelativePath", "GenerateGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGenerateGrid_Statics::NewProp_cellClass = { UE4CodeGen_Private::EPropertyClass::Class, "cellClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AGenerateGrid, cellClass), Z_Construct_UClass_ACell_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGenerateGrid_Statics::NewProp_cellClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGenerateGrid_Statics::NewProp_cellClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGenerateGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGenerateGrid_Statics::NewProp_cellClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerateGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerateGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenerateGrid_Statics::ClassParams = {
		&AGenerateGrid::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AGenerateGrid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AGenerateGrid_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AGenerateGrid, 2367340394);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenerateGrid(Z_Construct_UClass_AGenerateGrid, &AGenerateGrid::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("AGenerateGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerateGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
