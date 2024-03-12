// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ByteDev/Public/NewTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewTest() {}
// Cross Module References
	BYTEDEV_API UClass* Z_Construct_UClass_UNewTest();
	BYTEDEV_API UClass* Z_Construct_UClass_UNewTest_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ByteDev();
// End Cross Module References
	void UNewTest::StaticRegisterNativesUNewTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewTest);
	UClass* Z_Construct_UClass_UNewTest_NoRegister()
	{
		return UNewTest::StaticClass();
	}
	struct Z_Construct_UClass_UNewTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testvar_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_testvar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ByteDev,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewTest.h" },
		{ "ModuleRelativePath", "Public/NewTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewTest_Statics::NewProp_testvar_MetaData[] = {
		{ "Category", "NewTest" },
		{ "ModuleRelativePath", "Public/NewTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNewTest_Statics::NewProp_testvar = { "testvar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNewTest, testvar), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewTest_Statics::NewProp_testvar_MetaData), Z_Construct_UClass_UNewTest_Statics::NewProp_testvar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewTest_Statics::NewProp_testvar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewTest_Statics::ClassParams = {
		&UNewTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNewTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewTest_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNewTest_Statics::Class_MetaDataParams), Z_Construct_UClass_UNewTest_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNewTest_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UNewTest()
	{
		if (!Z_Registration_Info_UClass_UNewTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewTest.OuterSingleton, Z_Construct_UClass_UNewTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewTest.OuterSingleton;
	}
	template<> BYTEDEV_API UClass* StaticClass<UNewTest>()
	{
		return UNewTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewTest);
	UNewTest::~UNewTest() {}
	struct Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_Public_NewTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_Public_NewTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewTest, UNewTest::StaticClass, TEXT("UNewTest"), &Z_Registration_Info_UClass_UNewTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewTest), 4269206766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_Public_NewTest_h_3462120324(TEXT("/Script/ByteDev"),
		Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_Public_NewTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_itsalank_Documents_MSc_Games_and_XR_software_engineering_Byte_Modular_ByteDev_Source_ByteDev_Public_NewTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
