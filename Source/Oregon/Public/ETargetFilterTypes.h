#pragma once
#include "CoreMinimal.h"
#include "ETargetFilterTypes.generated.h"

UENUM(BlueprintType)
enum class ETargetFilterTypes : uint8 {
    AimAssist,
    Homing,
    COUNT,
};

