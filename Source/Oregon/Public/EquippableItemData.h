#pragma once
#include "CoreMinimal.h"
#include "EquippableItemDescriptor.h"
#include "EquippableItemData.generated.h"

class ASQEquippableInventoryItem;

USTRUCT(BlueprintType)
struct FEquippableItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FEquippableItemDescriptor ItemDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEquippableInventoryItem* ItemActor;
    
    OREGON_API FEquippableItemData();
};

