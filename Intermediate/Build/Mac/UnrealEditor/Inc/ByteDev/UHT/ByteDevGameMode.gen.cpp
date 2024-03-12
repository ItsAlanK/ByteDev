// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ByteDev/ByteDevGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeByteDevGameMode() {}
// Cross Module References
	BYTEDEV_API UClass* Z_Construct_UClass_AByteDevGameMode();
	BYTEDEV_API UClass* Z_Construct_UClass_AByteDevGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ByteDev();
// End Cross Module References
	void AByteDevGameMode::StaticRegisterNativesAByteDevGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AByteDevGameMode);
	UClass* Z_Construct_UClass_AByteDevGameMode_NoRegister()
	{
		return AByteDevGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AByteDevGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AByteDevGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ByteDev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AByteDevGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AByteDevGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ByteDevGameMode.h" },
		{ "ModuleRelativePath", "ByteDevGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AByteDevGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AByteDevGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AByteDevGameMode_Statics::ClassParams = {
		&AByteDevGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AByteDevGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AByteDevGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AByteDevGameMode()
	{
		if (!Z_Registration_Info_UClass_AByteDevGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AByteDevGameMode.OuterSingleton, Z_Construct_UClass_AByteDevGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AByteDevGameMode.OuterSingleton;
	}
	template<> BYTEDEV_API UClass* StaticClass<AByteDevGameMode>()
	{
		return AByteDevGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AByteDevGameMode);
	AByteDevGameMode::~AByteDevGameMode() {}
	struct Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_ByteDevGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_ByteDevGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AByteDevGameMode, AByteDevGameMode::StaticClass, TEXT("AByteDevGameMode"), &Z_Registration_Info_UClass_AByteDevGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AByteDevGameMode), 4107304564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_ByteDevGameMode_h_776101753(TEXT("/Script/ByteDev"),
		Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_ByteDevGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_ByteDevGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
