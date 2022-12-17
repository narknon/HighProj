#include "MercunaNavVolume.h"
#include "MerVolumeComponent.h"

void AMercunaNavVolume::SetSize(FVector Size) {
}

void AMercunaNavVolume::SetNavigationRotation(const FRotator& Rotation) {
}

FVector AMercunaNavVolume::GetSize() const {
    return FVector{};
}

AMercunaNavVolume::AMercunaNavVolume() {
    this->VolumeComponent = CreateDefaultSubobject<UMerVolumeComponent>(TEXT("VolumeComponent"));
    this->PreciseBoundaries = true;
    this->LOD = EMercunaLevelOfDetail::Full;
    this->FullDetailBuild = true;
    this->BrushComponent = NULL;
}

