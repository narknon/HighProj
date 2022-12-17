#include "ORDouglasHookPointController.h"

class AActor;

AActor* AORDouglasHookPointController::GetCurrentHookPoint() {
    return NULL;
}

FVector AORDouglasHookPointController::FindNextJumpPoint() {
    return FVector{};
}

FVector AORDouglasHookPointController::FindInitialJumpPoint(FVector CurrentDouglasLocation, FVector CurrentDouglasForward) {
    return FVector{};
}

AORDouglasHookPointController::AORDouglasHookPointController() {
}

