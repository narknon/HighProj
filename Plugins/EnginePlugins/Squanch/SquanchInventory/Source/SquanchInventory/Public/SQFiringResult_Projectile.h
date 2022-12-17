#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQFiringResultComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "SQFiringResult_ProjectileData.h"
#include "SQFiringResult_Projectile.generated.h"

class ASQProjectile;

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API USQFiringResult_Projectile : public USQFiringResultComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQProjectile> ProjectileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTreatAsSingleProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQFiringResult_ProjectileData> AdditionalProjectiles;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShotsToFire;
    
public:
    USQFiringResult_Projectile();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpawnTransform(FVector& OutLocation, FRotator& OutRotation, FVector& OutEffectsOffset, int32 Shot, int32 TotalShots, bool bUseOverrideLocation, FVector OverrideStartLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetShotsToFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<ASQProjectile> GetProjectileType();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ShouldApplyInstantHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitProjectile(ASQProjectile* Projectile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyInstantHit();
    
};

