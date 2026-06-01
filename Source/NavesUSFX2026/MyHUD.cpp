#include "MyHUD.h"
#include "NavesUSFX2026Pawn.h" 
#include "Kismet/GameplayStatics.h"

// ⚠️ NOTA: Incluye aquí el archivo .h de tu nave/personaje real.
// Ejemplo: #include "NaveJugador.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	// Buscamos al jugador en el mundo
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		
	}
}

void AMyHUD::OnVidaCambiada(float NuevaVida)
{
	if (GEngine)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, FString::Printf(TEXT("¡EL HUD SE ENTERÓ! Nueva Vida: %.0f"), NuevaVida));
	}
	
}

	void AMyHUD::OnPuntajeCambiado(int32 NuevoPuntaje)
	{
		
		UE_LOG(LogTemp, Warning, TEXT("HUD C++: La interfaz notificó un cambio de puntaje: %d"), NuevoPuntaje);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Orange, FString::Printf(TEXT("⭐ ¡EL HUD DETECTÓ PUNTOS! Puntaje Actual: %d"), NuevoPuntaje));
		}
	}