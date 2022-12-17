#pragma once
#include "CoreMinimal.h"
#include "EPostAnchorResult.generated.h"

UENUM(BlueprintType)
enum EPostAnchorResult {
    EPAR_Falling,
    EPAR_Hover,
    EPAR_Zipline,
    EPAR_MagWall,
    EPAR_Swing,
    EPAR_Mantle,
    EPAR_MAX UMETA(Hidden),
};

