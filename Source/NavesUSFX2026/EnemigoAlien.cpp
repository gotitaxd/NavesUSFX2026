// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAlien.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigoAlien::AEnemigoAlien()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaEnemigoNave(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	// mallaEnemigo->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	// if (MallaEnemigoNave.Succeeded())  mallaEnemigo->SetStaticMesh(MallaEnemigoNave.Object);
}

// Called when the game starts or when spawned
void AEnemigoAlien::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemigoAlien::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}