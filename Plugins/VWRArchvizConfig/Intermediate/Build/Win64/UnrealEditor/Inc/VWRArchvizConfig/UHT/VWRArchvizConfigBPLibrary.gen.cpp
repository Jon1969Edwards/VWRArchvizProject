// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VWRArchvizConfig/Public/VWRArchvizConfigBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVWRArchvizConfigBPLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VWRArchvizConfig();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_UVWRArchvizConfigBPLibrary();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_UVWRArchvizConfigBPLibrary_NoRegister();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_UVWRArchvizConfigSettings_NoRegister();
// End Cross Module References

// Begin Class UVWRArchvizConfigBPLibrary Function GetConfigSettings
struct Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics
{
	struct VWRArchvizConfigBPLibrary_eventGetConfigSettings_Parms
	{
		UVWRArchvizConfigSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VWR Archviz Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the global config settings */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the global config settings" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventGetConfigSettings_Parms, ReturnValue), Z_Construct_UClass_UVWRArchvizConfigSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigBPLibrary, nullptr, "GetConfigSettings", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::VWRArchvizConfigBPLibrary_eventGetConfigSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::VWRArchvizConfigBPLibrary_eventGetConfigSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigBPLibrary::execGetConfigSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVWRArchvizConfigSettings**)Z_Param__Result=UVWRArchvizConfigBPLibrary::GetConfigSettings();
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigBPLibrary Function GetConfigSettings

// Begin Class UVWRArchvizConfigBPLibrary Function SetMeshMaterial
struct Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics
{
	struct VWRArchvizConfigBPLibrary_eventSetMeshMaterial_Parms
	{
		UStaticMeshComponent* MeshComp;
		int32 ElementIndex;
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VWR Archviz Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Change material on given mesh */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Change material on given mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElementIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSetMeshMaterial_Parms, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::NewProp_ElementIndex = { "ElementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSetMeshMaterial_Parms, ElementIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSetMeshMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::NewProp_ElementIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigBPLibrary, nullptr, "SetMeshMaterial", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::VWRArchvizConfigBPLibrary_eventSetMeshMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::VWRArchvizConfigBPLibrary_eventSetMeshMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigBPLibrary::execSetMeshMaterial)
{
	P_GET_OBJECT(UStaticMeshComponent,Z_Param_MeshComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_ElementIndex);
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVWRArchvizConfigBPLibrary::SetMeshMaterial(Z_Param_MeshComp,Z_Param_ElementIndex,Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigBPLibrary Function SetMeshMaterial

// Begin Class UVWRArchvizConfigBPLibrary Function SpawnConfigItem
struct Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics
{
	struct VWRArchvizConfigBPLibrary_eventSpawnConfigItem_Parms
	{
		AActor* Manager;
		TSubclassOf<AActor> ItemClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VWR Archviz Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spawn a configurator item of given class at Manager location + Offset */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawn a configurator item of given class at Manager location + Offset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSpawnConfigItem_Parms, Manager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSpawnConfigItem_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSpawnConfigItem_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::NewProp_Manager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigBPLibrary, nullptr, "SpawnConfigItem", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::VWRArchvizConfigBPLibrary_eventSpawnConfigItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::VWRArchvizConfigBPLibrary_eventSpawnConfigItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigBPLibrary::execSpawnConfigItem)
{
	P_GET_OBJECT(AActor,Z_Param_Manager);
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UVWRArchvizConfigBPLibrary::SpawnConfigItem(Z_Param_Manager,Z_Param_ItemClass);
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigBPLibrary Function SpawnConfigItem

// Begin Class UVWRArchvizConfigBPLibrary Function SwitchViewMode
struct Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics
{
	struct VWRArchvizConfigBPLibrary_eventSwitchViewMode_Parms
	{
		APlayerController* PC;
		FName ModeName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VWR Archviz Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Switch view mode by name */" },
#endif
		{ "ModuleRelativePath", "Public/VWRArchvizConfigBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch view mode by name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSwitchViewMode_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::NewProp_ModeName = { "ModeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VWRArchvizConfigBPLibrary_eventSwitchViewMode_Parms, ModeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::NewProp_PC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::NewProp_ModeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVWRArchvizConfigBPLibrary, nullptr, "SwitchViewMode", nullptr, nullptr, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::VWRArchvizConfigBPLibrary_eventSwitchViewMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::VWRArchvizConfigBPLibrary_eventSwitchViewMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVWRArchvizConfigBPLibrary::execSwitchViewMode)
{
	P_GET_OBJECT(APlayerController,Z_Param_PC);
	P_GET_PROPERTY(FNameProperty,Z_Param_ModeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVWRArchvizConfigBPLibrary::SwitchViewMode(Z_Param_PC,Z_Param_ModeName);
	P_NATIVE_END;
}
// End Class UVWRArchvizConfigBPLibrary Function SwitchViewMode

// Begin Class UVWRArchvizConfigBPLibrary
void UVWRArchvizConfigBPLibrary::StaticRegisterNativesUVWRArchvizConfigBPLibrary()
{
	UClass* Class = UVWRArchvizConfigBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetConfigSettings", &UVWRArchvizConfigBPLibrary::execGetConfigSettings },
		{ "SetMeshMaterial", &UVWRArchvizConfigBPLibrary::execSetMeshMaterial },
		{ "SpawnConfigItem", &UVWRArchvizConfigBPLibrary::execSpawnConfigItem },
		{ "SwitchViewMode", &UVWRArchvizConfigBPLibrary::execSwitchViewMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVWRArchvizConfigBPLibrary);
UClass* Z_Construct_UClass_UVWRArchvizConfigBPLibrary_NoRegister()
{
	return UVWRArchvizConfigBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VWRArchvizConfigBPLibrary.h" },
		{ "ModuleRelativePath", "Public/VWRArchvizConfigBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_GetConfigSettings, "GetConfigSettings" }, // 408545266
		{ &Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SetMeshMaterial, "SetMeshMaterial" }, // 1557561193
		{ &Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SpawnConfigItem, "SpawnConfigItem" }, // 4288127958
		{ &Z_Construct_UFunction_UVWRArchvizConfigBPLibrary_SwitchViewMode, "SwitchViewMode" }, // 1992195384
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVWRArchvizConfigBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VWRArchvizConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics::ClassParams = {
	&UVWRArchvizConfigBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVWRArchvizConfigBPLibrary()
{
	if (!Z_Registration_Info_UClass_UVWRArchvizConfigBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVWRArchvizConfigBPLibrary.OuterSingleton, Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVWRArchvizConfigBPLibrary.OuterSingleton;
}
template<> VWRARCHVIZCONFIG_API UClass* StaticClass<UVWRArchvizConfigBPLibrary>()
{
	return UVWRArchvizConfigBPLibrary::StaticClass();
}
UVWRArchvizConfigBPLibrary::UVWRArchvizConfigBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVWRArchvizConfigBPLibrary);
UVWRArchvizConfigBPLibrary::~UVWRArchvizConfigBPLibrary() {}
// End Class UVWRArchvizConfigBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVWRArchvizConfigBPLibrary, UVWRArchvizConfigBPLibrary::StaticClass, TEXT("UVWRArchvizConfigBPLibrary"), &Z_Registration_Info_UClass_UVWRArchvizConfigBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVWRArchvizConfigBPLibrary), 759830633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_1780490699(TEXT("/Script/VWRArchvizConfig"),
	Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
