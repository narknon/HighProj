#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "EInitialEquipState.h"
#include "EquippableItemDescriptor.generated.h"

class ASQEquippableInventoryItem;

USTRUCT(BlueprintType)
struct FEquippableItemDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQEquippableInventoryItem> ItemClassOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInitialEquipState> EquipState;
    
    OREGON_API FEquippableItemDescriptor();
};

