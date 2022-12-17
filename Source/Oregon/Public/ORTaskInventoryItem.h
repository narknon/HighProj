#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQEquippableInventoryItem.h"
#include "ORTaskInventoryItem.generated.h"

class UORCharacterInventory;
class AORTaskInventoryPickup;

UCLASS(Abstract, Blueprintable)
class OREGON_API AORTaskInventoryItem : public ASQEquippableInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDroppable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORTaskInventoryPickup> TaskItemPickupClass;
    
    AORTaskInventoryItem();
    UFUNCTION(BlueprintCallable)
    bool DropItem(UORCharacterInventory* FromInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RemovedFromInventory(UORCharacterInventory* Inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddedToInventory(UORCharacterInventory* Inventory);
    
};

