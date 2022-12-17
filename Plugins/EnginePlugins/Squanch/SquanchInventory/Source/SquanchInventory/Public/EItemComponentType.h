#pragma once
#include "CoreMinimal.h"
#include "EItemComponentType.generated.h"

UENUM(BlueprintType)
enum EItemComponentType {
    EICT_FireLoop,
    EICT_FiringResult,
    EICT_Resource,
    EICT_MAX UMETA(Hidden),
};

