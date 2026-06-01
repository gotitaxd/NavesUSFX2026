// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder.h"
#include "DirEscenarioEspacial.generated.h"

UCLASS()
class NAVESUSFX2026_API ADirEscenarioEspacial : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirEscenarioEspacial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//  FUNCIÓN 1: Guarda el Builder que vamos a usar (Fácil o Difícil)
	void SetBuilder(IBuilder* NuevoBuilder);

	//  FUNCIÓN 2: Orquesta la construcción del nivel en el orden correcto
	void ConstruirEscenario();
private:
	// Puntero para almacenar el builder actual
	IBuilder* EscenarioBuilder;
		
};
