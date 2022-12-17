#pragma once
#include "CoreMinimal.h"
#include "EORCharacterRagdollGEAutoRemovalPolicy.generated.h"

UENUM(BlueprintType)
enum class EORCharacterRagdollGEAutoRemovalPolicy : uint8 {
    Never,
    OnStopLivingRagdoll,
    OnStandupComplete,
};

