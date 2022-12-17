#pragma once
#include "CoreMinimal.h"
#include "EORStreamingLevelMissionType.generated.h"

UENUM(BlueprintType)
enum class EORStreamingLevelMissionType : uint8 {
    Active,
    Inactive,
    Complete,
    InactiveOrActive,
    ActiveOrComplete,
    InactiveOrComplete,
};

