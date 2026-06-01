// Fill out your copyright notice in the Description page of Project Settings.


#include "ConBuilderFacil.h"
#include "EnemigoAnimal.h" 
#include "Bloque.h"

// Sets default values
AConBuilderFacil::AConBuilderFacil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AConBuilderFacil::CrearEnemigos()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Generando 2 Enemigos (Modo Fácil)"));
	if (!GetWorld()) return;

	for (int i = 0; i < 2; i++)
	{
		FVector PosicionSpawn = FVector(-1200.f, (i * 300.f) + 400.f, 300.f);
		FRotator RotacionSpawn = FRotator::ZeroRotator;

		AEnemigoAnimal1 -> GetWorld()->SpawnActor<AEnemigoAnimal>(AEnemigoAnimal::StaticClass(),PosicionSpawn,RotacionSpawn);
	}
}

void AConBuilderFacil::CrearAsteroides()
{
      GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Generando 5 Asteroides (Modo Fácil)"));
	if (!GetWorld()) return;

	for (int i = 0; i < 5; i++)
	{
		FVector PosicionSpawn = FVector(600.f, i * 200.f, 100.f);
		FRotator RotacionSpawn = FRotator::ZeroRotator;

		ABloque1 -> GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(),PosicionSpawn,RotacionSpawn);
	}
}


// Called when the game starts or when spawned
void AConBuilderFacil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConBuilderFacil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
 AConBuilderFacil* AConBuilderFacil::ObtenerInstancia()
{
	return this;
}	
