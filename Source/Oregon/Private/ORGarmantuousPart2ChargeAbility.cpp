#include "ORGarmantuousPart2ChargeAbility.h"



void UORGarmantuousPart2ChargeAbility::HandleIntroTimerFinished() {
}

void UORGarmantuousPart2ChargeAbility::HandleChargeComplete() {
}

void UORGarmantuousPart2ChargeAbility::BeginCharge() {
}

UORGarmantuousPart2ChargeAbility::UORGarmantuousPart2ChargeAbility() {
    this->Garm = NULL;
    this->Player = NULL;
    this->GarmMovementComp = NULL;
    this->GarmAnimInstance = NULL;
    this->ActiveChargeArea = NULL;
}

