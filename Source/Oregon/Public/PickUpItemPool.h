#pragma once
#include "CoreMinimal.h"
#include "PickUpItemPool.generated.h"

class AORPickupBase;

USTRUCT(BlueprintType)
struct FPickUpItemPool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORPickupBase*> PickUpItemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORPickupBase*> ActivePickUpItems;
    
    OREGON_API FPickUpItemPool();
};

