#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ORAIEnemyEffectInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UORAIEnemyEffectInterface : public UInterface {
    GENERATED_BODY()
};

class IORAIEnemyEffectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetEnemyEffectRadius();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetEnemyEffectLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearEnemyEffect();
    
};

