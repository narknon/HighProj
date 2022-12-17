#include "ORAnimNotifyState_TransformActor.h"

UORAnimNotifyState_TransformActor::UORAnimNotifyState_TransformActor() {
    this->EaseDuration = 0.00f;
    this->EasingFunction = EEasingFunc::Linear;
    this->OwningActor = NULL;
}

