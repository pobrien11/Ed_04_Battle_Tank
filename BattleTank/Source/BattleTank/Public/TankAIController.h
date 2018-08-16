// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Public/Tank.h"
#include "Kismet/GameplayStatics.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:

	// Called every frame - where aim at player happens
	virtual void Tick(float) override;

	ATank* GetAITank() const;

protected:

	virtual void BeginPlay() override;

private:

	ATank * GetPlayerTank() const;
	
	ATank *PlayerTank = nullptr;

	ATank *AITank = nullptr;
};
