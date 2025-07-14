// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VWRArchvizProject/VWRArchvizConfigInit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWRArchvizConfigInit() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_VWRArchvizProject();
VWRARCHVIZPROJECT_API UClass* Z_Construct_UClass_AVWRArchvizConfigInit();
VWRARCHVIZPROJECT_API UClass* Z_Construct_UClass_AVWRArchvizConfigInit_NoRegister();
// End Cross Module References

// Begin Class AVWRArchvizConfigInit
void AVWRArchvizConfigInit::StaticRegisterNativesAVWRArchvizConfigInit()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVWRArchvizConfigInit);
UClass* Z_Construct_UClass_AVWRArchvizConfigInit_NoRegister()
{
	return AVWRArchvizConfigInit::StaticClass();
}
struct Z_Construct_UClass_AVWRArchvizConfigInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VWRArchvizConfigInit.h" },
		{ "ModuleRelativePath", "VWRArchvizConfigInit.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVWRArchvizConfigInit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVWRArchvizConfigInit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VWRArchvizProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVWRArchvizConfigInit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVWRArchvizConfigInit_Statics::ClassParams = {
	&AVWRArchvizConfigInit::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVWRArchvizConfigInit_Statics::Class_MetaDataParams), Z_Construct_UClass_AVWRArchvizConfigInit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVWRArchvizConfigInit()
{
	if (!Z_Registration_Info_UClass_AVWRArchvizConfigInit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVWRArchvizConfigInit.OuterSingleton, Z_Construct_UClass_AVWRArchvizConfigInit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVWRArchvizConfigInit.OuterSingleton;
}
template<> VWRARCHVIZPROJECT_API UClass* StaticClass<AVWRArchvizConfigInit>()
{
	return AVWRArchvizConfigInit::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVWRArchvizConfigInit);
AVWRArchvizConfigInit::~AVWRArchvizConfigInit() {}
// End Class AVWRArchvizConfigInit

// Begin Registration
struct Z_CompiledInDeferFile_FID_VWRArchvizProject_Source_VWRArchvizProject_VWRArchvizConfigInit_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVWRArchvizConfigInit, AVWRArchvizConfigInit::StaticClass, TEXT("AVWRArchvizConfigInit"), &Z_Registration_Info_UClass_AVWRArchvizConfigInit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVWRArchvizConfigInit), 2718670439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VWRArchvizProject_Source_VWRArchvizProject_VWRArchvizConfigInit_h_4066995697(TEXT("/Script/VWRArchvizProject"),
	Z_CompiledInDeferFile_FID_VWRArchvizProject_Source_VWRArchvizProject_VWRArchvizConfigInit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VWRArchvizProject_Source_VWRArchvizProject_VWRArchvizConfigInit_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
