#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORFiringResult_Instant.h"
#include "ORFiringResult_LezduitPrimary.generated.h"

class UMatineeCameraShake;
class UCurveVector;

UCLASS(Blueprintable)
class OREGON_API UORFiringResult_LezduitPrimary : public UORFiringResult_Instant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ChargeCompletedKickCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ChargeCompletedReticleRecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMatineeCameraShake> ChargeCompletedCameraShake;
    
public:
    UORFiringResult_LezduitPrimary();
    UFUNCTION(BlueprintCallable)
    void SetCameraKickScale(float NewCameraKickScale);
    
    UFUNCTION(BlueprintCallable)
    void ApplyChargeCompletedRecoilKick();
    
};

