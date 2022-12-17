#pragma once
#include "CoreMinimal.h"
#include "EORAICharacterAbilityActivationResult.generated.h"

UENUM(BlueprintType)
enum class EORAICharacterAbilityActivationResult : uint8 {
    Failed,
    SuccessInstant,
    SuccessRunning,
};

