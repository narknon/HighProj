#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolumeComponent.h"
#include "ORLightCastShadowToggle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORLightCastShadowToggle : public UORTriggerVolumeComponent {
    GENERATED_BODY()
public:
    UORLightCastShadowToggle();
};

