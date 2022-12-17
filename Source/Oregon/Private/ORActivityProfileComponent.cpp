#include "ORActivityProfileComponent.h"

void UORActivityProfileComponent::Stop() {
}

bool UORActivityProfileComponent::Restart() {
    return false;
}

bool UORActivityProfileComponent::IsRunning() const {
    return false;
}

void UORActivityProfileComponent::Interrupt() {
}

float UORActivityProfileComponent::GetProgress() const {
    return 0.0f;
}

bool UORActivityProfileComponent::Execute() {
    return false;
}

UORActivityProfileComponent::UORActivityProfileComponent() {
    this->ExecutionMode = EActivityExecutionMode::ForwardSequential;
    this->HomeBounds = NULL;
    this->bAutoFindHomeBounds = true;
    this->CompoundActivity = NULL;
}

