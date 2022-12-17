#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Interface.h"
#include "ORInteractorInterface.generated.h"

class UORInteractorResult;
class UORInteractableComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UORInteractorInterface : public UInterface {
    GENERATED_BODY()
};

class IORInteractorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShutdownInteractorResult(UORInteractorResult* Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverlapInteractableEnd(UORInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OverlapInteractableBegin(UORInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractionTriggered(UORInteractableComponent* Interactable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CancelInteractorResult(UORInteractorResult* Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddInteractorResult(UORInteractableComponent* Interactable, TSubclassOf<UORInteractorResult> ResultType);
    
};

