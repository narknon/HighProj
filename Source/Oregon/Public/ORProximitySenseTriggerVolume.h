#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolumeComponent.h"
#include "ORProximitySenseTriggerVolume.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORProximitySenseTriggerVolume : public UORTriggerVolumeComponent {
    GENERATED_BODY()
public:
    UORProximitySenseTriggerVolume();
};

