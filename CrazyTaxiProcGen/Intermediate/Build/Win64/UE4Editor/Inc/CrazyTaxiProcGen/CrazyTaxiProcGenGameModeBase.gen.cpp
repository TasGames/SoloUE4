// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyTaxiProcGen/CrazyTaxiProcGenGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrazyTaxiProcGenGameModeBase() {}
// Cross Module References
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_NoRegister();
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrazyTaxiProcGen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ACrazyTaxiProcGenGameModeBase::StaticRegisterNativesACrazyTaxiProcGenGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_NoRegister()
	{
		return ACrazyTaxiProcGenGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHUDClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyTaxiProcGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrazyTaxiProcGenGameModeBase.h" },
		{ "ModuleRelativePath", "CrazyTaxiProcGenGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CrazyTaxiProcGenGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ACrazyTaxiProcGenGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_CurrentWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_PlayerHUDClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "CrazyTaxiProcGenGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_PlayerHUDClass = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerHUDClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000010005, 1, nullptr, STRUCT_OFFSET(ACrazyTaxiProcGenGameModeBase, PlayerHUDClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_PlayerHUDClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_PlayerHUDClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_CurrentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::NewProp_PlayerHUDClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrazyTaxiProcGenGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::ClassParams = {
		&ACrazyTaxiProcGenGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrazyTaxiProcGenGameModeBase, 2956405019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrazyTaxiProcGenGameModeBase(Z_Construct_UClass_ACrazyTaxiProcGenGameModeBase, &ACrazyTaxiProcGenGameModeBase::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("ACrazyTaxiProcGenGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrazyTaxiProcGenGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
