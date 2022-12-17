#pragma once
#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "ORGauntletControllerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class OREGON_API UORGauntletControllerBase : public UGauntletTestController {
    GENERATED_BODY()
public:
    UORGauntletControllerBase();
};

