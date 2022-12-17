#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_JetpackRise.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_JetpackRise : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UORGameplayAbility_JetpackRise();
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateRise();
    
};

