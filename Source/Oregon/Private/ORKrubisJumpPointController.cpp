#include "ORKrubisJumpPointController.h"

class AORKrubisJumpPointActor;

TArray<FORKrubisJumpPointPair> AORKrubisJumpPointController::MakeNewKrubisMultiPointPath(int32 NumPaths) {
    return TArray<FORKrubisJumpPointPair>();
}

AORKrubisJumpPointActor* AORKrubisJumpPointController::GetMultiPathPoint() {
    return NULL;
}

FVector AORKrubisJumpPointController::GetCurrentPathPointLocation() {
    return FVector{};
}

bool AORKrubisJumpPointController::FindWallPointNearLocation(FVector TargetLocation, float MaxDistance, FVector& WallPointLocation) {
    return false;
}

AORKrubisJumpPointActor* AORKrubisJumpPointController::FindClosestWallJumpPoint(FVector TargetLocation) {
    return NULL;
}

TArray<FORKrubisJumpPointPair> AORKrubisJumpPointController::AddKrubisMultiPointPath(int32 NumPaths, float VelocityPrediction) {
    return TArray<FORKrubisJumpPointPair>();
}

AORKrubisJumpPointController::AORKrubisJumpPointController() {
    this->PhaseTransitionPoint = NULL;
    this->DigDirectionOffset = 500.00f;
}

