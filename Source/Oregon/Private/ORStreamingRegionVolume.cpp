#include "ORStreamingRegionVolume.h"
#include "ORStreamingRegionVolumeComponent.h"

void AORStreamingRegionVolume::SetEnabled(bool bEnabled) {
}

AORStreamingRegionVolume::AORStreamingRegionVolume() {
    this->Type = EORStreamingRegionVolumeType::Gameplay;
    this->Volume = CreateDefaultSubobject<UORStreamingRegionVolumeComponent>(TEXT("Volume"));
}

