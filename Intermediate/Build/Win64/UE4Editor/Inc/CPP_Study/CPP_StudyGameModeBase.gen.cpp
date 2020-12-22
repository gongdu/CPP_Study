// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_Study/CPP_StudyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_StudyGameModeBase() {}
// Cross Module References
	CPP_STUDY_API UClass* Z_Construct_UClass_ACPP_StudyGameModeBase_NoRegister();
	CPP_STUDY_API UClass* Z_Construct_UClass_ACPP_StudyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CPP_Study();
// End Cross Module References
	void ACPP_StudyGameModeBase::StaticRegisterNativesACPP_StudyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACPP_StudyGameModeBase_NoRegister()
	{
		return ACPP_StudyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_StudyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP_Study,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CPP_StudyGameModeBase.h" },
		{ "ModuleRelativePath", "CPP_StudyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_StudyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::ClassParams = {
		&ACPP_StudyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_StudyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_StudyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_StudyGameModeBase, 1332406594);
	template<> CPP_STUDY_API UClass* StaticClass<ACPP_StudyGameModeBase>()
	{
		return ACPP_StudyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_StudyGameModeBase(Z_Construct_UClass_ACPP_StudyGameModeBase, &ACPP_StudyGameModeBase::StaticClass, TEXT("/Script/CPP_Study"), TEXT("ACPP_StudyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_StudyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
