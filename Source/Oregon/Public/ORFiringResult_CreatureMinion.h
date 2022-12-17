#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORFiringResult_Projectile.h"
#include "UObject/NoExportTypes.h"
#include "ORFiringResult_CreatureMinion.generated.h"

class ASQProjectile;

UCLASS(Blueprintable)
class OREGON_API UORFiringResult_CreatureMinion : public UORFiringResult_Projectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQProjectile> ProjectileTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FiringRotationOffsetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchSpeedOverride;
    
    UORFiringResult_CreatureMinion();
};

