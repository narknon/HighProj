#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORScriptComponentOwner.generated.h"

class UORScriptComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UORScriptComponentOwner : public UInterface {
    GENERATED_BODY()
};

class IORScriptComponentOwner : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetScriptComponents(UPARAM(Ref) TArray<UORScriptComponent*>& ScriptComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UORScriptComponent*> GetScriptComponents();
    
};

