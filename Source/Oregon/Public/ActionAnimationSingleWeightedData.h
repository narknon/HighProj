#pragma once
#include "CoreMinimal.h"
#include "ActionAnimationSingleWeightedData.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct OREGON_API FActionAnimationSingleWeightedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomizationWeight;
    
    FActionAnimationSingleWeightedData();
};

