#pragma once
#include "CoreMinimal.h"
#include "RangeValueType.generated.h"

UENUM(BlueprintType)
enum RangeValueType {
    InnerOnly,
    InnerAlways,
    Interpolate,
};

