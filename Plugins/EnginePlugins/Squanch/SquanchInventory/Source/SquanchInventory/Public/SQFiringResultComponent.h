#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQFireableItemComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "FiringResultFX.h"
#include "SQFiringResultComponent.generated.h"

class USQFiringResultAttributeSet;
class UItemImpactResult;
class USQFiringSpread;
class UMatineeCameraShake;
class UCurveFloat;
class UCurveVector;

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API USQFiringResultComponent : public USQFireableItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResourceCost;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Loudness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQFiringSpread* FiringSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringResultFX FiringFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* KickCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ReticleRecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> CameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FiringSpreadPenalty;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FalloffEffectCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FalloffMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FalloffMaxDistance;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USQFiringResultAttributeSet> CachedAttributes;
    
public:
    USQFiringResultComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UseResource(int32 Stacks);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TriggerFiringResult();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetFiringSpreadPenalty(float SpreadFloat);
    
    UFUNCTION(BlueprintCallable)
    UItemImpactResult* GetImpactResult();
    
public:
    UFUNCTION(BlueprintCallable)
    FTransform GetFiringTransform();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFiringSpreadPenalty();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFiringSpreadMod();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFalloffMinDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFalloffMaxDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAimLocation(bool bUseAimCorrections);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyRecoilKick();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFiringSpread();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFiringFX();
    
};

