#include "ORHarvesterTrailComponent.h"

class UStaticMesh;

void UORHarvesterTrailComponent::SetEnabled(bool bInEnabled) {
}

void UORHarvesterTrailComponent::CreateImmediateMesh(UStaticMesh* Mesh) {
}

UORHarvesterTrailComponent::UORHarvesterTrailComponent() {
    this->MeshToSpawn = NULL;
    this->DistanceBetweenSpawns = 30.00f;
    this->DistanceToKeepAlive = 150.00f;
    this->MaxPoolSize = 5;
    this->TimeDecayDistance = 15.00f;
    this->DecayTime = 2.00f;
    this->ImmediateMeshAlphaMin = 0.20f;
}

