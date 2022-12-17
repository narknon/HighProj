#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORSpawnOptions.h"
#include "EORSpawnSelectionTypes.h"
#include "OREnemySpawnedDelegateDelegate.h"
#include "ORSpawnInfo.generated.h"

class AActor;
class UORSpawnerInterface;
class IORSpawnerInterface;
class AORSpawner;

USTRUCT(BlueprintType)
struct OREGON_API FORSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AICharacterLookupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AICharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORSpawnSelectionTypes ConditionalSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AORSpawner>> ConditionalSpawnerReferenceList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AORSpawner> SpawnerReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IORSpawnerInterface> Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSpawnOptions SpawnOptions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemySpawnedDelegate OnEnemySpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LoadedCharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnInfoID;
    
    FORSpawnInfo();
};

