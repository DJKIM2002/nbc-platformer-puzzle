// Copyright Epic Games, Inc. All Rights Reserved.

#include "PuzzleGameGameMode.h"
#include "PuzzleGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

APuzzleGameGameMode::APuzzleGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
