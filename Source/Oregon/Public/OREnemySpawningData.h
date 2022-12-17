#pragma once
#include "CoreMinimal.h"
#include "ORSpawnOptions.h"
#include "OREnemySpawningData.generated.h"

class AOREncounterManager;

USTRUCT(BlueprintType)
struct OREGON_API FOREnemySpawningData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AOREncounterManager* EncounterManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSpawnOptions SpawnOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnInfoID;
    
    FOREnemySpawningData();
};

