#include "ORGameMapSubsystem.h"

void UORGameMapSubsystem::SetMapRegionDiscoverabilityEnabled(bool bEnable) {
}

bool UORGameMapSubsystem::IsMapRegionDiscoverabilityEnabled() const {
    return false;
}

UORGameMapSubsystem::UORGameMapSubsystem() {
    this->bDiscoverabilityEnabled = false;
}

