#pragma once
#include "CoreMinimal.h"
#include "EORTriggerSystemShape.generated.h"

UENUM(BlueprintType)
enum class EORTriggerSystemShape : uint8 {
    Box,
    Sphere,
    Capsule,
};

