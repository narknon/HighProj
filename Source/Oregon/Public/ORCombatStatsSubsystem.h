#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CombatStatList.h"
#include "GameplayTagContainer.h"
#include "ORCombatStatDelegateDelegate.h"
#include "ORCombatStatsSubsystem.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class OREGON_API UORCombatStatsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCombatStatList> StatData;
    
public:
    UORCombatStatsSubsystem();
    UFUNCTION(BlueprintCallable)
    bool UnpauseTrackingStat(int32 CallbackId);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatStatValue(const FGameplayTag& EventType, const TArray<FGameplayTag>& StatsTags, int32 Count, bool AddToExistingStatTotal);
    
    UFUNCTION(BlueprintCallable)
    int32 RegisterForStatProgress(const FGameplayTag& EventType, const TArray<FGameplayTag>& StatsTag, int32 CurrentValue, int32 MaxValue, bool bTrackingEnabled, const FORCombatStatDelegate& Callback);
    
    UFUNCTION(BlueprintCallable)
    bool PauseTrackingStat(int32 CallbackId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelStatCallback(int32 CallbackId);
    
    UFUNCTION(BlueprintCallable)
    void AddCombatStat(const FGameplayTag& EventType, const TArray<FGameplayTag>& StatsTags, int32 Count);
    
};

