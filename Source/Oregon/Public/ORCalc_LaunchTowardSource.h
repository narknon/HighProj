#pragma once
#include "CoreMinimal.h"
#include "ORCalc_VectorLaunch.h"
#include "ORCalc_LaunchTowardSource.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_LaunchTowardSource : public UORCalc_VectorLaunch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceOffsetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchPowerModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchNegativeVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchNegativeVelocityPower;
    
    UORCalc_LaunchTowardSource();
};

