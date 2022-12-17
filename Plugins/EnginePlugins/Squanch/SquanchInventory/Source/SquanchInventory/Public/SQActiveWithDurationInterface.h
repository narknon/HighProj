#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SQActiveWithDurationInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USQActiveWithDurationInterface : public UInterface {
    GENERATED_BODY()
};

class ISQActiveWithDurationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Deactivate(float Duration);
    
};

