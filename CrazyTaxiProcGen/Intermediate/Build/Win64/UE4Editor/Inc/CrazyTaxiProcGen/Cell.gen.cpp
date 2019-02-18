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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACell>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACell_Statics::ClassParams = {
		&ACell::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(ACell, 2405390364);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACell(Z_Construct_UClass_ACell, &ACell::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("ACell"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACell);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
