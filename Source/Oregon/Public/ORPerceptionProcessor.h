#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "ORPerceptionProcessor.generated.h"

USTRUCT(BlueprintType)
struct FORPerceptionProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeActiveAfterLastStimulus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSendPlayerLosLossUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLosResponseTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve LosResponseTimeCurve;
    
    OREGON_API FORPerceptionProcessor();
};

