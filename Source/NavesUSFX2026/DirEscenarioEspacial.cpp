

#include "DirEscenarioEspacial.h"

// Sets default values
ADirEscenarioEspacial::ADirEscenarioEspacial()
{

	PrimaryActorTick.bCanEverTick = false;

	// Inicializamos el puntero en seguro seguro (nullptr)
	EscenarioBuilder = nullptr;
}

// Called when the game starts or when spawned
void ADirEscenarioEspacial::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADirEscenarioEspacial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ADirEscenarioEspacial::SetBuilder(IBuilder* NuevoBuilder)
{
	EscenarioBuilder = NuevoBuilder;
}

// El cerebro del patrón Builder: Aquí se decide el ORDEN de la construcción
void ADirEscenarioEspacial::ConstruirEscenario()
{
	if (EscenarioBuilder)
	{
		EscenarioBuilder->CrearEnemigos();
		EscenarioBuilder->CrearAsteroides();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, TEXT("Director: ¡Escenario construido por completo!"));
	}
	else
	{
		// Alerta por si se nos olvidó pasarle un Builder antes
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Director Error: No tengo un Builder asignado para construir."));
	}
}
