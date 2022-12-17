#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemEventData.generated.h"

class ASQInventoryItem;

USTRUCT(BlueprintType)
struct FItemEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQInventoryItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireMode;
    
    SQUANCHINVENTORY_API FItemEventData();
};

