#include "ORFireLoop_Melee.h"

class UORGlobalEventPayload;

void UORFireLoop_Melee::OnMeleeAttackEnd(const UORGlobalEventPayload* EventData) {
}

UORFireLoop_Melee::UORFireLoop_Melee() {
    this->Cooldown = 1.00f;
}

