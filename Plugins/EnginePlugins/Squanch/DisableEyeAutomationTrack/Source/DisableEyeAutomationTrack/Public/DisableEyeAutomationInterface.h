#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DisableEyeAutomationInterface.generated.h"

UINTERFACE(Blueprintable)
class DISABLEEYEAUTOMATIONTRACK_API UDisableEyeAutomationInterface : public UInterface {
    GENERATED_BODY()
};

class DISABLEEYEAUTOMATIONTRACK_API IDisableEyeAutomationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDisableEyeAutomation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginDisableEyeAutomation();
    
};

