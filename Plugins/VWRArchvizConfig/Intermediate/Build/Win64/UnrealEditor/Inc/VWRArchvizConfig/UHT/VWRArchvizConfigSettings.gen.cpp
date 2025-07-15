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

// Begin Class UVWRArchvizConfigSettings Function GetDefaultMaterial
struct Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics
{
	struct VWRArchvizConfigSettings_eventGetDefaultMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Archviz|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Helper to load the default material at runtime. */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper to load the default material at runtime." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigSettings_eventGetDefaultMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigSettings, nullptr, "GetDefaultMaterial", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::VWRArchvizConfigSettings_eventGetDefaultMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::VWRArchvizConfigSettings_eventGetDefaultMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigSettings::execGetDefaultMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetDefaultMaterial();
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigSettings Function GetDefaultMaterial

// Begin Class UVWRArchvizConfigSettings Function SetAutoAttach
struct Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics
{
	struct VWRArchvizConfigSettings_eventSetAutoAttach_Parms
	{
		bool bInAutoAttach;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint-callable setter for auto-attach. */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint-callable setter for auto-attach." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bInAutoAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoAttach;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::NewProp_bInAutoAttach_SetBit(void* Obj)
{
	((VWRArchvizConfigSettings_eventSetAutoAttach_Parms*)Obj)->bInAutoAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::NewProp_bInAutoAttach = { "bInAutoAttach", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VWRArchvizConfigSettings_eventSetAutoAttach_Parms), &Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::NewProp_bInAutoAttach_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::NewProp_bInAutoAttach,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigSettings, nullptr, "SetAutoAttach", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::VWRArchvizConfigSettings_eventSetAutoAttach_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::VWRArchvizConfigSettings_eventSetAutoAttach_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigSettings::execSetAutoAttach)
{
	P_GET_UBOOL(Z_Param_bInAutoAttach);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoAttach(Z_Param_bInAutoAttach);
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigSettings Function SetAutoAttach

// Begin Class UVWRArchvizConfigSettings Function SetSpawnOffset
struct Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics
{
	struct VWRArchvizConfigSettings_eventSetSpawnOffset_Parms
	{
		FVector InOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint\xe2\x80\x90""callable setter for SpawnOffset. */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint\xe2\x80\x90""callable setter for SpawnOffset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::NewProp_InOffset = { "InOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigSettings_eventSetSpawnOffset_Parms, InOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::NewProp_InOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigSettings, nullptr, "SetSpawnOffset", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::VWRArchvizConfigSettings_eventSetSpawnOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::VWRArchvizConfigSettings_eventSetSpawnOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigSettings::execSetSpawnOffset)
{
	P_GET_STRUCT(FVector,Z_Param_InOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpawnOffset(Z_Param_InOffset);
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigSettings Function SetSpawnOffset

// Begin Class UVWRArchvizConfigSettings
void UVWRArchvizConfigSettings::StaticRegisterNativesUVWRArchvizConfigSettings()
{
	UClass* Class = UVWRArchvizConfigSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultMaterial", &UVWRArchvizConfigSettings::execGetDefaultMaterial },
		{ "SetAutoAttach", &UVWRArchvizConfigSettings::execSetAutoAttach },
		{ "SetSpawnOffset", &UVWRArchvizConfigSettings::execSetSpawnOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// <-- so you can spawn it / use it in BPs\n// <-- so the type itself shows up in variable pickers\n// or change to config=VWRArchvizConfig if you want your own .ini section\n" },
#endif
		{ "DisplayName", "VWR Archviz Config" },
		{ "IncludePath", "VWRArchvizConfigSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<-- so you can spawn it / use it in BPs\n<-- so the type itself shows up in variable pickers\nor change to config=VWRArchvizConfig if you want your own .ini section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOffset_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset at which new items spawn. */// <-- expose getter & setter to Blueprints\n" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset at which new items spawn. // <-- expose getter & setter to Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[] = {
		{ "Category", "Auto Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto\xe2\x80\x90rotation speed. */// <-- expose this as well\n" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto\xe2\x80\x90rotation speed. // <-- expose this as well" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttach_MetaData[] = {
		{ "Category", "Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Auto\xe2\x80\x90""attach to manager? */// <-- now editable in BP\n" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Auto\xe2\x80\x90""attach to manager? // <-- now editable in BP" },
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWRArchvizConfigSettings_GetDefaultMaterial, "GetDefaultMaterial" }, // 3829401683
		{ &Z_Construct_UFunction_UVWRArchvizConfigSettings_SetAutoAttach, "SetAutoAttach" }, // 826143179
		{ &Z_Construct_UFunction_UVWRArchvizConfigSettings_SetSpawnOffset, "SetSpawnOffset" }, // 1562102839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWRArchvizConfigSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_SpawnOffset = { "SpawnOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, SpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOffset_MetaData), NewProp_SpawnOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, RotationRate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRate_MetaData), NewProp_RotationRate_MetaData) };
void Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach_SetBit(void* Obj)
{
	((UVWRArchvizConfigSettings*)Obj)->bAutoAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach = { "bAutoAttach", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVWRArchvizConfigSettings), &Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_bAutoAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAttach_MetaData), NewProp_bAutoAttach_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_ViewModeNames_Inner = { "ViewModeNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::NewProp_ViewModeNames = { "ViewModeNames", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVWRArchvizConfigSettings, ViewModeNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModeNames_MetaData), NewProp_ViewModeNames_MetaData) };
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
	FuncInfo,
	Z_Construct_UClass_UVWRArchvizConfigSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UVWRArchvizConfigSettings, UVWRArchvizConfigSettings::StaticClass, TEXT("UVWRArchvizConfigSettings"), &Z_Registration_Info_UClass_UVWRArchvizConfigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWRArchvizConfigSettings), 1841597383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_3399783437(TEXT("/Script/VWRArchvizConfig"),
	Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
