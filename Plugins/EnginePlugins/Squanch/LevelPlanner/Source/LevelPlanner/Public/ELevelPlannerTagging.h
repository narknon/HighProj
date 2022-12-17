#pragma once
#include "CoreMinimal.h"
#include "ELevelPlannerTagging.generated.h"

UENUM(BlueprintType)
enum class ELevelPlannerTagging : uint8 {
    None,
    InProgress,
    FirstPass,
    Shippable,
    Polished,
};

