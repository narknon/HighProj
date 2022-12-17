#pragma once
#include "CoreMinimal.h"
#include "ORTriggerSubsystemComponentBase.h"
#include "ORTriggerSourceComponentInterface.h"
#include "ORTriggerSourceComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTriggerSourceComponent : public UORTriggerSubsystemComponentBase, public IORTriggerSourceComponentInterface {
    GENERATED_BODY()
public:
    UORTriggerSourceComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeft(UObject* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntered(UObject* Volume);
    
    
    // Fix for true pure virtual functions not being implemented
};

