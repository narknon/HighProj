#pragma once
#include "CoreMinimal.h"
#include "EORCharacterRagdollGEAddlPolicy.generated.h"

UENUM(BlueprintType)
enum class EORCharacterRagdollGEAddlPolicy : uint8 {
    OnStart,
    OnStopLivingRagdoll,
};

