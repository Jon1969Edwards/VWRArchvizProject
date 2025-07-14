// Plugins/VWRArchvizConfig/Source/VWRArchvizConfig/Private/VWRArchvizConfigBPLibrary.cpp

#include "VWRArchvizConfigBPLibrary.h"
#include "VWRArchvizConfigSettings.h"

#include "GameFramework/RotatingMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"

UVWRArchvizConfigSettings* UVWRArchvizConfigBPLibrary::GetConfigSettings()
{
    // Return the runtime settings object (mutable so we can read defaults)
    return GetMutableDefault<UVWRArchvizConfigSettings>();
}

AActor* UVWRArchvizConfigBPLibrary::SpawnConfigItem(AActor* Manager, TSubclassOf<AActor> ItemClass)
{
    if (!Manager || !*ItemClass)
    {
        return nullptr;
    }

    UVWRArchvizConfigSettings* Settings = GetConfigSettings();

    // 1) Spawn the actor at Manager's location + offset
    FVector SpawnLoc = Manager->GetActorLocation() + Settings->SpawnOffset;
    FActorSpawnParameters Params;
    AActor* NewActor = Manager->GetWorld()->SpawnActor<AActor>(
        ItemClass, SpawnLoc, FRotator::ZeroRotator, Params
    );
    if (!NewActor)
    {
        return nullptr;
    }

    // 2) Ensure its mesh (or root) is MOVABLE before attach/rotate
    if (UStaticMeshComponent* MeshComp = 
            NewActor->FindComponentByClass<UStaticMeshComponent>())
    {
        MeshComp->SetMobility(EComponentMobility::Movable);
    }
    else if (USceneComponent* RootComp = NewActor->GetRootComponent())
    {
        RootComp->SetMobility(EComponentMobility::Movable);
    }

    // 3) Auto-attach to the Manager if enabled
    if (Settings->bAutoAttach)
    {
        NewActor->AttachToActor(
            Manager,
            FAttachmentTransformRules::KeepWorldTransform
        );
    }

    // 4) Add auto-rotation
    {
        URotatingMovementComponent* RotComp =
            NewObject<URotatingMovementComponent>(NewActor);
        RotComp->RotationRate = Settings->RotationRate;
        RotComp->RegisterComponent();
    }

    return NewActor;
}

void UVWRArchvizConfigBPLibrary::SetMeshMaterial(
    UStaticMeshComponent* MeshComp,
    int32 ElementIndex,
    UMaterialInterface* NewMaterial)
{
    if (MeshComp && NewMaterial)
    {
        MeshComp->SetMaterial(ElementIndex, NewMaterial);
    }
}

void UVWRArchvizConfigBPLibrary::SwitchViewMode(
    APlayerController* PC,
    FName ModeName)
{
    if (!PC) return;

    if (APlayerCameraManager* CamMgr = PC->PlayerCameraManager)
    {
        if (ModeName == TEXT("Orbit"))
        {
            // Example: fade to black off
            CamMgr->SetManualCameraFade(0.f, FLinearColor::Black, false);
        }
        else if (ModeName == TEXT("FreeCam"))
        {
            // Example: full fade on
            CamMgr->SetManualCameraFade(1.f, FLinearColor::Black, false);
        }
    }
}
