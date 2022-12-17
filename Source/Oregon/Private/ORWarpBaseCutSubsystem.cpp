#include "ORWarpBaseCutSubsystem.h"

class UObject;
class AActor;

void UORWarpBaseCutSubsystem::UpdateWarpBaseCut(AActor* CutActor, float Radius) {
}

void UORWarpBaseCutSubsystem::UnregisterWarpBaseCut(UObject* WorldContextObject, AActor* CutActor) {
}

void UORWarpBaseCutSubsystem::RegisterWarpBaseCut(AActor* CutActor, float Radius) {
}

UORWarpBaseCutSubsystem::UORWarpBaseCutSubsystem() {
    this->ParameterCollection = NULL;
}

