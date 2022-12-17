#pragma once
#include "CoreMinimal.h"
#include "EORAIRecordCharacterAbilityUsage.generated.h"

UENUM(BlueprintType)
enum class EORAIRecordCharacterAbilityUsage : uint8 {
    SuccessfulActivation,
    AllActivationAttempts,
    DoNotRecord,
};

