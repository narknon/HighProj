#pragma once
#include "CoreMinimal.h"
#include "DifficultyFloat.generated.h"

USTRUCT(BlueprintType)
struct SQUANCHINVENTORY_API FDifficultyFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EasyVal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float NormalVal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HardVal;
    
    FDifficultyFloat();
};

