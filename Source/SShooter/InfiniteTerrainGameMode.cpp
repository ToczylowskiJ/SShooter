// Fill out your copyright notice in the Description page of Project Settings.

#include "InfiniteTerrainGameMode.h"
#include "GameFramework/Volume.h"
#include "EngineUtils.h"


/**
*
*/
void AInfiniteTerrainGameMode::PopulatedBoundsVolumePool()
{
	auto VolumeIterator = TActorIterator<AVolume>(GetWorld());
	while (VolumeIterator)
	{
		AddToPool(*VolumeIterator);
		++VolumeIterator;
		
	}
}


void AInfiniteTerrainGameMode::AddToPool(class AVolume *VolumeToAdd)
{
	UE_LOG(LogTemp, Warning, TEXT("Found Actor: %s"), *VolumeToAdd->GetName());
}

