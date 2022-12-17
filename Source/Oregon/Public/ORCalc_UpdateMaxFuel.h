#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_UpdateMaxFuel.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_UpdateMaxFuel : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UORCalc_UpdateMaxFuel();
};

