#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_Damage.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_Damage : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProportionalDamage;
    
public:
    UORCalc_Damage();
};

