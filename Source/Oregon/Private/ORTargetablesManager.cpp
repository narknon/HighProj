#include "ORTargetablesManager.h"

class AActor;
class UORTargetableComponent;

void AORTargetablesManager::ToggleLockCurrentTarget(bool bLock) {
}

void AORTargetablesManager::RemoveFromTargetManager(AActor* InActor) {
}

TArray<AActor*> AORTargetablesManager::GetTargetableActors() {
    return TArray<AActor*>();
}

FAimAssistTargetInfo AORTargetablesManager::GetCurrentTargetOfType(ETargetFilterTypes TargetFilterType) const {
    return FAimAssistTargetInfo{};
}

void AORTargetablesManager::EnableTargetablesWithTag(const FGameplayTag TargetableTag) const {
}

void AORTargetablesManager::DisableTargetablesWithTag(const FGameplayTag TargetableTag) const {
}

void AORTargetablesManager::AddToTargetManager(AActor* InActor, UORTargetableComponent* Component) {
}

AORTargetablesManager::AORTargetablesManager() {
    this->DefaultMaxDistance = 8192.00f;
    this->CurrentMaxDistance = 340282346638528859811704183484516925440.00f;
    this->AimAssistTraceChannel = ECC_GameTraceChannel3;
    this->CameraTraceChannel = ECC_Camera;
    this->AimAssistAngleWeight = 0.50f;
    this->AimAssistDistanceWeight = 0.50f;
    this->AimAssistVisibilityWeight = 0.50f;
    this->AimAssistLOSCurve = NULL;
    this->ReceivedLineOfSightResponse = true;
    this->VisibilityTraceCount = 0;
    this->ReceivedVisibilityResponses = 0;
}

