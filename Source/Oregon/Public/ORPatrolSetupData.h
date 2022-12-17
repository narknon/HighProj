#pragma once
#include "CoreMinimal.h"
#include "ORPatrolSetupData.generated.h"

USTRUCT(BlueprintType)
struct FORPatrolSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToMeanderAfterSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeanderAnchorRadius;
    
    OREGON_API FORPatrolSetupData();
};

