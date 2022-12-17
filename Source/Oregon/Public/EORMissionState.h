#pragma once
#include "CoreMinimal.h"
#include "EORMissionState.generated.h"

UENUM(BlueprintType)
enum class EORMissionState : uint8 {
    Inactive,
    Active,
    Completed,
};

