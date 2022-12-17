#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActiveStatBasedAchievement.h"
#include "GameplayTagContainer.h"
#include "ORAchievementSubsystem.generated.h"

class UORAchievementSubsystemHandler;

UCLASS(Blueprintable)
class OREGON_API UORAchievementSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORAchievementSubsystemHandler* Handler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveStatBasedAchievement> ActiveStatBasedAchievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FName> CompletedAchievements;
    
public:
    UORAchievementSubsystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StatBasedAchievementsAreLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void ResetLoadedStatBasedAchievements();
    
    UFUNCTION(BlueprintCallable)
    void MarkAchievementAsCompleted(FName DataTableRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStatBasedAchievementActive(FName DataTableName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAchievementCompleted(FName DataTableName) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleCombatStatProgress(int32 CallbackId, int32 PrevValue, int32 CurrentValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCompletedAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumActiveStatBasedAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UORAchievementSubsystemHandler* GetHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FActiveStatBasedAchievement> GetActiveStatBasedAchievements() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelStatBasedAchievements(int32 CallbackId);
    
    UFUNCTION(BlueprintCallable)
    void AwardAchievement(FName DataTableRowName);
    
    UFUNCTION(BlueprintCallable)
    void AddToAchievementProgress(FName DataTableName, int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    void ActivateStatBasedAchievementByRowName(FName ChallengeRowName, int32 StartingStatValue);
    
    UFUNCTION(BlueprintCallable)
    void ActivateStatBasedAchievement(FName DataTableRowName, const FGameplayTag& Event, const TArray<FGameplayTag>& TrackedStatTags, int32 MaxValue, int32 StartValue, bool bTrackingEnabled);
    
};

