#include "ORPlayerCompassMarkerComponent.h"

void UORPlayerCompassMarkerComponent::SetEnabled(const bool bNewEnabled) {
}

UORPlayerCompassMarkerComponent::UORPlayerCompassMarkerComponent() {
    this->bIsEnabled = true;
    this->SkipRelevancyRadius = 1024.00f;
}

