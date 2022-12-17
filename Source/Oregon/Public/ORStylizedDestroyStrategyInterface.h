#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORStylizedDestroyStrategyInterface.generated.h"

UINTERFACE(Blueprintable)
class UORStylizedDestroyStrategyInterface : public UInterface {
    GENERATED_BODY()
};

class IORStylizedDestroyStrategyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoStylizedDestroy();
    
};

