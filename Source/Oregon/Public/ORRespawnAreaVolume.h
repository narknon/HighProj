#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "ORRespawnAreaVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORRespawnAreaVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    AORRespawnAreaVolume();
};

