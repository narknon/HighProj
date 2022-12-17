#include "ORWaypointActivity.h"

void UORWaypointActivity::OnWaypointMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

bool UORWaypointActivity::MoveToWaypoint() {
    return false;
}

UORWaypointActivity::UORWaypointActivity() {
    this->Waypoint = NULL;
}

