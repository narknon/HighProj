#include "MercunaObstacleComponent.h"

UMercunaObstacleComponent::UMercunaObstacleComponent() {
    this->bAutomatic = true;
    this->Type = EMercunaObstacleType::Sphere;
    this->SphereRadius = 0.00f;
    this->CylinderRadius = 0.00f;
    this->CylinderHeight = 0.00f;
}

