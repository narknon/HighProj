#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CurrencyItemDescriptor.h"
#include "EquippableItemDescriptor.h"
#include "InventorySet.generated.h"

UCLASS(Blueprintable)
class OREGON_API UInventorySet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEquippableItemDescriptor> GearItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrencyItemDescriptor> CurrencyItems;
    
    UInventorySet();
};

