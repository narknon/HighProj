#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_ImpactDamage.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_ImpactDamage : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
    UORCalc_ImpactDamage();
};

