// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "SShooterGameMode.h"
#include "SShooterHUD.h"
#include "SShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASShooterGameMode::ASShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASShooterHUD::StaticClass();
}
