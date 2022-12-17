#pragma once
#include "CoreMinimal.h"
#include "ETraversalTypeFlags.generated.h"

UENUM(BlueprintType)
enum class ETraversalTypeFlags : uint8 {
    None,
    LeapUp,
    LeapDown,
    LeapAcross,
};

