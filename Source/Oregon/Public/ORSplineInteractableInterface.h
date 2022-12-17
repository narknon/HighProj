#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORSplineInteractableInterface.generated.h"

class USplineComponent;

UINTERFACE(Blueprintable)
class UORSplineInteractableInterface : public UInterface {
    GENERATED_BODY()
};

class IORSplineInteractableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USplineComponent* GetSplineComponent();
    
};

