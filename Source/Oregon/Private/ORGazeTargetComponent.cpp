#include "ORGazeTargetComponent.h"

bool UORGazeTargetComponent::IsObjectBeingLookingAt() const {
    return false;
}

UORGazeTargetComponent::UORGazeTargetComponent() {
    this->TimeTillEvent = 0.00f;
    this->ScreenWidthPadding = 0.00f;
    this->ScreenHeightPadding = 0.00f;
    this->bTargetActivated = true;
    this->GazeMaxDistanceOverride = 0.00f;
}

