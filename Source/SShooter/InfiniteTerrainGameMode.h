// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SShooterGameMode.h"
#include "InfiniteTerrainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SSHOOTER_API AInfiniteTerrainGameMode : public ASShooterGameMode
{
	GENERATED_BODY()
	
public: 
	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulatedBoundsVolumePool(); 

private:
	void AddToPool(class AVolume *VolumeToAdd);
	
};
