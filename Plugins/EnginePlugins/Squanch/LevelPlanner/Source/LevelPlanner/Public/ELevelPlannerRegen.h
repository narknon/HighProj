#pragma once
#include "CoreMinimal.h"
#include "ELevelPlannerRegen.generated.h"

UENUM(BlueprintType)
enum class ELevelPlannerRegen : uint8 {
    None,
    Verified,
    RecentlyRegenerated,
};

