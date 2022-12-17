#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "ORDirectEventReceiverInterface.generated.h"

class UORGlobalEventPayload;

UINTERFACE(Blueprintable, MinimalAPI)
class UORDirectEventReceiverInterface : public UInterface {
    GENERATED_BODY()
};

class IORDirectEventReceiverInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDirectEvent(const FGameplayTag Tag, UORGlobalEventPayload* Payload);
    
};

