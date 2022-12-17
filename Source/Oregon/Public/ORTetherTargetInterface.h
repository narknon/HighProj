#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORTetherTargetInterface.generated.h"

class AORCharacter;

UINTERFACE(Blueprintable, MinimalAPI)
class UORTetherTargetInterface : public UInterface {
    GENERATED_BODY()
};

class IORTetherTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TetherPullStarted(AORCharacter* TetherSource);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TetherPullEnded(AORCharacter* TetherSource);
    
};

