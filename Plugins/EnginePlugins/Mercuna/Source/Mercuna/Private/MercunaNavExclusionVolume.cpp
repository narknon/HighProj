#include "MercunaNavExclusionVolume.h"
#include "MerVolumeComponent.h"

class AMercunaNavGraph;

void AMercunaNavExclusionVolume::SetSize(FVector Size) {
}

void AMercunaNavExclusionVolume::RemoveFromGraphs() {
}

FVector AMercunaNavExclusionVolume::GetSize() const {
    return FVector{};
}

void AMercunaNavExclusionVolume::AddToGraph(AMercunaNavGraph* NewNavGraph) {
}

void AMercunaNavExclusionVolume::AddToAllGraphs() {
}

AMercunaNavExclusionVolume::AMercunaNavExclusionVolume() {
    this->VolumeComponent = CreateDefaultSubobject<UMerVolumeComponent>(TEXT("VolumeComponent"));
    this->bApplyToAllNavGraphs = true;
    this->NavGraph = NULL;
    this->BrushComponent = NULL;
}

