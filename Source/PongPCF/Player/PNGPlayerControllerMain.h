// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PNGPlayerControllerMain.generated.h"

/**
 * 
 */
UCLASS()
class PONGPCF_API APNGPlayerControllerMain : public APlayerController
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

private:

	void SetupCamera();
	
};
