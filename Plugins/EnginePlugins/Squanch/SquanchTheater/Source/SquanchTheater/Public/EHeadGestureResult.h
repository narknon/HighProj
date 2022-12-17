#pragma once
#include "CoreMinimal.h"
#include "EHeadGestureResult.generated.h"

UENUM(BlueprintType)
enum class EHeadGestureResult : uint8 {
    Yes,
    No,
    TimeExpired,
};

