#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORInteractorResult.generated.h"

class AORCharacter;
class UORInteractableComponent;

UCLASS(Abstract, Blueprintable)
class OREGON_API UORInteractorResult : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORInteractableComponent> Interactable;
    
    UORInteractorResult();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Shutdown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTetherResult();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivateInteraction(AORCharacter* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Activate(UORInteractableComponent* InteractableComponent);
    
};

