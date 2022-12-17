#include "ORAnimNotifyState_CameraAnim.h"

UORAnimNotifyState_CameraAnim::UORAnimNotifyState_CameraAnim() {
    this->CameraAnim = NULL;
    this->CameraAnimPlayRate = 1.00f;
    this->CameraAnimPlayScale = 1.00f;
    this->CameraAnimBlendInTime = 0.00f;
    this->CameraAnimBlendOutTime = 0.00f;
    this->bLooping = false;
    this->bStopAutomatically = true;
    this->bKeepStateAtEnd = false;
    this->bStopCameraAnimsOnStart = false;
}

