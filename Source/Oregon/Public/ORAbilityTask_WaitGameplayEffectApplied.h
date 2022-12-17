#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GameplayEffectTypes.h"
#include "OnGameplayEffectAppliedDelegate.h"
#include "ORAbilityTask_WaitGameplayEffectApplied.generated.h"

class UAbilitySystemComponent;
class UORAbilityTask_WaitGameplayEffectApplied;

UCLASS(Blueprintable)
class OREGON_API UORAbilityTask_WaitGameplayEffectApplied : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectApplied OnEffectApplied;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ASC;
    
public:
    UORAbilityTask_WaitGameplayEffectApplied();
private:
    UFUNCTION(BlueprintCallable)
    static UORAbilityTask_WaitGameplayEffectApplied* ListenForGameplayEffectApplied(UAbilitySystemComponent* AbilitySystemComponent, FGameplayTagRequirements GameplayTagRequirements);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

