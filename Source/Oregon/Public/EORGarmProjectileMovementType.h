#pragma once
#include "CoreMinimal.h"
#include "EORGarmProjectileMovementType.generated.h"

UENUM(BlueprintType)
enum class EORGarmProjectileMovementType : uint8 {
    HWave,
    VWave,
    Comb,
    VerticalCrissCross,
    PushBack,
    Drill,
    Straight,
    GravityDrag,
    Homing,
    Ring,
};

