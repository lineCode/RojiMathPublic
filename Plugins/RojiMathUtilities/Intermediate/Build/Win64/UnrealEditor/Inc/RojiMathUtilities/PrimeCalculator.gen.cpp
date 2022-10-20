// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RojiMathUtilities/Public/PrimeCalculator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimeCalculator() {}
// Cross Module References
	ROJIMATHUTILITIES_API UClass* Z_Construct_UClass_APrimeCalculator_NoRegister();
	ROJIMATHUTILITIES_API UClass* Z_Construct_UClass_APrimeCalculator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RojiMathUtilities();
// End Cross Module References
	void APrimeCalculator::StaticRegisterNativesAPrimeCalculator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrimeCalculator);
	UClass* Z_Construct_UClass_APrimeCalculator_NoRegister()
	{
		return APrimeCalculator::StaticClass();
	}
	struct Z_Construct_UClass_APrimeCalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrimeCalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RojiMathUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrimeCalculator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PrimeCalculator.h" },
		{ "ModuleRelativePath", "Public/PrimeCalculator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrimeCalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrimeCalculator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrimeCalculator_Statics::ClassParams = {
		&APrimeCalculator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrimeCalculator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrimeCalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrimeCalculator()
	{
		if (!Z_Registration_Info_UClass_APrimeCalculator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrimeCalculator.OuterSingleton, Z_Construct_UClass_APrimeCalculator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrimeCalculator.OuterSingleton;
	}
	template<> ROJIMATHUTILITIES_API UClass* StaticClass<APrimeCalculator>()
	{
		return APrimeCalculator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimeCalculator);
	struct Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_PrimeCalculator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_PrimeCalculator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrimeCalculator, APrimeCalculator::StaticClass, TEXT("APrimeCalculator"), &Z_Registration_Info_UClass_APrimeCalculator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrimeCalculator), 3043467220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_PrimeCalculator_h_1234918945(TEXT("/Script/RojiMathUtilities"),
		Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_PrimeCalculator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_PrimeCalculator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
