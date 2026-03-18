// Copyright Epic Games, Inc. All Rights Reserved.

#include "Core/PGGameModeBase.h"
#include "Character/PGTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

APGGameModeBase::APGGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
