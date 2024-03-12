// Copyright Epic Games, Inc. All Rights Reserved.

#include "ByteDevGameMode.h"
#include "ByteDevCharacter.h"
#include "UObject/ConstructorHelpers.h"

AByteDevGameMode::AByteDevGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
