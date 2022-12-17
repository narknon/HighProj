#pragma once
#include "CoreMinimal.h"
#include "ORCalc_Bounce.h"
#include "ORCalc_BounceOppositePlayer.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_BounceOppositePlayer : public UORCalc_Bounce {
    GENERATED_BODY()
public:
    UORCalc_BounceOppositePlayer();
};

