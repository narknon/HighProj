#pragma once
#include "CoreMinimal.h"
#include "ESQDifficultyComparisionOperation.generated.h"

UENUM(BlueprintType)
enum class ESQDifficultyComparisionOperation : uint8 {
    Equal,
    NotEqual,
    GreaterThan,
    GreaterThanOrEqual,
    LessThan,
    LessThanOrEqual,
};

