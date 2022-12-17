#pragma once
#include "CoreMinimal.h"
#include "ENipulonCloneState.generated.h"

UENUM(BlueprintType)
enum class ENipulonCloneState : uint8 {
    None,
    Disabled,
    Single,
    RingSplit,
    SphereSplit,
    Ring,
    Sphere,
    RingPause,
    SpherePause,
    Mob,
    Custom,
    COUNT,
};

