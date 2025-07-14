// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchvizConfigManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef VWRARCHVIZCONFIG_ArchvizConfigManager_generated_h
#error "ArchvizConfigManager.generated.h already included, missing '#pragma once' in ArchvizConfigManager.h"
#endif
#define VWRARCHVIZCONFIG_ArchvizConfigManager_generated_h

#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnItem);


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_CALLBACK_WRAPPERS
#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArchvizConfigManager(); \
	friend struct Z_Construct_UClass_AArchvizConfigManager_Statics; \
public: \
	DECLARE_CLASS(AArchvizConfigManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VWRArchvizConfig"), NO_API) \
	DECLARE_SERIALIZER(AArchvizConfigManager)


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArchvizConfigManager(AArchvizConfigManager&&); \
	AArchvizConfigManager(const AArchvizConfigManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArchvizConfigManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArchvizConfigManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArchvizConfigManager) \
	NO_API virtual ~AArchvizConfigManager();


#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_7_PROLOG
#define FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_CALLBACK_WRAPPERS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_INCLASS_NO_PURE_DECLS \
	FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VWRARCHVIZCONFIG_API UClass* StaticClass<class AArchvizConfigManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_VWRArchvizProject_Plugins_VWRArchvizConfig_Source_VWRArchvizConfig_Public_ArchvizConfigManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
