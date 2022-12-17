#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyInt -FallbackName=DifficultyInt
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQDifficultyComparisionOperation -FallbackName=ESQDifficultyComparisionOperation
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQDifficultySetting -FallbackName=ESQDifficultySetting
#include "ORDifficultySubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORDifficultySubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    UORDifficultySubsystem();
    UFUNCTION(BlueprintCallable)
    void SetDifficulty(ESQDifficultySetting Setting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotNormalDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotHardDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotEasyDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNormalDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHardDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEasyDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDifficultyInt(const FDifficultyInt& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDifficultyFloat(const FDifficultyFloat& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESQDifficultySetting GetDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void DebugChangeDifficulty(ESQDifficultySetting Setting);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDifficulty(ESQDifficultyComparisionOperation CompareOperation, ESQDifficultySetting CompareSetting);
    
};

