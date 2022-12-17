#include "OR3DGateVolume.h"
#include "Components/StaticMeshComponent.h"

UStaticMeshComponent* AOR3DGateVolume::GetStaticMeshComponent() const {
    return NULL;
}

AOR3DGateVolume::AOR3DGateVolume() {
    this->GateMesh = NULL;
    this->GateMeshMaterial = NULL;
    this->StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
}

