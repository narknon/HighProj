#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "ORCalc_Bounce.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_Bounce : public UGameplayEffectExecutionCalculation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BouncinessModifier;
    
public:
    UORCalc_Bounce();
};

