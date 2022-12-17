#pragma once
#include "CoreMinimal.h"
#include "ProjectilePool.generated.h"

class AORProjectile;

USTRUCT(BlueprintType)
struct FProjectilePool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORProjectile*> ProjectilePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORProjectile*> ActiveProjectiles;
    
    OREGON_API FProjectilePool();
};

