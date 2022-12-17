#include "ORPatrolRoute.h"

int32 AORPatrolRoute::NumWaypoints() const {
    return 0;
}

bool AORPatrolRoute::HasMinValidWaypoints(int32 MinWaypoints) const {
    return false;
}

bool AORPatrolRoute::GetNextIncrementingWaypointIndexAndWaypointData(const int32 CurrentWaypointIndex, int32& NextWaypointIndex, FORPatrolWaypoint& NextWaypointDataCopy) {
    return false;
}

bool AORPatrolRoute::GetNextIncrementingWaypointIndexAndLocation(const int32 CurrentWaypointIndex, int32& NextWaypointIndex, FVector& NextWaypointLocation) {
    return false;
}

int32 AORPatrolRoute::GetNextIncrementingWaypointIndex(int32 CurrentWaypointIndex) const {
    return 0;
}

bool AORPatrolRoute::GetLocationForWaypointIndex(int32 WaypointIndex, FVector& WaypointLocation) const {
    return false;
}

AORPatrolRoute::AORPatrolRoute() {
}

