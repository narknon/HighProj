#include "ORNarrativeInfluenceVolume.h"

void AORNarrativeInfluenceVolume::SetRackFocusEnabled(bool bEnabled) {
}

void AORNarrativeInfluenceVolume::SetNarrativeFollowEnabled(bool bEnabled) {
}

void AORNarrativeInfluenceVolume::SetNarrativeAimEnabled(bool bEnabled) {
}

void AORNarrativeInfluenceVolume::SetEnabled(bool bEnabled) {
}



AORNarrativeInfluenceVolume::AORNarrativeInfluenceVolume() {
    this->bEnabledOnBeginPlay = true;
    this->bHideHUDPrompts = false;
    this->bLockPlayerMovmement = false;
    this->LockPlayerMovmementThreshold = 1.00f;
    this->bNarrativeAimEnabled = false;
    this->bRackFocus = false;
    this->RackFocusMinFOV = 60.00f;
    this->bUseCameraMinY = false;
    this->MinCameraY = 0.00f;
    this->bEscapeAimIfMoving = false;
    this->EscapeAimIfMovingForTime = 0.00f;
    this->bEscapeAimIfMouseInput = false;
    this->EscapeAimIfMouseInputExtraTime = 0.00f;
    this->EscapeAimAngle = 0.00f;
    this->PlayerAimFreeLookTime = 0.00f;
    this->PlayerAimInfluenceTarget = NULL;
    this->IgnoreAimInfluenceFreeRangeOnce = false;
    this->IgnoreAimInfluenceFreeRangeThreshold = 1.00f;
    this->TweenMaxSpeed = 50.00f;
    this->TweenDeceleration = 25.00f;
    this->TweenAcceleration = 25.00f;
    this->PlayerAimInfluenceReturnScalar = 1.00f;
    this->LookAtSocketName = TEXT("NIV_Look");
    this->bNarrativeFollowEnabled = false;
    this->FollowInfluenceMode = ENarrativeInfluenceFollowMode::Drag;
    this->PlayerFollowInfluenceTarget = NULL;
    this->FollowDeadzoneDistance = 0.00f;
    this->LeaderFollowDestinationTarget = NULL;
    this->FollowBehindDistance = 0.00f;
    this->FollowBehindMaxInfluence = 1.00f;
    this->PlayerFollowReturnEventThreshold = 0.70f;
    this->bIsPlayerInside = false;
    this->bIsEnabled = true;
    this->bIsLockingPlayerMovement = false;
    this->bIsHidingHUDPrompts = false;
}

