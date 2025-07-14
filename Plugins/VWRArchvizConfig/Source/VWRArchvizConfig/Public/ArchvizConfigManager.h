#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArchvizConfigManager.generated.h"

UCLASS(Blueprintable, BlueprintType)
class VWRARCHVIZCONFIG_API AArchvizConfigManager : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AArchvizConfigManager();

    /** 
     * Fired every time SpawnItem() successfully spawns something.
     * Designers can override this in Blueprint to do custom logic.
     */
    UFUNCTION(BlueprintImplementableEvent, Category="Archviz Config")
    void OnItemSpawned(AActor* SpawnedItem);

    /**
     * Simple C++ helper to spawn through our BPLibrary and then fire the event.
     */
    UFUNCTION(BlueprintCallable, Category="Archviz Config")
    void SpawnItem(TSubclassOf<AActor> ItemClass);
};
