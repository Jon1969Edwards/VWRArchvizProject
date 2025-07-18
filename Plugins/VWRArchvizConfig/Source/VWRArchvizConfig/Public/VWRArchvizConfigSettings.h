#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "VWRArchvizConfigSettings.generated.h"

UCLASS(
    Blueprintable,      // <-- so you can spawn it / use it in BPs
    BlueprintType,      // <-- so the type itself shows up in variable pickers
    config=Game,        // or change to config=VWRArchvizConfig if you want your own .ini section
    defaultconfig,
    meta=(DisplayName="VWR Archviz Config")
)
class VWRARCHVIZCONFIG_API UVWRArchvizConfigSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:

    /** Blueprint-callable setter for auto-attach. */
    UFUNCTION(BlueprintCallable, Category="Attachment")
    void SetAutoAttach(bool bInAutoAttach)
    {
        bAutoAttach = bInAutoAttach;
    }
    
    /** Offset at which new items spawn. */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,    // <-- expose getter & setter to Blueprints
        config,
        Category="Spawning"
    )
    FVector SpawnOffset = FVector::ZeroVector;

    /** Blueprint‐callable setter for SpawnOffset. */
    UFUNCTION(BlueprintCallable, Category="Spawning")
    void SetSpawnOffset(FVector InOffset)
    {
        SpawnOffset = InOffset;
        SaveConfig();  // writes back to DefaultGame.ini so it persists
    }

    /** Blueprint‐callable setter for RotationRate.Yaw */
    UFUNCTION(BlueprintCallable, Category="Auto Rotation")
    void SetRotationYaw(float InYaw)
    {
        RotationRate.Yaw = InYaw;
        SaveConfig();
    }

    /** Auto‐rotation speed. */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,    // <-- expose this as well
        config,
        Category="Auto Rotation"
    )
    FRotator RotationRate = FRotator(0, 45, 0);

    /** Auto‐attach to manager? */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,    // <-- now editable in BP
        config,
        Category="Attachment"
    )
    bool bAutoAttach = true;

    /** Default material (soft ref so it can be in config). */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,
        config,
        Category="Materials"
    )
    TSoftObjectPtr<UMaterialInterface> DefaultMaterial;

    /** View mode names. */
    UPROPERTY(
        EditAnywhere,
        BlueprintReadWrite,
        config,
        Category="View Modes"
    )
    TArray<FName> ViewModeNames = { TEXT("Orbit"), TEXT("FreeCam") };

    /** Helper to load the default material at runtime. */
    UFUNCTION(BlueprintPure, Category="Archviz|Config")
    UMaterialInterface* GetDefaultMaterial() const
    {
        return DefaultMaterial.LoadSynchronous();
    }
};
