#include "MercunaNavModifierVolume.h"
#include "MerVolumeComponent.h"

class AMercunaNavGraph;

void AMercunaNavModifierVolume::SetUsageTypes(const FMercunaNavUsageTypes& NewUsageTypes) {
}

void AMercunaNavModifierVolume::SetSize(FVector Size) {
}

void AMercunaNavModifierVolume::SetEnabled(bool Enabled) {
}

void AMercunaNavModifierVolume::SetCostMultiplier(float NewCostMultiplier) {
}

void AMercunaNavModifierVolume::RemoveFromGraph() {
}

void AMercunaNavModifierVolume::AddToGraph(AMercunaNavGraph* NewNavGraph) {
}

AMercunaNavModifierVolume::AMercunaNavModifierVolume() {
    this->NavGraph = NULL;
    this->VolumeComponent = CreateDefaultSubobject<UMerVolumeComponent>(TEXT("VolumeComponent"));
    this->bEnabled = true;
    this->CostMultiplier = 1.00f;
    this->BrushComponent = NULL;
}

