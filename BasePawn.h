// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	//Test Variable -- Learning UPROPERTY Values
	//Some UPROPERTY specifiers are as follows:
	//1. VisibleAnywhere
	//2. EditAnywhere
	//3. VisibleInstanceOnly
	//4. EditInstanceOnly
	//5. VisibleDefaultsOnly
	//6. EditDefaultsOnly
	//7. BlueprintReadWrite
	//8. BlueprintReadOnly
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 HealthPoints = 100;

protected:
	void RotateTurret(FVector LookAtTarget);

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Component Variables", meta = (AllowPrivateAccess = "true"))
	class UCapsuleComponent* CapsuleComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Component Variables", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Component Variables", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TurretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Component Variables", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;

};