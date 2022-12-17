#pragma once
#include "CoreMinimal.h"
#include "EHoverType.generated.h"

UENUM(BlueprintType)
enum EHoverType {
    EHT_None,
    EHT_Standard,
    EHT_GroundPound,
    EHT_Tethered,
    EHT_MAX UMETA(Hidden),
};

