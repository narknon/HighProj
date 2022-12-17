#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CurrencyItemDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FCurrencyItemDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StartingStackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxStackCount;
    
    OREGON_API FCurrencyItemDescriptor();
};

