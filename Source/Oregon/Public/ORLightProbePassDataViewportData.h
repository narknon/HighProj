#pragma once
#include "CoreMinimal.h"
#include "ORLightProbePassData.h"
#include "ORLightProbePassDataViewportData.generated.h"

USTRUCT(BlueprintType)
struct FORLightProbePassDataViewportData : public FORLightProbePassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORLightProbePassData HQPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORLightProbePassData LQPass;
    
    OREGON_API FORLightProbePassDataViewportData();
};

