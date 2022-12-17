#pragma once
#include "CoreMinimal.h"
#include "ORCalc_VectorLaunch.h"
#include "ORCalc_VerticalLaunch.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCalc_VerticalLaunch : public UORCalc_VectorLaunch {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchPowerRandomness;
    
public:
    UORCalc_VerticalLaunch();
};

