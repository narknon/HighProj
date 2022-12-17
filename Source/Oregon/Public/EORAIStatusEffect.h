#pragma once
#include "CoreMinimal.h"
#include "EORAIStatusEffect.generated.h"

UENUM(BlueprintType)
enum class EORAIStatusEffect : uint8 {
    None,
    Stunned,
    KnockedUp,
    Incapacitated,
    Electrocuted,
    Frenzied,
    MindControlled,
};

