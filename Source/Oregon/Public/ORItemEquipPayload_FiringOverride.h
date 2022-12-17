#pragma once
#include "CoreMinimal.h"
#include "ORItemEquipPayload_ItemEffects.h"
#include "FiringOverrideData.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ORItemEquipPayload_FiringOverride.generated.h"

class ASQInventoryItem;

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_FiringOverride : public UORItemEquipPayload_ItemEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFiringOverrideData OverrideData;
    
    UORItemEquipPayload_FiringOverride();
    UFUNCTION(BlueprintCallable)
    void InventoryItemAdded(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireMode, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
};

