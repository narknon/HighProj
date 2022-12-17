#include "ORBeginLoopEndComponent.h"

void UORBeginLoopEndComponent::End() {
}

void UORBeginLoopEndComponent::Begin() {
}

UORBeginLoopEndComponent::UORBeginLoopEndComponent() {
    this->State = EORBeginLoopEndComponentState::Off;
    this->StateTimer = 0.00f;
    this->Value = 0.00f;
}

