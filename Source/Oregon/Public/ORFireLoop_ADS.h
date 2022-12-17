#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ORFireLoop_ADS.generated.h"

class ASQInventoryItem;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_ADS : public USQFireLoopComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ADSState;
    
public:
    UORFireLoop_ADS();
protected:
    UFUNCTION(BlueprintCallable)
    void ParentItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireMode, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
};

