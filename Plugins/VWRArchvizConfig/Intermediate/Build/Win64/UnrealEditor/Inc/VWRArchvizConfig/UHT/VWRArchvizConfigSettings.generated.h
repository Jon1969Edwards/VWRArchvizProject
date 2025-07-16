// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VWRArchvizConfigSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
#ifdef VWRARCHVIZCONFIG_VWRArchvizConfigSettings_generated_h
#error "VWRArchvizConfigSettings.generated.h already included, missing '#pragma once' in VWRArchvizConfigSettings.h"
#endif
#define VWRARCHVIZCONFIG_VWRArchvizConfigSettings_generated_h

#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDefaultMaterial); \
	DECLARE_FUNCTION(execSetRotationYaw); \
	DECLARE_FUNCTION(execSetSpawnOffset); \
	DECLARE_FUNCTION(execSetAutoAttach);


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVWRArchvizConfigSettings(); \
	friend struct Z_Construct_UClass_UVWRArchvizConfigSettings_Statics; \
public: \
	DECLARE_CLASS(UVWRArchvizConfigSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/VWRArchvizConfig"), NO_API) \
	DECLARE_SERIALIZER(UVWRArchvizConfigSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVWRArchvizConfigSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVWRArchvizConfigSettings(UVWRArchvizConfigSettings&&); \
	UVWRArchvizConfigSettings(const UVWRArchvizConfigSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVWRArchvizConfigSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVWRArchvizConfigSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVWRArchvizConfigSettings) \
	NO_API virtual ~UVWRArchvizConfigSettings();


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_13_PROLOG
#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VWRARCHVIZCONFIG_API UClass* StaticClass<class UVWRArchvizConfigSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_VWRArchvizConfigSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
