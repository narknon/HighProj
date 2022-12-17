#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORAIBossCharacterChargeInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UORAIBossCharacterChargeInterface : public UInterface {
    GENERATED_BODY()
};

class IORAIBossCharacterChargeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BossCharacterChargeStop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BossCharacterChargeStart();
    
};

