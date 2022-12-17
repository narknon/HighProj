#pragma once
#include "CoreMinimal.h"
#include "GauntletTestController.h"
#include "ORGauntletController.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGauntletController : public UGauntletTestController {
    GENERATED_BODY()
public:
    UORGauntletController();
private:
    UFUNCTION(BlueprintCallable)
    void StopProfiling();
    
    UFUNCTION(BlueprintCallable)
    void StartTesting();
    
};

