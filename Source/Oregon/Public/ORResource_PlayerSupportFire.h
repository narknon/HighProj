#pragma once
#include "CoreMinimal.h"
#include "SQResource_AmmoPool.h"
#include "ORResource_PlayerSupportFire.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORResource_PlayerSupportFire : public USQResource_AmmoPool {
    GENERATED_BODY()
public:
    UORResource_PlayerSupportFire();
};

