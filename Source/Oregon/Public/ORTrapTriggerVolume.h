#pragma once
#include "CoreMinimal.h"
#include "ORGameplayEffectTriggerVolume.h"
#include "ORTrapTriggerVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORTrapTriggerVolume : public AORGameplayEffectTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrapStartDelay;
    
    AORTrapTriggerVolume();
    UFUNCTION(BlueprintCallable)
    void WarmingUpTrap();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapWarmingUp();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapDeActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrapActivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeActivateTrap();
    
    UFUNCTION(BlueprintCallable)
    void ActivateTrap();
    
};

