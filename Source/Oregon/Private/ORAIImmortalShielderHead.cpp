#include "ORAIImmortalShielderHead.h"

void AORAIImmortalShielderHead::SetupBehaviorTree() {
}

void AORAIImmortalShielderHead::LockToShieldTargetIfInPosition() {
}


void AORAIImmortalShielderHead::HandleTetherBreakLOS() {
}

void AORAIImmortalShielderHead::HandleTetherBreakDistance() {
}


bool AORAIImmortalShielderHead::EaseTowardsTargetLocation(float DeltaTime) {
    return false;
}

void AORAIImmortalShielderHead::DoShielderAttach() {
}

void AORAIImmortalShielderHead::DoIdle() {
}

void AORAIImmortalShielderHead::CheckTetherBreak() {
}

void AORAIImmortalShielderHead::BreakTether() {
}

AORAIImmortalShielderHead::AORAIImmortalShielderHead() {
    this->AttachMontage = NULL;
    this->TargetedEaseSpeed = 500.00f;
    this->TetherBreakDistance = 800.00f;
    this->TetherBreakTime = 3.00f;
    this->AttachVertexSectionIndex = -1;
    this->AttachVertexVertexIndex = -1;
    this->bShielding = false;
    this->bInPosition = false;
    this->bCanDistanceBreakTether = true;
    this->bCanLOSBreakTether = true;
    this->ShielderEyesDynamicMaterial = NULL;
    this->Immortal = NULL;
    this->ShieldTarget = NULL;
    this->ShielderAttachActor = NULL;
    this->ElapsedTime = 0.00f;
}

