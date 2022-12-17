#include "NarrativeInfluenceVolumeEffect.h"

FNarrativeInfluenceVolumeEffect::FNarrativeInfluenceVolumeEffect() {
    this->EffectToApply = NULL;
    this->Threshold = 0.00f;
    this->bInterpolate = false;
    this->InterpInner = 0.00f;
    this->InterpOuter = 0.00f;
}

