#pragma once
#include "CoreMinimal.h"
#include "ORAbilityTask_WaitGameplayEffectApplied.h"
#include "GameplayEffectTypes.h"
#include "ORAbilityTask_WaitGameplayEffectAppliedTarget.generated.h"

class UAbilitySystemComponent;
class UORAbilityTask_WaitGameplayEffectAppliedTarget;

UCLASS(Blueprintable)
class OREGON_API UORAbilityTask_WaitGameplayEffectAppliedTarget : public UORAbilityTask_WaitGameplayEffectApplied {
    GENERATED_BODY()
public:
    UORAbilityTask_WaitGameplayEffectAppliedTarget();
protected:
    UFUNCTION(BlueprintCallable)
    static UORAbilityTask_WaitGameplayEffectAppliedTarget* ListenForGameplayEffectAppliedTarget(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagRequirements GameplayTagRequirements);
    
};

