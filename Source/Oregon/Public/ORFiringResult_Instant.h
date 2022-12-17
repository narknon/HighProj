#pragma once
#include "CoreMinimal.h"
#include "SQFiringResult_Instant.h"
#include "ScalableFloat.h"
#include "ORFiringResult_Instant.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API UORFiringResult_Instant : public USQFiringResult_Instant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AimAssistMaxCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AimAssistCorrectionDistanceCurve;
    
public:
    UORFiringResult_Instant();
};

