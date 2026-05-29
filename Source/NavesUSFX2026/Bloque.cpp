// Fill out your copyright notice in the Description page of Project Settings.


#include "Bloque.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
ABloque::ABloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaBloque(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	MeshBloque = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBloque"));
	RootComponent = MeshBloque;
	MeshBloque->SetStaticMesh(MallaBloque.Object);

}

// Called when the game starts or when spawned
void ABloque::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Posicion = GetActorLocation();
	Posicion.X += 150.f * DeltaTime; 

	Posicion.Y += FMath::Sign(FMath::Sin(GetWorld()->GetTimeSeconds() * 3.f)) * 300.f * DeltaTime;

	if (Posicion.X > 700.f) Posicion.X = -700.f; 
	SetActorLocation(Posicion);

}
void ABloque::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	
	AActor* MiNave = GetWorld()->GetFirstPlayerController()->GetPawn();

	if (OtherActor && OtherActor == MiNave)
	{
		OtherActor->TakeDamage(20.f, FDamageEvent(), GetInstigatorController(), this);
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Orange, TEXT(" ¡Asteroide destruido por chocar con la Nave!"));
		Destroy();
	}
}
