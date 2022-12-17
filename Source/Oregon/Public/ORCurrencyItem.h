#pragma once
#include "CoreMinimal.h"
#include "SQInventoryItem.h"
#include "ORCurrencyItem.generated.h"

class UObject;

UCLASS(Blueprintable)
class OREGON_API AORCurrencyItem : public ASQInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxStacks;
    
public:
    AORCurrencyItem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    int32 GetMaxStacks(UObject* WorldContextObject);
    
};

