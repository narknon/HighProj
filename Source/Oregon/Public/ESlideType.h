#pragma once
#include "CoreMinimal.h"
#include "ESlideType.generated.h"

UENUM(BlueprintType)
enum ESlideType {
    EST_Standard,
    EST_Sprint,
    EST_Gliding,
    EST_Magwall,
    EST_Dash,
    EST_MAX UMETA(Hidden),
};

