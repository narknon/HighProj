#pragma once
#include "CoreMinimal.h"
#include "EOREndOfPatrolRouteBehavior.generated.h"

UENUM(BlueprintType)
enum class EOREndOfPatrolRouteBehavior : uint8 {
    Loop,
    PingPong,
};

