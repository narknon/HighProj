#pragma once
#include "CoreMinimal.h"
#include "LipFlapTrackSectionParams.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FLipFlapTrackSectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LipFlapBlendshape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LipCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlendValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDuration;
    
    LIPFLAP_API FLipFlapTrackSectionParams();
};

