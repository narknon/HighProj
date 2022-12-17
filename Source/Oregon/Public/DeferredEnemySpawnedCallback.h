#pragma once
#include "CoreMinimal.h"
#include "OREnemySpawnedDelegateDelegate.h"
#include "DeferredEnemySpawnedCallback.generated.h"

USTRUCT(BlueprintType)
struct FDeferredEnemySpawnedCallback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemySpawnedDelegate Callback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnInfoID;
    
    OREGON_API FDeferredEnemySpawnedCallback();
};

