// Fill out your copyright notice in the Description page of Project Settings.


#include "ConBuilderDificil.h"

// Sets default values
AConBuilderDificil::AConBuilderDificil()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AConBuilderDificil::CrearEnemigos()
{
	// Lógica para MUCHOS enemigos
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Generando 20 Enemigos ¡MODO DIFÍCIL!"));
}

void AConBuilderDificil::CrearAsteroides()
{
	// Lógica para MUCHOS asteroides
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Generando 50 Asteroides ¡MODO DIFÍCIL!"));
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

