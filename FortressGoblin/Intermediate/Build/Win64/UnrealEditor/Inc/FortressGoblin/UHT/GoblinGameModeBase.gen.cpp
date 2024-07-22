// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortressGoblin/GoblinGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoblinGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FORTRESSGOBLIN_API UClass* Z_Construct_UClass_AGoblinGameModeBase();
	FORTRESSGOBLIN_API UClass* Z_Construct_UClass_AGoblinGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortressGoblin();
// End Cross Module References
	void AGoblinGameModeBase::StaticRegisterNativesAGoblinGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoblinGameModeBase);
	UClass* Z_Construct_UClass_AGoblinGameModeBase_NoRegister()
	{
		return AGoblinGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGoblinGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoblinGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FortressGoblin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoblinGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GoblinGameModeBase.h" },
		{ "ModuleRelativePath", "GoblinGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoblinGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoblinGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoblinGameModeBase_Statics::ClassParams = {
		&AGoblinGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoblinGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoblinGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGoblinGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGoblinGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoblinGameModeBase.OuterSingleton, Z_Construct_UClass_AGoblinGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoblinGameModeBase.OuterSingleton;
	}
	template<> FORTRESSGOBLIN_API UClass* StaticClass<AGoblinGameModeBase>()
	{
		return AGoblinGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoblinGameModeBase);
	AGoblinGameModeBase::~AGoblinGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_s220632_Documents_GitHub_FortressGameJam_FortressGoblin_Source_FortressGoblin_GoblinGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s220632_Documents_GitHub_FortressGameJam_FortressGoblin_Source_FortressGoblin_GoblinGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoblinGameModeBase, AGoblinGameModeBase::StaticClass, TEXT("AGoblinGameModeBase"), &Z_Registration_Info_UClass_AGoblinGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoblinGameModeBase), 3751792575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s220632_Documents_GitHub_FortressGameJam_FortressGoblin_Source_FortressGoblin_GoblinGameModeBase_h_1852218538(TEXT("/Script/FortressGoblin"),
		Z_CompiledInDeferFile_FID_Users_s220632_Documents_GitHub_FortressGameJam_FortressGoblin_Source_FortressGoblin_GoblinGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s220632_Documents_GitHub_FortressGameJam_FortressGoblin_Source_FortressGoblin_GoblinGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
