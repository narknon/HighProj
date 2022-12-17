#include "SQFireLoop_SemiAuto.h"

void USQFireLoop_SemiAuto::TriggerPostfire() {
}

float USQFireLoop_SemiAuto::GetPrefireTime_Implementation() {
    return 0.0f;
}

float USQFireLoop_SemiAuto::GetPostfireTime_Implementation() {
    return 0.0f;
}

USQFireLoop_SemiAuto::USQFireLoop_SemiAuto() {
    this->CurrentFiringState = ESAS_Ready;
}

