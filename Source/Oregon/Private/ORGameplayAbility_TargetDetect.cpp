#include "ORGameplayAbility_TargetDetect.h"

class AActor;

void UORGameplayAbility_TargetDetect::OnTargetRemoved_Implementation(AActor* TargetActor) {
}

void UORGameplayAbility_TargetDetect::OnTargetAdded_Implementation(AActor* TargetActor) {
}

void UORGameplayAbility_TargetDetect::OnActorExited(AActor* OtherActor, int32 VolumeIndex) {
}

void UORGameplayAbility_TargetDetect::OnActorEntered(AActor* OtherActor, int32 VolumeIndex) {
}

UORGameplayAbility_TargetDetect::UORGameplayAbility_TargetDetect() {
    this->TriggerVolumeClass = NULL;
    this->TriggerSphereRadius = 100.00f;
    this->MaxTargets = -1;
    this->bAllowDeadTargets = false;
    this->bCanTargetPlayer = false;
}

