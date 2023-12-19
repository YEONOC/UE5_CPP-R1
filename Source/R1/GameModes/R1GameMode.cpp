// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/R1GameMode.h"
#include "Character/R1Character.h"

AR1GameMode::AR1GameMode(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	DefaultPawnClass = AR1Character::StaticClass();
}
