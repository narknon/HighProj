#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "STTriggerProxy.generated.h"

class USTCondition;

UCLASS(Blueprintable)
class USTTriggerProxy : public UObject {
    GENERATED_BODY()
public:
    USTTriggerProxy();
protected:
    UFUNCTION(BlueprintCallable)
    void OnConditionChanged(USTCondition* InCondition, bool InState);
    
};

