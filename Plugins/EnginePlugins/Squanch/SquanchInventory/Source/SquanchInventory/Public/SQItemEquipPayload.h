#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQItemEquipPayload.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQItemEquipPayload : public UObject {
    GENERATED_BODY()
public:
    USQItemEquipPayload();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PayloadUneqipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PayloadEquipped();
    
};

