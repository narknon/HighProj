#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "ORStatsSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORStatsSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    UORStatsSubsystem();
    UFUNCTION(BlueprintCallable)
    void RecordStatEvent(const TArray<FName>& StatElems);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStatValue(const TArray<FName>& StatElems);
    
};

