// Fill out your copyright notice in the Description page of Project Settings.

#include "PNGPlayerControllerMain.h"
#include "GameObjects/PNGCameraActor.h"
#include "Kismet/GameplayStatics.h"

void APNGPlayerControllerMain::BeginPlay()
{
	Super::BeginPlay();

	SetupCamera();
}

void APNGPlayerControllerMain::SetupCamera()
{
	/*<AActor*> cameras;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), APNGCameraActor::StaticClass(), cameras);
	
	if (cameras.Num() > 0)
	{
		SetViewTarget(cameras[0]);
	}*/
}
