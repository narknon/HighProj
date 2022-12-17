#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "BattleEndDelegateDelegate.h"
#include "BattleBeginDelegateDelegate.h"
#include "BattleIntroCompleteDelegateDelegate.h"
#include "ORBattleManagerBase.generated.h"

class AOREncounterManager;
class AOREncounterBoundaryVolume;
class AORWarpBaseSlot;

UCLASS(Blueprintable)
class OREGON_API AORBattleManagerBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleIntroCompleteDelegate OnBattleIntroComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleBeginDelegate OnBattleBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleEndDelegate OnBattleEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOREncounterManager*> EncounterManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AORWarpBaseSlot>> WarpBaseSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOREncounterBoundaryVolume*> BoundaryVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOREncounterManager*> RemainingEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORWarpBaseSlot*> RemainingWarpBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOutOfEncounterBeforeCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StartBattleAfterIntro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattleActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OutOfBoundaryTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldStartCombatMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatMusicEndDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastManStandingTimerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastManStandingLosCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LastManStandingTriggered;
    
    AORBattleManagerBase();
    UFUNCTION(BlueprintCallable)
    void WarpBaseAllEncountersComplete(AORWarpBaseSlot* WarpBaseSlot);
    
    UFUNCTION(BlueprintCallable)
    void TriggerLastManStanding();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void RemoveWarpBaseSlot(AORWarpBaseSlot* WarpBaseSlot);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEncounter(AOREncounterManager* EncounterManager);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerLeftBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleEnd_BP(const bool IsCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBattleBegin_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInBoundary() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBattleActive();
    
    UFUNCTION(BlueprintCallable)
    void EncounterEnd(const bool EncounterComplete, AOREncounterManager* Encounter);
    
    UFUNCTION(BlueprintCallable)
    void CheckBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void BattleEnd(const bool IsCompleted);
    
    UFUNCTION(BlueprintCallable)
    void BattleBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreEnemiesInCombat() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWarpBaseSlot(TSoftObjectPtr<AORWarpBaseSlot> WarpBaseSlot);
    
    UFUNCTION(BlueprintCallable)
    void AddEncounter(AOREncounterManager* EncounterManager);
    
};

