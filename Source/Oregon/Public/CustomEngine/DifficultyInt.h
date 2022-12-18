#pragma once
#include "CoreMinimal.h"
#include "DifficultyInt.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FDifficultyInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 EasyVal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NormalVal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 HardVal;
    
    FDifficultyInt();
};

