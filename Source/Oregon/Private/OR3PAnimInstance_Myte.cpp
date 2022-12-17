#include "OR3PAnimInstance_Myte.h"

UOR3PAnimInstance_Myte::UOR3PAnimInstance_Myte() {
    this->CachedPawn = NULL;
    this->bIsDead = false;
    this->bIsBeingSuctioned = false;
    this->bIsUsingIdleOverride = false;
    this->bIsJumping = false;
    this->bIsRunning = false;
    this->bWasRunning = false;
    this->bIsSplineMoving = false;
}

