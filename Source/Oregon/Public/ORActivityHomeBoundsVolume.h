#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "ORActivityHomeBoundsVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORActivityHomeBoundsVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    AORActivityHomeBoundsVolume();
};

