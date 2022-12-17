#pragma once
#include "CoreMinimal.h"
#include "EOregonCustomMovement.generated.h"

UENUM(BlueprintType)
enum EOregonCustomMovement {
    EOCM_Slide,
    EOCM_Glide,
    EOCM_Hover,
    EOCM_Tween,
    EOCM_Zipline,
    EOCM_MagWall,
    EOCM_Swing,
    EOCM_AnchorPull,
    EOCM_SplineMove,
    EOCM_GarmFlight,
    EOCM_GarmCharge,
    EOCM_GarmSlide,
    EOCM_GarmLeap,
    EOCM_MAX UMETA(Hidden),
};

