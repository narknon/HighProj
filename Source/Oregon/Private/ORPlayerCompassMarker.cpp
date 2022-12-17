#include "ORPlayerCompassMarker.h"
#include "ORPlayerCompassMarkerComponent_Standard.h"
#include "Components/CapsuleComponent.h"

void AORPlayerCompassMarker::SetEnabled(bool bNewEnabled) {
}

bool AORPlayerCompassMarker::IsEnabled() {
    return false;
}

AORPlayerCompassMarker::AORPlayerCompassMarker() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule"));
    this->SpriteComponent = NULL;
    this->CompassMarker = CreateDefaultSubobject<UORPlayerCompassMarkerComponent_Standard>(TEXT("CompassMarker"));
    this->SkipRelevancyRadius = 1024.00f;
}

