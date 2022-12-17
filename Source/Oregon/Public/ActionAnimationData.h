#pragma once
#include "CoreMinimal.h"
#include "ActionAnimationSingleWeightedData.h"
#include "ActionAnimationData.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FActionAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionAnimationSingleWeightedData> MappedAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomlyPick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCycleIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalculatedRandomizationSum;
    
    FActionAnimationData();
};

