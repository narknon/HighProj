#pragma once
#include "CoreMinimal.h"
#include "ORHealthTankItem.h"
#include "Engine/EngineTypes.h"
#include "OnHealthTankFilledDelegate.h"
#include "OnHealthRechargeStateChangedDelegate.h"
#include "ORHealthTankItem_Regenerating.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORHealthTankItem_Regenerating : public AORHealthTankItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthRechargeStateChanged OnHealthRechargeStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthTankFilled OnHealthTankFilledEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RechargeStartTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RechargeIfZeroDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RechargeIfEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRecharging;
    
public:
    AORHealthTankItem_Regenerating();
};

