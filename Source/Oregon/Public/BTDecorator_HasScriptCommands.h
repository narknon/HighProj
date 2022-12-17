#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasScriptCommands.generated.h"

class AORAIController;

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_HasScriptCommands : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasScriptCommands();
protected:
    UFUNCTION(BlueprintCallable)
    void OnScriptCommandListChanged(AORAIController* Controller);
    
};

