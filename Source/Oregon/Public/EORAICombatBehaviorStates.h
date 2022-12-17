#pragma once
#include "CoreMinimal.h"
#include "EORAICombatBehaviorStates.generated.h"

UENUM(BlueprintType)
enum class EORAICombatBehaviorStates : uint8 {
    ECB_Default,
    ECB_Charging,
    ECB_Retreating,
    ECB_Searching,
    ECB_Panicking,
    ECB_CombatWait,
    ECB_CombatStandStill,
    ECB_Custom = 0xFF,
    ECB_MAX UMETA(Hidden),
};

