#include "ORBlinkAndShrinkComponent.h"

void UORBlinkAndShrinkComponent::RestartBlinkAndShrink() {
}

void UORBlinkAndShrinkComponent::ClearBlinkAndShrinkValues() {
}

UORBlinkAndShrinkComponent::UORBlinkAndShrinkComponent() {
    this->NoBlinkTime = 10.00f;
    this->SlowBlinkTime = 5.00f;
    this->FastBlinkTime = 3.00f;
    this->bShouldBeDestroyedOnShrink = true;
}

