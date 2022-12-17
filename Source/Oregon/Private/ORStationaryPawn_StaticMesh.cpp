#include "ORStationaryPawn_StaticMesh.h"
#include "Components/StaticMeshComponent.h"

AORStationaryPawn_StaticMesh::AORStationaryPawn_StaticMesh() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StationaryPawnMesh"));
}

