// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InterfazObserver.generated.h"

UINTERFACE(MinimalAPI)
class UInterfazObserver : public UInterface
{
	GENERATED_BODY()
};

class NAVESUSFX2026_API IInterfazObserver
{
	GENERATED_BODY()

public:
	// Funciones que ejecutarán los observadores cuando el jugador avise un cambio
	virtual void OnVidaCambiada(float NuevaVida) = 0;
	virtual void OnPuntajeCambiado(int32 NuevoPuntaje) = 0;
};