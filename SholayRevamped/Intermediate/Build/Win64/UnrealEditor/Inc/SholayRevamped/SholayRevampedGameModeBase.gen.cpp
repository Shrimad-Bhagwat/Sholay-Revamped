// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SholayRevamped/SholayRevampedGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSholayRevampedGameModeBase() {}
// Cross Module References
	SHOLAYREVAMPED_API UClass* Z_Construct_UClass_ASholayRevampedGameModeBase_NoRegister();
	SHOLAYREVAMPED_API UClass* Z_Construct_UClass_ASholayRevampedGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SholayRevamped();
// End Cross Module References
	void ASholayRevampedGameModeBase::StaticRegisterNativesASholayRevampedGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASholayRevampedGameModeBase);
	UClass* Z_Construct_UClass_ASholayRevampedGameModeBase_NoRegister()
	{
		return ASholayRevampedGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASholayRevampedGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SholayRevamped,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SholayRevampedGameModeBase.h" },
		{ "ModuleRelativePath", "SholayRevampedGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASholayRevampedGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::ClassParams = {
		&ASholayRevampedGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASholayRevampedGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASholayRevampedGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASholayRevampedGameModeBase.OuterSingleton, Z_Construct_UClass_ASholayRevampedGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASholayRevampedGameModeBase.OuterSingleton;
	}
	template<> SHOLAYREVAMPED_API UClass* StaticClass<ASholayRevampedGameModeBase>()
	{
		return ASholayRevampedGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASholayRevampedGameModeBase);
	struct Z_CompiledInDeferFile_FID_SholayRevamped_Source_SholayRevamped_SholayRevampedGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SholayRevamped_Source_SholayRevamped_SholayRevampedGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASholayRevampedGameModeBase, ASholayRevampedGameModeBase::StaticClass, TEXT("ASholayRevampedGameModeBase"), &Z_Registration_Info_UClass_ASholayRevampedGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASholayRevampedGameModeBase), 3258549764U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SholayRevamped_Source_SholayRevamped_SholayRevampedGameModeBase_h_4131779986(TEXT("/Script/SholayRevamped"),
		Z_CompiledInDeferFile_FID_SholayRevamped_Source_SholayRevamped_SholayRevampedGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SholayRevamped_Source_SholayRevamped_SholayRevampedGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
