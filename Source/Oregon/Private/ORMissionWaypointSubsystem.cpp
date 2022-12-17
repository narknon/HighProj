#include "ORMissionWaypointSubsystem.h"

class AActor;

void UORMissionWaypointSubsystem::SetOverrideWaypoint(const FGameplayTag& ObjectiveId, AActor* Location) {
}

TArray<FWaypointResult> UORMissionWaypointSubsystem::GetAllWaypoints() {
    return TArray<FWaypointResult>();
}

TArray<FWaypointResult> UORMissionWaypointSubsystem::GetActiveWaypoints() {
    return TArray<FWaypointResult>();
}

UORMissionWaypointSubsystem::UORMissionWaypointSubsystem() {
}

