#include "ORFadeOutAndDestroyComponent.h"

UORFadeOutAndDestroyComponent::UORFadeOutAndDestroyComponent() {
    this->FadeTarget = NULL;
    this->MaterialIndex = 0;
    this->Material = NULL;
    this->Lifetime = 0.00f;
}

