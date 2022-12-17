#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OREnemySpawningData.h"
#include "ORQueuedSpawn.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OREGON_API FORQueuedSpawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemySpawningData EnemySpawningData;
    
    FORQueuedSpawn();
};

