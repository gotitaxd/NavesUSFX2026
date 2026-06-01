// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavesUSFX2026Pawn.h"
#include "NavesUSFX2026Projectile.h"
#include "TimerManager.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "Engine/Engine.h" 

const FName ANavesUSFX2026Pawn::MoveForwardBinding("MoveForward");
const FName ANavesUSFX2026Pawn::MoveRightBinding("MoveRight");
const FName ANavesUSFX2026Pawn::FireForwardBinding("FireForward");
const FName ANavesUSFX2026Pawn::FireRightBinding("FireRight");

ANavesUSFX2026Pawn::ANavesUSFX2026Pawn()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("/Game/TwinStick/Meshes/TwinStickUFO.TwinStickUFO"));
	// Create the mesh component
	ShipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	RootComponent = ShipMeshComponent;
	ShipMeshComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	ShipMeshComponent->SetStaticMesh(ShipMesh.Object);

	// Cache our sound effect
	static ConstructorHelpers::FObjectFinder<USoundBase> FireAudio(TEXT("/Game/TwinStick/Audio/TwinStickFire.TwinStickFire"));
	FireSound = FireAudio.Object;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->TargetArmLength = 1200.f;
	CameraBoom->SetRelativeRotation(FRotator(-80.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false;

	// Create a camera...
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	CameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	CameraComponent->bUsePawnControlRotation = false;

	// Movement
	MoveSpeed = 1000.0f;
	// Weapon
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.1f;
	bCanFire = true;

	// 🎯 Inicialización de Atributos
	VidaActual = 500.f;
	PuntajeActual = 0; // Inicializamos el puntaje
	bEsInvulnerable = false;
}

void ANavesUSFX2026Pawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis(MoveForwardBinding);
	PlayerInputComponent->BindAxis(MoveRightBinding);
	PlayerInputComponent->BindAxis(FireForwardBinding);
	PlayerInputComponent->BindAxis(FireRightBinding);
}

void ANavesUSFX2026Pawn::Tick(float DeltaSeconds)
{
	// Find movement direction
	const float ForwardValue = GetInputAxisValue(MoveForwardBinding);
	const float RightValue = GetInputAxisValue(MoveRightBinding);

	const FVector MoveDirection = FVector(ForwardValue, RightValue, 0.f).GetClampedToMaxSize(1.0f);
	const FVector Movement = MoveDirection * MoveSpeed * DeltaSeconds;

	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}

	const float FireForwardValue = GetInputAxisValue(FireForwardBinding);
	const float FireRightValue = GetInputAxisValue(FireRightBinding);
	const FVector FireDirection = FVector(FireForwardValue, FireRightValue, 0.f);

	FireShot(FireDirection);
}

void ANavesUSFX2026Pawn::FireShot(FVector FireDirection)
{
	if (bCanFire == true)
	{
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				World->SpawnActor<ANavesUSFX2026Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &ANavesUSFX2026Pawn::ShotTimerExpired, FireRate);

			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			// 🎯 TRUCO DE PRUEBA: Sumamos puntos al disparar y el Observer avisará al HUD
			SumarPuntos(10);

			bCanFire = false;
		}
	}
}

void ANavesUSFX2026Pawn::ShotTimerExpired()
{
	bCanFire = true;
}

// 🛡️ Lógica de daño corregida y conectada al Observer
float ANavesUSFX2026Pawn::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	if (bEsInvulnerable || VidaActual <= 0.f)
	{
		return 0.f;
	}

	float DamageAplicado = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	VidaActual -= DamageAmount;

	// 🎯 INFORMAR AL HUD INMEDIATAMENTE MEDIANTE EL OBSERVER
	NotificarCambioVida(VidaActual);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("❤️ Vida de la Nave: %.0f / 500"), VidaActual));
	}

	bEsInvulnerable = true;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle_Invulnerabilidad, this, &ANavesUSFX2026Pawn::TerminarInvulnerabilidad, 0.5f, false);

	if (VidaActual <= 0.f)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("💀 ¡La nave ha sido destruida!"));
		}
		Destroy();
	}

	return DamageAplicado;
}

void ANavesUSFX2026Pawn::TerminarInvulnerabilidad()
{
	bEsInvulnerable = false;
}


void ANavesUSFX2026Pawn::RegistrarObserver(IInterfazObserver* NuevoObserver)
{
	if (NuevoObserver)
	{
		Observers.AddUnique(NuevoObserver);
	}
}

void ANavesUSFX2026Pawn::EliminarObserver(IInterfazObserver* ObserverAEliminar)
{
	if (ObserverAEliminar)
	{
		Observers.Remove(ObserverAEliminar);
	}
}

void ANavesUSFX2026Pawn::NotificarCambioVida(float NuevaVida)
{
	for (IInterfazObserver* Observer : Observers)
	{
		if (Observer)
		{
			Observer->OnVidaCambiada(NuevaVida); // El HUD recibe la señal aquí
		}
	}
}

void ANavesUSFX2026Pawn::NotificarCambioPuntaje(int32 NuevoPuntaje)
{
	for (IInterfazObserver* Observer : Observers)
	{
		if (Observer)
		{
			Observer->OnPuntajeCambiado(NuevoPuntaje); 
		}
	}
}

void ANavesUSFX2026Pawn::SumarPuntos(int32 Puntos)
{
	PuntajeActual += Puntos;
	NotificarCambioPuntaje(PuntajeActual);
}
void ANavesUSFX2026Pawn::OnVidaCambiada(float NuevaVida)
{
	
}	
void ANavesUSFX2026Pawn::OnPuntajeCambiado(int32 NuevoPuntaje)
{

}