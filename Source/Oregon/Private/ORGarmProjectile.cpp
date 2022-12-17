#include "ORGarmProjectile.h"
#include "NiagaraComponent.h"
#include "Components/StaticMeshComponent.h"

void AORGarmProjectile::AttemptActivation() {
}

AORGarmProjectile::AORGarmProjectile() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->FXComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("FXComponent"));
}

