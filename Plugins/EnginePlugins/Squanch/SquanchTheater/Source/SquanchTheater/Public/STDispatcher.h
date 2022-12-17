#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "STDispatcher.generated.h"

UCLASS(Abstract, Blueprintable)
class USTDispatcher : public UObject {
    GENERATED_BODY()
public:
    USTDispatcher();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    uint8 GetData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cleanup();
    
};

