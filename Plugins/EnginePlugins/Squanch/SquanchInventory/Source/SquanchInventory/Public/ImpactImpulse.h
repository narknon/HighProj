#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "ImpactImpulse.generated.h"

USTRUCT(BlueprintType)
struct FImpactImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ImpulseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ImpulseStrength;
    
    SQUANCHINVENTORY_API FImpactImpulse();
};

