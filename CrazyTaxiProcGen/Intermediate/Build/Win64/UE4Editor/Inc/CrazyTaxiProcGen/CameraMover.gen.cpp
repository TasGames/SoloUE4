// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyTaxiProcGen/CameraMover.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraMover() {}
// Cross Module References
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACameraMover_NoRegister();
	CRAZYTAXIPROCGEN_API UClass* Z_Construct_UClass_ACameraMover();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CrazyTaxiProcGen();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ACameraMover::StaticRegisterNativesACameraMover()
	{
	}
	UClass* Z_Construct_UClass_ACameraMover_NoRegister()
	{
		return ACameraMover::StaticClass();
	}
	struct Z_Construct_UClass_ACameraMover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraMover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyTaxiProcGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMover_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraMover.h" },
		{ "ModuleRelativePath", "CameraMover.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraMover_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CameraMover.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraMover_Statics::NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ACameraMover, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraMover_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACameraMover_Statics::NewProp_Camera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraMover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraMover_Statics::NewProp_Camera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraMover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraMover>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraMover_Statics::ClassParams = {
		&ACameraMover::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ACameraMover_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ACameraMover_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ACameraMover_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACameraMover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraMover()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraMover_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraMover, 1351233158);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraMover(Z_Construct_UClass_ACameraMover, &ACameraMover::StaticClass, TEXT("/Script/CrazyTaxiProcGen"), TEXT("ACameraMover"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraMover);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
