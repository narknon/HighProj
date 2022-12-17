#include "ORStreamingRegionVolumeComponent.h"

UORStreamingRegionVolumeComponent::UORStreamingRegionVolumeComponent() {
    this->bEnabled = true;
    this->Shape = EORStreamingRegionVolumeComponentShape::Box;
    this->SphereRadius = 50.00f;
    this->CachedType = EORStreamingRegionVolumeType::Gameplay;
    this->bDrawOnlyIfSelected = false;
}

