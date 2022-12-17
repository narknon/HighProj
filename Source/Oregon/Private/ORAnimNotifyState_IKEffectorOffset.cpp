#include "ORAnimNotifyState_IKEffectorOffset.h"

UORAnimNotifyState_IKEffectorOffset::UORAnimNotifyState_IKEffectorOffset() {
    this->IKType = EActorIKTraceType::RightFoot;
    this->OffsetBlendSpeed = 0.00f;
    this->bIsReset = false;
    this->bIKEnableState = false;
}

