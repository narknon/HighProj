#pragma once
#include "CoreMinimal.h"
#include "HouseStreamingStateInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FHouseStreamingStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> Level;
    
    OREGON_API FHouseStreamingStateInfo();
};

