#pragma once
#include "CoreMinimal.h"
#include "EResourceState.generated.h"

UENUM(BlueprintType)
enum class EResourceState : uint8 {
    Normal,
    Empty,
    Full,
    Low,
    Recharging,
};

