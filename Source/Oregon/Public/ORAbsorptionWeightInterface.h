#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORAbsorptionWeightInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UORAbsorptionWeightInterface : public UInterface {
    GENERATED_BODY()
};

class IORAbsorptionWeightInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAbsorptionWeight(float Weight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAbsorptionWeight();
    
};

