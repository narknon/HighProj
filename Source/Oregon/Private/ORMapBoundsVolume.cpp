#include "ORMapBoundsVolume.h"

class UObject;
class AORMapBoundsVolume;

FVector2D AORMapBoundsVolume::GetNormalizedPositionFromWorldLocation(const FVector& Location) {
    return FVector2D{};
}

AORMapBoundsVolume* AORMapBoundsVolume::GetActiveMapBoundsInfo(UObject* WorldContextObject) {
    return NULL;
}

void AORMapBoundsVolume::FindAllMapActors() {
}

AORMapBoundsVolume::AORMapBoundsVolume() {
    this->MapTexture = NULL;
}

