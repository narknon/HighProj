#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQFireLoop_SemiAuto.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "ORFireLoop_CreatureMinionFire.generated.h"

class ASQProjectile;
class AORCreatureWeaponItem;
class UORFiringResult_CreatureMinion;
class UORPreviewSC_CreatureMinionFire;
class UORScriptComponent_ChargeByTick;
class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_CreatureMinionFire : public USQFireLoop_SemiAuto {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCreatureWeaponItem* CreatureWeaponItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORFiringResult_CreatureMinion* MyFiringResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ChargeSpeedModAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORScriptComponent_ChargeByTick* ChargeByTickSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORPreviewSC_CreatureMinionFire* PreviewSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeLaunchSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeRotationOffsetCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, TSubclassOf<ASQProjectile>> ProjectileTypesByChargePct;
    
public:
    UORFireLoop_CreatureMinionFire();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ASQProjectile> GetProjectileType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLaunchSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetFiringRotationOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChargeSpeedMod() const;
    
};

