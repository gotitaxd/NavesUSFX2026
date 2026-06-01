// Fill out your copyright notice in the Description page of Project Settings.


#include "ConBuilderDificil.h"
#include "EnemigoAnimal.h"	
#include "Bloque.h"


// Sets default value
AConBuilderDificil::AConBuilderDificil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AConBuilderDificil::CrearEnemigos()
{
	// Lógica para MUCHOS enemigos
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Generando 20 Enemigos ¡MODO DIFÍCIL!"));
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Generando 2 Enemigos (Modo Fácil)"));
	if (!GetWorld()) return;

	for (int i = 0; i < 2; i++)
	{
		FVector PosicionSpawn = FVector(-1200.f, (i * 300.f) + 400.f, 300.f);
		FRotator RotacionSpawn = FRotator::ZeroRotator;

		AEnemigoAnimal2->GetWorld()->SpawnActor<AEnemigoAnimal>(AEnemigoAnimal::StaticClass(),PosicionSpawn,RotacionSpawn);
	}
}

void AConBuilderDificil::CrearAsteroides()AConBuilderFacil* ObtenerInstancia();
{
	// Lógica para MUCHOS asteroides
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Generando 50 Asteroides ¡MODO DIFÍCIL!"));

	for (int i = 0; i < 5; i++)
	{
		FVector PosicionSpawn = FVector(600.f, i * 200.f, 100.f);
		FRotator RotacionSpawn = FRotator::ZeroRotator;

		ABloque1->GetWorld()->SpawnActor<ABloque>(ABloque::StaticClass(), PosicionSpawn, RotacionSpawn);
	}
}
// Called when the game starts or when spawned
void AConBuilderDificil::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConBuilderDificil::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
AConBuilderDificil* AConBuilderDificil::ObtenerInstancia()
{
	return this;
}

