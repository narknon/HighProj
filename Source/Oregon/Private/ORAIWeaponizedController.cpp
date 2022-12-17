#include "ORAIWeaponizedController.h"

class AActor;

void AORAIWeaponizedController::TriggerTaunt() {
}

void AORAIWeaponizedController::StartTauntTimer() {
}

void AORAIWeaponizedController::SetAbilityTargetActor_Implementation(AActor* NewTargetActor) {
}

void AORAIWeaponizedController::ResetAttractionPointReuse() {
}

void AORAIWeaponizedController::PreventAttractionPointReuse() {
}

AActor* AORAIWeaponizedController::GetAbilityTargetActor_Implementation() const {
    return NULL;
}

AORAIWeaponizedController::AORAIWeaponizedController() {
    this->HitReactCriticalHitThreshold = 50.00f;
    this->HitReactAccumulatedDamageThreshold = 60.00f;
    this->MinTauntWaitTime = 2;
    this->MaxTauntWaitTime = 5;
    this->PreventAttractionPointReuseTime = 10.00f;
}

