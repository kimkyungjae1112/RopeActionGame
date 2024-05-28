// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/RopePlayerController.h"

void ARopePlayerController::BeginPlay()
{
	Super::BeginPlay();

	FInputModeGameOnly GameOnlyInputMode;
	SetInputMode(GameOnlyInputMode);
}