#include "DynamicPostEffect.h"

FDynamicPostEffect::FDynamicPostEffect() {
    this->Material = NULL;
    this->MaxLifetime = 0.00f;
    this->Lifetime = 0.00f;
    this->Curve = NULL;
}

