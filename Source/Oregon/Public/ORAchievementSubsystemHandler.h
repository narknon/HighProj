#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORAchievementSubsystemHandler.generated.h"

class UWorld;

UCLASS(Blueprintable)
class OREGON_API UORAchievementSubsystemHandler : public UObject {
    GENERATED_BODY()
public:
    UORAchievementSubsystemHandler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleStatBasedAchievementProgress(FName DataTableRowName, int32 PrevValue, int32 CurrentValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleStatBasedAchievementComplete(FName DataTableRowName, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetupNewPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetAchievementStat(const FString& AchievementName, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetAchievementPercent(const FString& AchievementName, float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleResetAchievements();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnWorldChanged(UWorld* OldWorld, UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnDeinitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewDebugGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleAddToAchievementProgress(FName DataTableName, int32 Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AwardAchievement(FName DataTableRowName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateStatBasedAchievementByRowName(FName DataTableRowName, int32 StartingStatValue);
    
};

