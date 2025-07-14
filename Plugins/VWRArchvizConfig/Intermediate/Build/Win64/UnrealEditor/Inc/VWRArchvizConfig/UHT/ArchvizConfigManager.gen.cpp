// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VWRArchvizConfig/Public/ArchvizConfigManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchvizConfigManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_VWRArchvizConfig();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_AArchvizConfigManager();
VWRARCHVIZCONFIG_API UClass* Z_Construct_UClass_AArchvizConfigManager_NoRegister();
// End Cross Module References

// Begin Class AArchvizConfigManager Function OnItemSpawned
struct ArchvizConfigManager_eventOnItemSpawned_Parms
{
	AActor* SpawnedItem;
};
static FName NAME_AArchvizConfigManager_OnItemSpawned = FName(TEXT("OnItemSpawned"));
void AArchvizConfigManager::OnItemSpawned(AActor* SpawnedItem)
{
	ArchvizConfigManager_eventOnItemSpawned_Parms Parms;
	Parms.SpawnedItem=SpawnedItem;
	ProcessEvent(FindFunctionChecked(NAME_AArchvizConfigManager_OnItemSpawned),&Parms);
}
struct Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Archviz Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n     * Fired every time SpawnItem() successfully spawns something.\n     * Designers can override this in Blueprint to do custom logic.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArchvizConfigManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired every time SpawnItem() successfully spawns something.\nDesigners can override this in Blueprint to do custom logic." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::NewProp_SpawnedItem = { "SpawnedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchvizConfigManager_eventOnItemSpawned_Parms, SpawnedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::NewProp_SpawnedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchvizConfigManager, nullptr, "OnItemSpawned", nullptr, nullptr, Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::PropPointers), sizeof(ArchvizConfigManager_eventOnItemSpawned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::Function_MetaDataParams) };
static_assert(sizeof(ArchvizConfigManager_eventOnItemSpawned_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AArchvizConfigManager Function OnItemSpawned

// Begin Class AArchvizConfigManager Function SpawnItem
struct Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics
{
	struct ArchvizConfigManager_eventSpawnItem_Parms
	{
		TSubclassOf<AActor> ItemClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Archviz Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Simple C++ helper to spawn through our BPLibrary and then fire the event.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/ArchvizConfigManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple C++ helper to spawn through our BPLibrary and then fire the event." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchvizConfigManager_eventSpawnItem_Parms, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::NewProp_ItemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArchvizConfigManager, nullptr, "SpawnItem", nullptr, nullptr, Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::ArchvizConfigManager_eventSpawnItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::ArchvizConfigManager_eventSpawnItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArchvizConfigManager_SpawnItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArchvizConfigManager_SpawnItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArchvizConfigManager::execSpawnItem)
{
	P_GET_OBJECT(UClass,Z_Param_ItemClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnItem(Z_Param_ItemClass);
	P_NATIVE_END;
}
// End Class AArchvizConfigManager Function SpawnItem

// Begin Class AArchvizConfigManager
void AArchvizConfigManager::StaticRegisterNativesAArchvizConfigManager()
{
	UClass* Class = AArchvizConfigManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnItem", &AArchvizConfigManager::execSpawnItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArchvizConfigManager);
UClass* Z_Construct_UClass_AArchvizConfigManager_NoRegister()
{
	return AArchvizConfigManager::StaticClass();
}
struct Z_Construct_UClass_AArchvizConfigManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArchvizConfigManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ArchvizConfigManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArchvizConfigManager_OnItemSpawned, "OnItemSpawned" }, // 2434854784
		{ &Z_Construct_UFunction_AArchvizConfigManager_SpawnItem, "SpawnItem" }, // 1285100312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArchvizConfigManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArchvizConfigManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_VWRArchvizConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArchvizConfigManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArchvizConfigManager_Statics::ClassParams = {
	&AArchvizConfigManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArchvizConfigManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AArchvizConfigManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArchvizConfigManager()
{
	if (!Z_Registration_Info_UClass_AArchvizConfigManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArchvizConfigManager.OuterSingleton, Z_Construct_UClass_AArchvizConfigManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArchvizConfigManager.OuterSingleton;
}
template<> VWRARCHVIZCONFIG_API UClass* StaticClass<AArchvizConfigManager>()
{
	return AArchvizConfigManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArchvizConfigManager);
AArchvizConfigManager::~AArchvizConfigManager() {}
// End Class AArchvizConfigManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArchvizConfigManager, AArchvizConfigManager::StaticClass, TEXT("AArchvizConfigManager"), &Z_Registration_Info_UClass_AArchvizConfigManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArchvizConfigManager), 9762872U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_587495853(TEXT("/Script/VWRArchvizConfig"),
	Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
