#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_VectorLaunch.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_VectorLaunch : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UORCalc_VectorLaunch();
};

