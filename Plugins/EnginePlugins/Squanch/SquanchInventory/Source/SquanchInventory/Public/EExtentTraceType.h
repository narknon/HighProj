#pragma once
#include "CoreMinimal.h"
#include "EExtentTraceType.generated.h"

UENUM(BlueprintType)
enum EExtentTraceType {
    ETT_Box,
    ETT_Sphere,
    ETT_Capsule,
    ETT_MAX UMETA(Hidden),
};

