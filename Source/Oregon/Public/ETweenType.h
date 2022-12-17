#pragma once
#include "CoreMinimal.h"
#include "ETweenType.generated.h"

UENUM(BlueprintType)
enum ETweenType {
    ETT_Linear,
    ETT_GravSimQuadratic,
    ETT_ToActor,
    ETT_GroundPound,
    ETT_Melee,
};

