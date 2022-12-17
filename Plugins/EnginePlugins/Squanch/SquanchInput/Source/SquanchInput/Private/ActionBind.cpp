#include "ActionBind.h"

FActionBind::FActionBind() {
    this->bDebugBind = false;
    this->bDefaultActive = false;
    this->bTriggerOnRelease = false;
    this->bImmediateRelease = false;
    this->bCancelSharedActions = false;
    this->bActivationDelay = false;
    this->ActivationDelay = 0.00f;
    this->bDeferReleaseThroughTimer = false;
    this->bReleaseDeferred = false;
    this->bIsDoubleTapAction = false;
    this->MaxDoubleTapTime = 0.00f;
    this->LastTapTime = 0.00f;
    this->bForwardToDifferentAction = false;
    this->bSkipReleaseAction = false;
}

