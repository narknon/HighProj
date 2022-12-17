#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "DeferredEnemySpawnedCallback.h"
#include "OREncounterSubsystem.generated.h"

class UWorld;
class AORAICharacter;
class AORBattleManagerBase;
class AOREncounterManager;
class ULevel;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=Squanch)
class OREGON_API UOREncounterSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeferredEnemySpawnedCallback> DeferredEnemySpawnedCallbacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOREncounterManager*> ActiveEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> NonEncounterEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORBattleManagerBase*> ActiveBattles;
    
public:
    UOREncounterSubsystem();
    UFUNCTION(BlueprintCallable)
    void UntrackSpawns(int32 NumSpawns);
    
    UFUNCTION(BlueprintCallable)
    void UntrackSingleSpawn();
    
    UFUNCTION(BlueprintCallable)
    void TrackSpawns(int32 NumSpawns);
    
    UFUNCTION(BlueprintCallable)
    void TrackNewSingleSpawn();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelRemovedFromWorld(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelAddedToWorld(ULevel* InLevel, UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    bool IsEncounterActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AORAICharacter*> GetNonEncounterEnemies() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AOREncounterManager*> GetActiveEncounters() const;
    
    UFUNCTION(BlueprintCallable)
    int32 ClampNumSpawns(int32 RequestedNumSpawns);
    
};

