#include "ORPlayerCompassMarkerSubsystem.h"

class AActor;
class UORPlayerCompassMarkerComponent;

void UORPlayerCompassMarkerSubsystem::GetPathBetweenActors(AActor* FromActor, AActor* ToActor, TArray<UORPlayerCompassMarkerComponent*>& OutPath, TMap<UORPlayerCompassMarkerComponent*, float>& FromCost) {
}

AActor* UORPlayerCompassMarkerSubsystem::GetNextWaypoint(AActor* FromActor, AActor* ToActor, float& ApproximateDistance) {
    return NULL;
}

UORPlayerCompassMarkerSubsystem::UORPlayerCompassMarkerSubsystem() {
}

