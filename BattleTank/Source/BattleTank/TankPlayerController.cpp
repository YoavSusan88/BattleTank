// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay() {
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController BeginPlay"));
	ATank* ControlledTank = GetControlledTank();
	if (ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("Controlled tank %s"), *ControlledTank->GetName());
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("PlayerController does not control a tank"));
	}
}

ATank * ATankPlayerController::GetControlledTank() const {
	return Cast<ATank> (GetPawn());
}