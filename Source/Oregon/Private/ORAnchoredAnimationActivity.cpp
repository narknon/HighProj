#include "ORAnchoredAnimationActivity.h"

class AActor;

void UORAnchoredAnimationActivity::UpdateAnchoredAnimationRotation() {
}

void UORAnchoredAnimationActivity::UpdateAnchoredAnimationLocation() {
}

void UORAnchoredAnimationActivity::StartAnchoredAnimation() {
}

void UORAnchoredAnimationActivity::OnAnimOffsetMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult) {
}

void UORAnchoredAnimationActivity::OnAnchorDestroyed(AActor* Actor) {
}

void UORAnchoredAnimationActivity::MoveToAnimOffset() {
}

void UORAnchoredAnimationActivity::FinishedAnchoredAnimation() {
}

UORAnchoredAnimationActivity::UORAnchoredAnimationActivity() {
    this->OverrideAnchorActor = NULL;
    this->PreAnimationRotateSpeed = 180.00f;
    this->PreLerpAnimationDelay = 0.00f;
    this->AnimationAnchorLerpSpeed = 500.00f;
    this->AnimationHoldTime = 5.00f;
    this->PostLerpDuration = 0.25f;
    this->bNegatePreAnimationFacingRotation = false;
    this->bSkipAnimationAnchorLerp = false;
    this->bSkipPathing = false;
    this->bFindNearestAnchor = false;
    this->bConstrainToGroundPlane = false;
    this->bRetryOnFailedPathing = false;
    this->MoveToAcceptanceRadius = 0.00f;
    this->bRandomRoamAway = true;
    this->AnchorActor = NULL;
}

