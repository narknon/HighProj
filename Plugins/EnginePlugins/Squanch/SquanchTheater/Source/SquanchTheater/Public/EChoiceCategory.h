#pragma once
#include "CoreMinimal.h"
#include "EChoiceCategory.generated.h"

UENUM(BlueprintType)
enum class EChoiceCategory : uint8 {
    None,
    Negative,
    Neutral,
    Positive,
    COUNT,
};

