// Copyright Epic Games, Inc. All Rights Reserved.

#include "Assignment1GameMode.h"
#include "Assignment1Character.h"
#include "UObject/ConstructorHelpers.h"

AAssignment1GameMode::AAssignment1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
