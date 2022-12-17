#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORHunterChallengeSubsystemHandler.generated.h"

class UWorld;
class AOR3DMapVolume;

UCLASS(Blueprintable)
class OREGON_API UORHunterChallengeSubsystemHandler : public UObject {
    GENERATED_BODY()
public:
    UORHunterChallengeSubsystemHandler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsChallengeHiddenFromUI(FName DataTableName, bool& IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUnpauseHunterChallenges();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSetHunterChallengeStat(const FString& HunterChallengeName, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePauseHunterChallenges();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnWorldChanged(UWorld* OldWorld, UWorld* NewWorld);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnLoadCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnDeinitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleNewGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDiscoveredRegion(AOR3DMapVolume* MapVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleChallengeProgress(FName ChallengeRowName, int32 PrevValue, int32 CurrentValue, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleChallengeComplete(FName ChallengeRowName, int32 MaxValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateHunterChallengeByRowName(FName ChallengeRowName, int32 StartingStatValue);
    
};

