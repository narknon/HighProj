#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TalkingInterface.generated.h"

UINTERFACE(Blueprintable)
class SQUANCHMOUTH_API UTalkingInterface : public UInterface {
    GENERATED_BODY()
};

class SQUANCHMOUTH_API ITalkingInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTransitioning(bool Transitioning);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTalking(bool Talking);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTransitioning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTalking();
    
};

