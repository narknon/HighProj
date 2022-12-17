#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_FuelChange.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_FuelChange : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UORCalc_FuelChange();
};

