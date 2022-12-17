#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORInteractableObjectInterface.generated.h"

class AActor;
class UORInteractableComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UORInteractableObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IORInteractableObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBlockInteractionWithActor(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInteractableState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractionTriggeredWithComponent(AActor* Interactor, UORInteractableComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InteractionTriggered(AActor* Interactable);
    
};

