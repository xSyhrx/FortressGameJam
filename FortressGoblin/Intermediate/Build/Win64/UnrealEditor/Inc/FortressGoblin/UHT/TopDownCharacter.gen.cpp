// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortressGoblin/TopDownCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	FORTRESSGOBLIN_API UClass* Z_Construct_UClass_ATopDownCharacter();
	FORTRESSGOBLIN_API UClass* Z_Construct_UClass_ATopDownCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortressGoblin();
// End Cross Module References
	void ATopDownCharacter::StaticRegisterNativesATopDownCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopDownCharacter);
	UClass* Z_Construct_UClass_ATopDownCharacter_NoRegister()
	{
		return ATopDownCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopDownCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopDownCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FortressGoblin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopDownCharacter.h" },
		{ "ModuleRelativePath", "TopDownCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopDownCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopDownCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopDownCharacter_Statics::ClassParams = {
		&ATopDownCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopDownCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATopDownCharacter()
	{
		if (!Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton, Z_Construct_UClass_ATopDownCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopDownCharacter.OuterSingleton;
	}
	template<> FORTRESSGOBLIN_API UClass* StaticClass<ATopDownCharacter>()
	{
		return ATopDownCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopDownCharacter);
	ATopDownCharacter::~ATopDownCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_TopDownCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_TopDownCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopDownCharacter, ATopDownCharacter::StaticClass, TEXT("ATopDownCharacter"), &Z_Registration_Info_UClass_ATopDownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopDownCharacter), 2207915421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_TopDownCharacter_h_3382037626(TEXT("/Script/FortressGoblin"),
		Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_TopDownCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_TopDownCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
