#pragma once
#include "CoreMinimal.h"
#include "ESTGroup.generated.h"

UENUM(BlueprintType)
enum class ESTGroup : uint8 {
    Narration_Main,
    Secondary,
    Crowd,
    Count,
};

