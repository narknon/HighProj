#pragma once
#include "CoreMinimal.h"
#include "ORSpawnInfo.h"
#include "EORSpawnTriggerTypes.h"
#include "ORReinforcementInfo.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct OREGON_API FORReinforcementInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORSpawnInfo> SpawnInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ReinforceWaveItemDropOverrideTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORSpawnTriggerTypes ReinforceTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReinforceTriggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReinforceCount;
    
    FORReinforcementInfo();
};

