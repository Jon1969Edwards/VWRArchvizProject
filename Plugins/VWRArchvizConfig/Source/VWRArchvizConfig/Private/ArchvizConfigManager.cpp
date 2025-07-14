#include "ArchvizConfigManager.h"
#include "VWRArchvizConfigBPLibrary.h"

AArchvizConfigManager::AArchvizConfigManager()
{
    // Disable ticking by default (we don't need per-frame logic here)
    PrimaryActorTick.bCanEverTick = false;

    // Give your actor a root component so Designers can snap things to it
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void AArchvizConfigManager::SpawnItem(TSubclassOf<AActor> ItemClass)
{
    if (!ItemClass) return;

    // Use your existing Blueprint Function Library to handle spawn + attach + rotation
    AActor* NewActor = UVWRArchvizConfigBPLibrary::SpawnConfigItem(this, ItemClass);
    if (NewActor)
    {
        // Fire the Blueprint event so Designers can respond
        OnItemSpawned(NewActor);
    }
}
