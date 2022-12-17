#include "ORInfoScanPingActor.h"
#include "Components/StaticMeshComponent.h"

void AORInfoScanPingActor::DeactivatePing() {
}

AORInfoScanPingActor::AORInfoScanPingActor() {
    this->PingMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PingMesh"));
    this->PingMeshMaterial = NULL;
    this->PingSpeed = 100.00f;
    this->MinPingScale = 5.00f;
    this->MaxPingScale = 50.00f;
    this->UnitsPerMeshScale = 35.00f;
}

