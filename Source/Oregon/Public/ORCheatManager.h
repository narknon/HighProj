#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayEffectTypes.h"
#include "ORCheatManager.generated.h"

class UInventorySet;

UCLASS(Blueprintable)
class OREGON_API UORCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle DisableEnemyAttacksHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle GodHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle PseudoGodHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle InfiniteAmmoHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle OnePunchHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle UndetectableHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, bool> CheatStates;
    
public:
    UORCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAchievement(const FString& AchievementName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Undetectable();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowActiveVFX();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowActiveDecals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerDebugPathVisual(float TimeToTrack);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHousePortal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopWwiseProfiling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopRagdollAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopEnemyLogic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartWwiseProfiling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartRagdollAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowGun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUndetectable(const bool bSetActive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerInventory(UInventorySet* InventorySet);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHunterChallengeStat(const FString& HunterChallengeName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHunterChallengesPaused(bool Paused);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHouseUnloaded();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGod(const bool bSetActive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAchievementStat(const FString& AchievementName, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAchievementPercent(const FString& AchievementName, float Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReturnAIsToPool(const bool bIncludeLivingEnemies, const FString& TypeString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievements();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PseudoGod();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void Perf_SimulateXboxSeriesX();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Perf_SimulateXboxSeriesS();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Perf_SimulateXboxOneX();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Perf_SimulateXboxOne();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void OnePunch();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Exec)
    void Multigun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadDebugSaveAsset(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillEnemies(const FString& TypeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InvertGamepad();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void Input_TestAxisRebind();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_TestActionRebind();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipToggleSprint();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipTogglePowerSlide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipToggleJetpackRise();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipToggleJetpackHover();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipToggleInfoScan();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipToggleDodge();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Input_FlipToggleAltFire();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteFuel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void InfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IncSlomo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideGun();
    
    UFUNCTION(BlueprintCallable)
    bool GetCheatState(const FString& Cheat);
    
    UFUNCTION(BlueprintCallable, Exec)
    TArray<FString> GetAllDebugSaveAssets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceProfileSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DismissAmbientBases();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableEnemyAttacks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DecSlomo();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_DumpTriggerSubsystem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_DumpNonStreamedTextures(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_DumpNavTreeInfo(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Debug_DumpHLODMemoryInformation();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void CreateDebugSaveAsset(const FString& SaveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CloseAllPortals();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearSaveAndRestart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearPlayerDebugPathVisual();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_TakeHealing(float Healing);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Cheat_TakeDamage(float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Exec)
    void BlueprintCheat(const FString& Cheat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BlockForLoading();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddMoney(int32 Amount);
    
};

