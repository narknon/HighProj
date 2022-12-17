#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ScalableFloat.h"
#include "SQFiringResult_ProjectileData.generated.h"

class ASQProjectile;

USTRUCT(BlueprintType)
struct FSQFiringResult_ProjectileData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQProjectile> ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShotsToFire;
    
    SQUANCHINVENTORY_API FSQFiringResult_ProjectileData();
};

