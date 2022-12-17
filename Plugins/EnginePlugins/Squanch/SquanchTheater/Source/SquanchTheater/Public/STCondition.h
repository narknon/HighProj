#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "STConditionDelegateDelegate.h"
#include "STCondition.generated.h"

class USTCondition;

UCLASS(Abstract, Blueprintable)
class USTCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTConditionDelegate OnStateChanged;
    
    USTCondition();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveEventBindings();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FName GetName();
    
private:
    UFUNCTION(BlueprintCallable)
    void Event_OnStateUpdated(USTCondition* Condition, bool Value);
    
};

