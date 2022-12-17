#pragma once
#include "CoreMinimal.h"
#include "ORKrubisJumpPointCollisionInfo.generated.h"

USTRUCT(BlueprintType)
struct FORKrubisJumpPointCollisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExit;
    
    OREGON_API FORKrubisJumpPointCollisionInfo();
};

