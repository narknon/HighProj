#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "ORForceCombatVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORForceCombatVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    AORForceCombatVolume();
};

