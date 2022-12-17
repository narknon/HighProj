#include "ORLightProbeController.h"

class UTexture;
class UMaterialInstanceDynamic;

void AORLightProbeController::SetupLight(int32 LightNum, float LightRadius, FLinearColor& LightColor, FVector& LightLocation, float LightFalloff, float LightBrightness, UMaterialInstanceDynamic* PPReference, UTexture* SceneTextureTarget) {
}

void AORLightProbeController::ClearLights(int32 NumLights, UMaterialInstanceDynamic* PPReference) {
}

AORLightProbeController::AORLightProbeController() {
    this->bUseGlobalIllumination = false;
}

