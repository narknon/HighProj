#pragma once
#include "CoreMinimal.h"
#include "EORHitReactionType.generated.h"

UENUM(BlueprintType)
enum class EORHitReactionType : uint8 {
    None,
    Small,
    Medium,
    Heavy = 0x4,
};

