#include "ORGameplayAbility_Execution.h"

class USyncedPlayerAnimationComponent;

void UORGameplayAbility_Execution::StartSyncedAnimation(USyncedPlayerAnimationComponent* SyncAnimationComp) {
}

void UORGameplayAbility_Execution::OnSyncedAnimationComplete(USyncedPlayerAnimationComponent* SyncAnimationComp) {
}

void UORGameplayAbility_Execution::FailsafeTimerElapsed() {
}

UORGameplayAbility_Execution::UORGameplayAbility_Execution() {
    this->GameplayEffect = NULL;
    this->RotationDeadlineSeconds = 0.30f;
    this->ExecutionTimeoutSeconds = 3.50f;
}

