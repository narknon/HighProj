#include "DeferredMissionCallback.h"

FDeferredMissionCallback::FDeferredMissionCallback() {
    this->Owner = NULL;
    this->State = EORMissionState::Inactive;
    this->bOnlyDebug = false;
    this->Ordinal = 0;
}

