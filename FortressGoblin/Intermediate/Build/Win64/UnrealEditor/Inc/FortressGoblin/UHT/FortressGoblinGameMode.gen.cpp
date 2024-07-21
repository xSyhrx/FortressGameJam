// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FortressGoblin/FortressGoblinGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFortressGoblinGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FORTRESSGOBLIN_API UClass* Z_Construct_UClass_AFortressGoblinGameMode();
	FORTRESSGOBLIN_API UClass* Z_Construct_UClass_AFortressGoblinGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FortressGoblin();
// End Cross Module References
	void AFortressGoblinGameMode::StaticRegisterNativesAFortressGoblinGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFortressGoblinGameMode);
	UClass* Z_Construct_UClass_AFortressGoblinGameMode_NoRegister()
	{
		return AFortressGoblinGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFortressGoblinGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFortressGoblinGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FortressGoblin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFortressGoblinGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFortressGoblinGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FortressGoblinGameMode.h" },
		{ "ModuleRelativePath", "FortressGoblinGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFortressGoblinGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFortressGoblinGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFortressGoblinGameMode_Statics::ClassParams = {
		&AFortressGoblinGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFortressGoblinGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFortressGoblinGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFortressGoblinGameMode()
	{
		if (!Z_Registration_Info_UClass_AFortressGoblinGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFortressGoblinGameMode.OuterSingleton, Z_Construct_UClass_AFortressGoblinGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFortressGoblinGameMode.OuterSingleton;
	}
	template<> FORTRESSGOBLIN_API UClass* StaticClass<AFortressGoblinGameMode>()
	{
		return AFortressGoblinGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFortressGoblinGameMode);
	AFortressGoblinGameMode::~AFortressGoblinGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_FortressGoblinGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_FortressGoblinGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFortressGoblinGameMode, AFortressGoblinGameMode::StaticClass, TEXT("AFortressGoblinGameMode"), &Z_Registration_Info_UClass_AFortressGoblinGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFortressGoblinGameMode), 1107231582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_FortressGoblinGameMode_h_2193408340(TEXT("/Script/FortressGoblin"),
		Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_FortressGoblinGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_s220297_Documents_FortressGameJam_FortressGoblin_Source_FortressGoblin_FortressGoblinGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
