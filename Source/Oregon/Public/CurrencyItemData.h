#pragma once
#include "CoreMinimal.h"
#include "CurrencyItemDescriptor.h"
#include "CurrencyItemData.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCurrencyItemDescriptor ItemDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StackCount;
    
    OREGON_API FCurrencyItemData();
};

