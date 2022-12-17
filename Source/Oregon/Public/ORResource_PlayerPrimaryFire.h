#pragma once
#include "CoreMinimal.h"
#include "SQResource_AmmoPool.h"
#include "ORResource_PlayerPrimaryFire.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORResource_PlayerPrimaryFire : public USQResource_AmmoPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PocketTimeBeforeAutoRegen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeInPocket;
    
    UORResource_PlayerPrimaryFire();
};

