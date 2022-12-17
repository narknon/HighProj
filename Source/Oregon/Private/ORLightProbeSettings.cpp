#include "ORLightProbeSettings.h"

UORLightProbeSettings::UORLightProbeSettings() {
    this->AOInfluenceParameterName = TEXT("AO Influence");
    this->SubsurfaceIntensityParameterName = TEXT("SubSurface Influence");
    this->AOInfluence = 2.50f;
    this->SubsurfaceIntensity = -0.25f;
    this->LGLightMultiplier = 0.20f;
    this->LightProbe64HighPP.AddDefaulted(16);
    this->LightProbe64LowPP.AddDefaulted(16);
}

