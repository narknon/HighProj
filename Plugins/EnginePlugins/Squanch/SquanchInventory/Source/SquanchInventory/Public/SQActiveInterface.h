#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SQActiveInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USQActiveInterface : public UInterface {
    GENERATED_BODY()
};

class ISQActiveInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetIsActive();
    
};

