#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OREffectsTargetInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UOREffectsTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IOREffectsTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetSecondaryEffectsTargets();
    
};

