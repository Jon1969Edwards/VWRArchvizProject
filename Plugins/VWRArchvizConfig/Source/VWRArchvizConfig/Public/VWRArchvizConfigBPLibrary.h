#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "VWRArchvizConfigBPLibrary.generated.h"

UCLASS()
class VWRARCHVIZCONFIG_API UVWRArchvizConfigBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** Get the global config settings */
    UFUNCTION(BlueprintPure, Category="VWR Archviz Config")
    static UVWRArchvizConfigSettings* GetConfigSettings();

    /** Spawn a configurator item of given class at Manager location + Offset */
    UFUNCTION(BlueprintCallable, Category="VWR Archviz Config")
    static AActor* SpawnConfigItem(AActor* Manager, TSubclassOf<AActor> ItemClass);

    /** Change material on given mesh */
    UFUNCTION(BlueprintCallable, Category="VWR Archviz Config")
    static void SetMeshMaterial(UStaticMeshComponent* MeshComp, int32 ElementIndex, UMaterialInterface* NewMaterial);

    /** Switch view mode by name */
    UFUNCTION(BlueprintCallable, Category="VWR Archviz Config")
    static void SwitchViewMode(APlayerController* PC, FName ModeName);
};
