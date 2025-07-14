// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VWRArchvizConfig/Public/VWRArchvizConfigSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWRArchvizConfigSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_VWRArchvizConfig();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_UVWRArchvizConfigSettings();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_UVWRArchvizConfigSettings_NoRegister();
// End Cross Module References

// Begin Class UVWRArchvizConfigSettings
void UVWRArchvizConfigSettings::StaticRegisterNativesUVWRArchvizConfigSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWRArchvizConfigSettings);
UClass* Z_Construct_UClass_UVWRArchvizConfigSettings_NoRegister()
{
	return UVWRArchvizConfigSettings::StaticClass();
}
struct Z_Construct_UClass_UVWRArchvizConfigSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "VWR Archviz Config" },
		{ "IncludePath", "VWRArchvizConfigSettings.h" },
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset at which new items spawn. */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset at which new items spawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Auto Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto\xe2\x80\x90rotation speed. */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto\xe2\x80\x90rotation speed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttach_MetaData[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto\xe2\x80\x90""attach to manager? */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto\xe2\x80\x90""attach to manager?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Materials" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default material (soft ref so it can be in config). */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default material (soft ref so it can be in config)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModeNames_MetaData[] = {
		{ "Category", "View Modes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** View mode names. */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "View mode names." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static void NewProp_bAutoAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttach;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ViewModeNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ViewModeNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWRArchvizConfigSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOffset_MetaData), NewProp_SpawnOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
void Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach_SetBit(void* Obj)
{
	((UVWRArchvizConfigSettings*)Obj)->bAutoAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach = { "bAutoAttach", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVWRArchvizConfigSettings), &Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAttach_MetaData), NewProp_bAutoAttach_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_ViewModeNames_Inner = { "ViewModeNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_ViewModeNames = { "ViewModeNames", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, ViewModeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModeNames_MetaData), NewProp_ViewModeNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_SpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_ViewModeNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_ViewModeNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_VWRArchvizConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::ClassParams = {
	&UVWRArchvizConfigSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVWRArchvizConfigSettings()
{
	if (!Z_Registration_Info_UClass_UVWRArchvizConfigSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWRArchvizConfigSettings.OuterSingleton, Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVWRArchvizConfigSettings.OuterSingleton;
}
template<> VWRARCHVIZCONFIG_API UClass* StaticClass<UVWRArchvizConfigSettings>()
{
	return UVWRArchvizConfigSettings::StaticClass();
}
UVWRArchvizConfigSettings::UVWRArchvizConfigSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVWRArchvizConfigSettings);
UVWRArchvizConfigSettings::~UVWRArchvizConfigSettings() {}
// End Class UVWRArchvizConfigSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVWRArchvizConfigSettings, UVWRArchvizConfigSettings::StaticClass, TEXT("UVWRArchvizConfigSettings"), &Z_Registration_Info_UClass_UVWRArchvizConfigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWRArchvizConfigSettings), 1485547551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_3663791666(TEXT("/Script/VWRArchvizConfig"),
	Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
