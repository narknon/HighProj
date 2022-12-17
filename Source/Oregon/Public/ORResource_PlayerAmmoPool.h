#pragma once
#include "CoreMinimal.h"
#include "SQResource_AmmoPool.h"
#include "GameplayTagContainer.h"
#include "ORResource_PlayerAmmoPool.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORResource_PlayerAmmoPool : public USQResource_AmmoPool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AmmoCurrencyType;
    
public:
    UORResource_PlayerAmmoPool();
};

