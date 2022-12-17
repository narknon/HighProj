#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_Healing.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_Healing : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UORCalc_Healing();
};

