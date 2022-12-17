#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WarpBaseInfo.generated.h"

class UWorld;
class AORSpawner;

USTRUCT(BlueprintType)
struct FWarpBaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> WarpBaseLevelReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORSpawner> WarpBaseActor;
    
    OREGON_API FWarpBaseInfo();
};

