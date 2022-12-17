#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORReinforcementInfo.h"
#include "ORWaveInfo.h"
#include "OREncounterResult.h"
#include "EncounterPartyEnemies.h"
#include "EncounterPartyVolumes.h"
#include "ORDefaultSpawnOptions.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Perception/AIPerceptionTypes.h"
#include "ORWaveSpawnResult.h"
#include "ORHomeArea.h"
#include "OREnemySpawningData.h"
#include "EORAIHostileAwareness.h"
#include "EORSpawnTriggerTypes.h"
#include "ORAuxillaryActorSpawnedDelegateDelegate.h"
#include "OREnemySpawnedDelegateDelegate.h"
#include "EncounterEndDelegateDelegate.h"
#include "EncounterBeginDelegateDelegate.h"
#include "WavePossessionMapCompleteDelegateDelegate.h"
#include "WaveSpawningCompleteDelegateDelegate.h"
#include "WaveReinforcedDelegateDelegate.h"
#include "WaveAdvanceDelegateDelegate.h"
#include "EnemyDiedDelegateDelegate.h"
#include "OREnemyPerceptionUpdatedDelegateDelegate.h"
#include "EncounterReadyDelegate.h"
#include "OROnDamageTakenSignatureDelegate.h"
#include "OREncounterManager.generated.h"

class UObject;
class USceneComponent;
class AORCharacter;
class AORAICharacter;
class AORAuxillarySpawnable;
class AOREncounterBoundaryVolume;
class UBillboardComponent;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API AOREncounterManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlySpawnAheadOfPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AheadOfPlayerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EncounterID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterReady OnEncounterReady;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemySpawnedDelegate OnEnemySpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAuxillaryActorSpawnedDelegate OnAuxillaryActorSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOREnemyPerceptionUpdatedDelegate OnEnemyPerceptionUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOROnDamageTakenSignature OnEnemyTookDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDiedDelegate OnEnemyDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveAdvanceDelegate OnWaveAdvance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveReinforcedDelegate OnWaveReinforced;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveSpawningCompleteDelegate OnWaveSpawningComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWavePossessionMapCompleteDelegate OnWavePossessionMapComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterBeginDelegate OnEncounterBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEndDelegate OnEncounterEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefensiveCenterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AICharacterLookupTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefensiveCenterPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AORAICharacter*, int32> ActiveEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AORAICharacter*, int32> DeadEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FEncounterPartyEnemies> EnemyParties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterPartyVolumes> PartyVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOREncounterBoundaryVolume*> BoundaryVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FOREncounterResult EncounterResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool EncounterActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EncounterRetriggerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClearEnemiesOnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AggroSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastManStandingTimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastManStandingLosCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastManStandingTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NavMeshAutoKillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FallingAutoKillEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORSpawnTriggerTypes NoLOSAutoKillTimerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoLOSAutoKillTimerTriggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORSpawnTriggerTypes ForceKillAutoKillTimerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceKillAutoKillTimerTriggerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CheckForAttractionPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORWaveInfo> WaveInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FORWaveSpawnResult> WaveSpawnResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> WavePossessionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORDefaultSpawnOptions> DefaultSpawnOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORHomeArea> DefaultHomeAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BaseWaveItemDropTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UsedSpawnerObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORAuxillarySpawnable*> AuxilliarySpawnables;
    
public:
    AOREncounterManager();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterEnemy(AORAICharacter* Enemy);
    
    UFUNCTION(BlueprintCallable)
    void TryEncounterAdvance();
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerLastManStanding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowAllEnemiesOnCompass() const;
    
    UFUNCTION(BlueprintCallable)
    void SetPartyHomeArea(FGameplayTag PartyID, FORHomeArea HomeArea);
    
    UFUNCTION(BlueprintCallable)
    void SetPartyAllowPointsOutsideHomeArea(FGameplayTag PartyID, bool bNewAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetEncounterTriggeredAlready(const bool NewEncounterTriggeredAlready);
    
    UFUNCTION(BlueprintCallable)
    void SetEncounterActive(const bool NewActive);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveWaveIndex(const int32 NewActiveWaveIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterEnemy(AORAICharacter* Enemy, const int32 Wave, const bool IsEncounterSpawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInBoundary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetWaveName(const int32 WaveIndex) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FORWaveInfo> GetWaveInfos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FORWaveInfo GetWave(const FName& WaveName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingReinforcementsCountInWave(const int32 WaveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingEnemyCountInWave(const int32 WaveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingEnemyCount() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FORWaveInfo> GetPartyWaves(FGameplayTag PartyID);
    
    UFUNCTION(BlueprintCallable)
    TArray<AORAICharacter*> GetPartyEnemies(FGameplayTag PartyID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEncounterTriggeredAlready() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEncounterActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveWaveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AORAICharacter*> GetActiveEnemiesInEncounter() const;
    
    UFUNCTION(BlueprintCallable)
    void EnemyTookDamage(UObject* Damager, AORCharacter* Damaged, const FHitResult& HitResult, const float Damage, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void EnemySpawnFailed(const FOREnemySpawningData& EnemySpawningData);
    
    UFUNCTION(BlueprintCallable)
    void EnemySpawned(AORAICharacter* Enemy, const FOREnemySpawningData& EnemySpawningData);
    
    UFUNCTION(BlueprintCallable)
    void EnemyPerceptionUpdated(AORAICharacter* Enemy, AActor* Causer, const FAIStimulus& StimulusData, const EORAIHostileAwareness CurrentHostileAwareness);
    
    UFUNCTION(BlueprintCallable)
    void EnemyDied(AORAICharacter* Enemy, UObject* Killer);
    
    UFUNCTION(BlueprintCallable)
    void EnemyDestroyed(AORAICharacter* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    bool EncounterTriggerWave(const int32 WaveIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EncounterSpawnWave();
    
public:
    UFUNCTION(BlueprintCallable)
    void EncounterReset(const bool Complete);
    
    UFUNCTION(BlueprintCallable)
    bool EncounterReinforce(FORReinforcementInfo ReinforcementInfo);
    
    UFUNCTION(BlueprintCallable)
    void EncounterEnd(const bool Complete);
    
    UFUNCTION(BlueprintCallable)
    void EncounterBegin();
    
    UFUNCTION(BlueprintCallable)
    void EncounterAdvance();
    
    UFUNCTION(BlueprintCallable)
    void ClearPartyHomeArea(FGameplayTag PartyID);
    
    UFUNCTION(BlueprintCallable)
    void ClearEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEncounterBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanEncounterAdvance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_GetDefensiveCenterPointLocation(FVector& DefensiveCenterPointLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void AuxillaryActorSpawned(AORAuxillarySpawnable* Actor, const FOREnemySpawningData& EnemySpawningData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreEnemiesInCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllWavesTriggered() const;
    
};

