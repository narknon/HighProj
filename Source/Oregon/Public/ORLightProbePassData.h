#pragma once
#include "CoreMinimal.h"
#include "ORLightProbePassData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FORLightProbePassData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Material;
    
    OREGON_API FORLightProbePassData();
};

