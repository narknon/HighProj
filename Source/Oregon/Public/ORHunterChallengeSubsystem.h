#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActiveHunterChallenge.h"
#include "GameplayTagContainer.h"
#include "ORHunterChallengeSubsystem.generated.h"

class UORHunterChallengeSubsystemHandler;

UCLASS(Blueprintable)
class OREGON_API UORHunterChallengeSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORHunterChallengeSubsystemHandler* Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveHunterChallenge> ActiveChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> CompletedChallenges;
    
public:
    UORHunterChallengeSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnpauseHunterChallenges();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void ResetLoadedChallenges();
    
    UFUNCTION(BlueprintCallable)
    void PauseHunterChallenges();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeUIUnlocked(FName DataTableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeHiddenFromUI(FName DataTableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeCompleted(FName DataTableName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeActive(FName DataTableName);
    
    UFUNCTION(BlueprintCallable)
    void HandleCombatStatProgress(int32 CallbackId, int32 PrevValue, int32 CurrentValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCompletedChallenges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveChallenges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORHunterChallengeSubsystemHandler* GetHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FActiveHunterChallenge> GetActiveChallenges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChallengesAreLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelChallenge(int32 CallbackId);
    
    UFUNCTION(BlueprintCallable)
    void ActivateHunterChallengeByRowName(FName ChallengeRowName, int32 StartingStatValue);
    
    UFUNCTION(BlueprintCallable)
    void ActivateChallenge(FName DataTableRowName, const FGameplayTag& Event, const TArray<FGameplayTag>& TrackedStatTags, int32 MaxValue, int32 StartValue, bool bTrackingEnabled);
    
};

