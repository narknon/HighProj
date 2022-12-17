#pragma once
#include "CoreMinimal.h"
#include "ORScriptComponent_Charge.h"
#include "ORScriptComponent_ChargeByTick.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORScriptComponent_ChargeByTick : public UORScriptComponent_Charge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDurationPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeDuration;
    
    UORScriptComponent_ChargeByTick();
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFullChargePercent() const;
    
};

