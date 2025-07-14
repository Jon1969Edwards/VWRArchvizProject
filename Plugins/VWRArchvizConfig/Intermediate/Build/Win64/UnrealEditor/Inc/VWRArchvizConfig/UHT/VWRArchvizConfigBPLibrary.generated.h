// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VWRArchvizConfigBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UMaterialInterface;
class UStaticMeshComponent;
class UVWRArchvizConfigSettings;
#ifdef VWRARCHVIZCONFIG_VWRArchvizConfigBPLibrary_generated_h
#error "VWRArchvizConfigBPLibrary.generated.h already included, missing '#pragma once' in VWRArchvizConfigBPLibrary.h"
#endif
#define VWRARCHVIZCONFIG_VWRArchvizConfigBPLibrary_generated_h

#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwitchViewMode); \
	DECLARE_FUNCTION(execSetMeshMaterial); \
	DECLARE_FUNCTION(execSpawnConfigItem); \
	DECLARE_FUNCTION(execGetConfigSettings);


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVWRArchvizConfigBPLibrary(); \
	friend struct Z_Construct_UClass_UVWRArchvizConfigBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UVWRArchvizConfigBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VWRArchvizConfig"), NO_API) \
	DECLARE_SERIALIZER(UVWRArchvizConfigBPLibrary)


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVWRArchvizConfigBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVWRArchvizConfigBPLibrary(UVWRArchvizConfigBPLibrary&&); \
	UVWRArchvizConfigBPLibrary(const UVWRArchvizConfigBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVWRArchvizConfigBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVWRArchvizConfigBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVWRArchvizConfigBPLibrary) \
	NO_API virtual ~UVWRArchvizConfigBPLibrary();


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_6_PROLOG
#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VWRARCHVIZCONFIG_API UClass* StaticClass<class UVWRArchvizConfigBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
