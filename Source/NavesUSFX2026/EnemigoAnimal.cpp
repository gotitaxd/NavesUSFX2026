// Fill ut your copyright notice in the Description page of Project Settings.


#include "EnemigoAnimal.h"
#include "Bonus.h"
#include "Engine/StaticMesh.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "UObject/ConstructorHelpers.h"


// Sets default values
AEnemigoAnimal::AEnemigoAnimal()
{
    PrimaryActorTick.bCanEverTick = true;
	// Carga el cilindro nativo de Unreal
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ObjetoCilindro(TEXT("StaticMesh'/Engine/BasicShapes/Cylinder.Cylinder'"));

	if (ObjetoCilindro.Succeeded())
	{
		mallaCilindro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaCilindro"));
		mallaCilindro->SetupAttachment(RootComponent);
		mallaCilindro->SetStaticMesh(ObjetoCilindro.Object);
		mallaCilindro->SetRelativeLocation(FVector(0.f, 0.f, -90.f)); // Lo ajusta al suelo
	}
}
//esto se agrego para poder hacer mover el bonus a una posicion especifica, se llama desde el begin play del enemigo animal para que el bonus se mueva a esa posicion despues de 5 segundos
void AEnemigoAnimal::MoverBonus()
{
	ABonus* Bonus = ABonus::GetInstancia(GetWorld());
    Bonus->SetActorLocation(FVector(0.0f, 0.0f, 250.0f));  
}

// Called when the game starts or when spawned
void AEnemigoAnimal::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerDisparo, this, &AEnemigoAnimal::Disparar, 1.5f, true);
}

// Called every frame
void AEnemigoAnimal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AActor* MiNave = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (MiNave)
	{

		FVector Direccion = (MiNave->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		Direccion.Z = 0.0f;
		AddActorWorldOffset(Direccion * 50.f * DeltaTime);
	}
}
// Called to bind functionality to input
void AEnemigoAnimal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void AEnemigoAnimal::Disparar()
{
	AActor* MiNave = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (MiNave)
	{

		DrawDebugLine(GetWorld(),GetActorLocation(),MiNave->GetActorLocation(),FColor::Red,false,0.15f,08.f);
		MiNave->Destroy();
	}
}

void AEnemigoAnimal::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AActor* MiNave = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (OtherActor && OtherActor == MiNave)
	{

		OtherActor->Destroy();
	}
}