#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "TimedTickDelegateDelegate.h"
#include "TimedTickCompleteDelegateDelegate.h"
#include "ORAbilityTask_TimedTick.generated.h"

class UGameplayAbility;
class UORAbilityTask_TimedTick;

UCLASS(Blueprintable)
class OREGON_API UORAbilityTask_TimedTick : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedTickDelegate OnTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimedTickCompleteDelegate OnCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UORAbilityTask_TimedTick();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static UORAbilityTask_TimedTick* TimedTick(UGameplayAbility* OwningAbility, FName TaskInstanceName, float NewDuration);
    
};

