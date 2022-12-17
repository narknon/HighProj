#pragma once
#include "CoreMinimal.h"
#include "ETransformState.generated.h"

UENUM(BlueprintType)
enum ETransformState {
    ETS_None,
    ETS_Base,
    ETS_Crouched,
    ETS_Sprint,
    ETS_Slide,
    ETS_ADS,
    ETS_CrouchADS,
    ETS_StandingSlide,
    ETS_ZipLine,
    ETS_Magwall,
    ETS_GroundPound,
    ETS_House,
    ETS_HouseCrouched,
    ETS_HouseIntro,
    ETS_HouseNoOffset,
    ETS_TransformMax,
    ETS_MAX UMETA(Hidden),
};

