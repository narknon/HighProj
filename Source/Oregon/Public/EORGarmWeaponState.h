#pragma once
#include "CoreMinimal.h"
#include "EORGarmWeaponState.generated.h"

UENUM(BlueprintType)
enum class EORGarmWeaponState : uint8 {
    AimPlayer,
    AimOutward,
    AimUp,
};

