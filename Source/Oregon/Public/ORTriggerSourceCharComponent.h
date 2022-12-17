#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORTriggerSourceComponentInterface.h"
#include "ORTriggerSourceCharComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Character, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTriggerSourceCharComponent : public UActorComponent, public IORTriggerSourceComponentInterface {
    GENERATED_BODY()
public:
    UORTriggerSourceCharComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeft(UObject* Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntered(UObject* Volume);
    
    
    // Fix for true pure virtual functions not being implemented
};

