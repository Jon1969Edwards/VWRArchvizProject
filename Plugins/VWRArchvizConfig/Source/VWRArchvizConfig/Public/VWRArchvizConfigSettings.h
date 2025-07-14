#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "VWRArchvizConfigSettings.generated.h"

UCLASS(BlueprintType, config=Game, defaultconfig, meta=(DisplayName="VWR Archviz Config"))
class VWRARCHVIZCONFIG_API UVWRArchvizConfigSettings : public UDeveloperSettings
{
  GENERATED_BODY()

public:
  /** Offset at which new items spawn. */
  UPROPERTY(EditAnywhere, config, Category="Spawning")
  FVector SpawnOffset = FVector::ZeroVector;

  /** Auto‐rotation speed. */
  UPROPERTY(EditAnywhere, config, Category="Auto Rotation")
  FRotator RotationRate = FRotator(0, 45, 0);

  /** Auto‐attach to manager? */
  UPROPERTY(EditAnywhere, config, Category="Attachment")
  bool bAutoAttach = true;

  /** Default material (soft ref so it can be in config). */
  UPROPERTY(EditAnywhere, config, BlueprintReadWrite, Category="Materials")
  TSoftObjectPtr<UMaterialInterface> DefaultMaterial;

  /** View mode names. */
  UPROPERTY(EditAnywhere, config, Category="View Modes")
  TArray<FName> ViewModeNames = { TEXT("Orbit"), TEXT("FreeCam") };

  /** Helper to load the default material at runtime. */
  UMaterialInterface* GetDefaultMaterial() const
  {
    return DefaultMaterial.LoadSynchronous();
  }
};
