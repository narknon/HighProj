#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ItemEventFiredDelegate.h"
#include "SQInventoryItem.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API ASQInventoryItem : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEventFired ItemEventDelegate;
    
    ASQInventoryItem();
    UFUNCTION(BlueprintCallable)
    void TriggerItemEvent(FGameplayTag Event, FGameplayTag FireMode, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
};

