#pragma once
#include "CoreMinimal.h"
#include "ORCalc_Damage.h"
#include "ORCalc_DamageProportional.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_DamageProportional : public UORCalc_Damage {
    GENERATED_BODY()
public:
    UORCalc_DamageProportional();
};

