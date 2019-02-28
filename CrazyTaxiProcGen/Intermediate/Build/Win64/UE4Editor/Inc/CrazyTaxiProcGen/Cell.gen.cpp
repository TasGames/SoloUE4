// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyTaxiProcGen/Cell.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCell() {}
// Cross Module References
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACell_NoRegister();
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACell();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrazyTaxiProcGen();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ACell::StaticRegisterNativesACell()
	{
	}
	UClass* Z_Construct_UClass_ACell_NoRegister()
	{
		return ACell::StaticClass();
	}
	struct Z_Construct_UClass_ACell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellMeshBuilding_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cellMeshBuilding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellMeshRoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cellMeshRoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cellMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gridMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gridMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyTaxiProcGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cell.h" },
		{ "ModuleRelativePath", "Cell.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_cellMeshBuilding_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_cellMeshBuilding = { UE4CodeGen_Private::EPropertyClass::Object, "cellMeshBuilding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(ACell, cellMeshBuilding), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACell_Statics::NewProp_cellMeshBuilding_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_cellMeshBuilding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_cellMeshRoad_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_cellMeshRoad = { UE4CodeGen_Private::EPropertyClass::Object, "cellMeshRoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(ACell, cellMeshRoad), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACell_Statics::NewProp_cellMeshRoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_cellMeshRoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_cellMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_cellMesh = { UE4CodeGen_Private::EPropertyClass::Object, "cellMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(ACell, cellMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACell_Statics::NewProp_cellMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_cellMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACell_Statics::NewProp_gridMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cell.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACell_Statics::NewProp_gridMesh = { UE4CodeGen_Private::EPropertyClass::Object, "gridMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(ACell, gridMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACell_Statics::NewProp_gridMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::NewProp_gridMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACell_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_cellMeshBuilding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_cellMeshRoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_cellMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACell_Statics::NewProp_gridMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACell_Statics::ClassParams = {
		&ACell::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACell_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACell_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACell()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACell_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACell, 2162290597);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACell(Z_Construct_UClass_ACell, &ACell::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("ACell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
