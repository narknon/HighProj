#include "ORPatrolActivity.h"

void UORPatrolActivity::OnWaypointMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void UORPatrolActivity::MoveToNextWaypoint() {
}

UORPatrolActivity::UORPatrolActivity() {
    this->PatrolRoute = NULL;
}

