#pragma once
#include "CoreMinimal.h"
#include "EORAttackTokenState.generated.h"

UENUM(BlueprintType)
enum class EORAttackTokenState : uint8 {
    Available,
    AcquiredStealable,
    AcquiredLocked,
    Committed,
    Cooldown,
};

