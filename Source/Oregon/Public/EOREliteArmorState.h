#pragma once
#include "CoreMinimal.h"
#include "EOREliteArmorState.generated.h"

UENUM(BlueprintType)
enum class EOREliteArmorState : uint8 {
    Active,
    Destroyed,
    Recharging,
};

