#include "ORRoamActivity.h"

bool UORRoamActivity::RoamToNextWaypoint() {
    return false;
}

void UORRoamActivity::OnWaypointMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

UORRoamActivity::UORRoamActivity() {
    this->RoamSearchRadius = 500.00f;
    this->RoamDuration = 0.00f;
    this->RoamDurationDeviation = 0.00f;
}

