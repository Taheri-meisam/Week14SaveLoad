// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MainSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class WEEK14SAVING_API UMainSaveGame : public USaveGame
{
	GENERATED_BODY()
	UMainSaveGame();

public:
	FVector PlayerLocation;
	FRotator PlayerRotation;
};
