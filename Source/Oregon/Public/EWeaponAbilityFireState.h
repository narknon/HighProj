#pragma once
#include "CoreMinimal.h"
#include "EWeaponAbilityFireState.generated.h"

UENUM(BlueprintType)
enum EWeaponAbilityFireState {
    EWAFS_Ready,
    EWAFS_Enter,
    EWAFS_TapFire,
    EWAFS_HoldLoop,
    EWAFS_MAX UMETA(Hidden),
};

