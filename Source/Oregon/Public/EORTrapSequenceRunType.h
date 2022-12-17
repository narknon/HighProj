#pragma once
#include "CoreMinimal.h"
#include "EORTrapSequenceRunType.generated.h"

UENUM(BlueprintType)
enum class EORTrapSequenceRunType : uint8 {
    Simultaneous,
    Sequentially,
    ClosestToTarget,
    NearTarget,
};

