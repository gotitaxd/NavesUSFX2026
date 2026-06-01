// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Builder.h"	
#include "ConBuilderFacil.generated.h"

UCLASS()
class NAVESUSFX2026_API AConBuilderFacil : public AActor, public IBuilder	
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConBuilderFacil();
	virtual void CrearEnemigos();
	virtual void CrearAsteroides();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	AEnemigoAnimal* AEnemigoAnimal1;
	ABloque* ABloque1;
	AConBuilderFacil* ObtenerInstancia();


};
