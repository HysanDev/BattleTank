// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"
#include "BattleTank.h"

void UTankBarrel::Elevate(float DegressPerSecond)
{
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called %f"), DegressPerSecond);
}
