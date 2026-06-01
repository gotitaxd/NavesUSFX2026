// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

UCLASS()
class NAVESUSFX2026_API AMyHUD : public AHUD
{
	GENERATED_BODY()

protected:
	// Sobrescribimos el BeginPlay para suscribirnos a los eventos al iniciar el juego
	virtual void BeginPlay() override;

public:
	// Estas son las funciones "Observadoras" (reaccionarán automáticamente)
	UFUNCTION()
	void OnVidaCambiada(float NuevaVida);

	UFUNCTION()
	void OnPuntajeCambiado(int32 NuevoPuntaje);

};
