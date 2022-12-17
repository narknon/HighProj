#pragma once
#include "CoreMinimal.h"
#include "ORKrubisJumpPointCollisionInfoList.generated.h"

USTRUCT(BlueprintType)
struct FORKrubisJumpPointCollisionInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    OREGON_API FORKrubisJumpPointCollisionInfoList();
};

