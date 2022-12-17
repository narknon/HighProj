#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQFiringResultComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "SQFiringResult_PhysicsProjectile.generated.h"

class ASQPhysicsProjectile;

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API USQFiringResult_PhysicsProjectile : public USQFiringResultComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQPhysicsProjectile> ProjectileType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PhysicsProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShotsToFire;
    
public:
    USQFiringResult_PhysicsProjectile();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpawnTransform(FVector& OutLocation, FRotator& OutRotation, int32 Shot, int32 TotalShots, bool bUseOverrideLocation, FVector OverrideStartLocation);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ASQPhysicsProjectile> GetProjectileType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitProjectile(ASQPhysicsProjectile* Projectile);
    
};

