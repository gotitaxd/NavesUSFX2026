// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAlien.generated.h"

/**
 * 
 */
UCLASS()
class NAVESUSFX2026_API AEnemigoAlien : public AEnemigo
{
	GENERATED_BODY()

private:
	float nivelEnergia = 100;
	float nivelAtaque = 10;
	float nivelDefensa = 5;
	float nivelHabilidad = 5;
	FVector posicion;

	float velocidadMovimiento = 200.0f; // Velocidad de movimiento del enemigo

public:
	// Sets default values for this actor's properties
	AEnemigoAlien();
	UPROPERTY(VisibleAnywhere) UStaticMeshComponent* mallaEnemigo;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};