#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORPickupBase.h"
#include "GameplayTagContainer.h"
#include "ORInventoryPickup.generated.h"

class ASQEquippableInventoryItem;

UCLASS(Blueprintable)
class AORInventoryPickup : public AORPickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQEquippableInventoryItem> PickupItemClass;
    
    AORInventoryPickup();
};

