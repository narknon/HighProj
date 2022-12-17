#include "ORLightProbe.h"

AORLightProbe::AORLightProbe() {
    this->bShowNativeData = false;
    this->LightRadiusNative = 0.00f;
    this->LightBrightnessNative = 0.00f;
    this->LightFalloffNative = 0.00f;
    this->RenderDistanceNative = 0.00f;
    this->HighQualityRenderDistanceNative = 0.00f;
    this->bLightProbeDisabled = false;
    this->bLightProbeIsRendering = false;
    this->bShouldPauseCaptures = false;
    this->RenderHelperActor = NULL;
}

