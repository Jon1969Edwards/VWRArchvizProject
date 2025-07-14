// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VWRArchvizConfigInit.generated.h"

UCLASS()
class VWRARCHVIZPROJECT_API AVWRArchvizConfigInit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVWRArchvizConfigInit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
