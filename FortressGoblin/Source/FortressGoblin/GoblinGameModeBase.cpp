// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownCharacter.h"
#include "GoblinGameModeBase.h"
#include "UObject/ConstructorHelpers.h"

AGoblinGameModeBase::AGoblinGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/BP_TopDownChar"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
