// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
public:
	ATank* GetControlledTank() const;
	
	ATank* GetPlayerTank() const;
	
	// How close can the AI tank get
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float AcceptanceRadius = 8000;
	
	void BeginPlay() override;
	
private:
	virtual void SetPawn(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;
	
};
