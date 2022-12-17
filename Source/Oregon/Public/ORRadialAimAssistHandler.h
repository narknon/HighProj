#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ScalableFloat.h"
#include "ORRadialAimAssistHandler.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORRadialAimAssistHandler : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RadialFrictionAngleLimitCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RadialFrictionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RadialFrictionModPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RadialFrictionModYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EarlyLeaveFrictionWeighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AimAdhesionDistanceCurve;
    
public:
    UORRadialAimAssistHandler();
};

