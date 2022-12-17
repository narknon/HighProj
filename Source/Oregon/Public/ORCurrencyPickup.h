#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORPickupBase.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ORCurrencyPickup.generated.h"

class ASQInventoryItem;

UCLASS(Blueprintable)
class OREGON_API AORCurrencyPickup : public AORPickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQInventoryItem> PickupItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PickupItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StacksToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInventoryTransactionType> TransactionType;
    
    AORCurrencyPickup();
};

