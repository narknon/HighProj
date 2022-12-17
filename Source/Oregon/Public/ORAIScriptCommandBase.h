#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORAIScriptCommandBase.generated.h"

class AActor;
class AORAIController;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class UORAIScriptCommandBase : public UObject {
    GENERATED_BODY()
public:
    UORAIScriptCommandBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Tick(AActor* AI, AORAIController* Controller, float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init(AActor* AI, AORAIController* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cleanup(AActor* AI, AORAIController* Controller);
    
};

