// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnderwaterSurgeGameMode.h"
#include "UnderwaterSurgeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnderwaterSurgeGameMode::AUnderwaterSurgeGameMode()
{
	// set default pawn class to our Blueprinted character
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;
	PrimaryActorTick.bAllowTickOnDedicatedServer = false;

	DefaultPawnClass = AUnderwaterSurgeGameMode::StaticClass();

	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
