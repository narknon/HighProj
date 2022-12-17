#pragma once
#include "CoreMinimal.h"
#include "EOregonGlidePhase.generated.h"

UENUM(BlueprintType)
enum EOregonGlidePhase {
    EOGP_None,
    EOGP_Rise,
    EOGP_Hover,
    EOGP_Fall,
    EOGP_MAX UMETA(Hidden),
};

