#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORShoppingSubsystem.generated.h"

class UORVendorItemComponent;

UCLASS(Blueprintable)
class OREGON_API UORShoppingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UORShoppingSubsystem();
private:
    UFUNCTION(BlueprintCallable)
    bool SellItem(UORVendorItemComponent* ItemToSell);
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseItem(UORVendorItemComponent* ItemToPurchase);
    
    UFUNCTION(BlueprintCallable)
    bool CanSell(UORVendorItemComponent* ItemToSell);
    
    UFUNCTION(BlueprintCallable)
    bool CanPurchase(UORVendorItemComponent* ItemToPurchase);
    
};

