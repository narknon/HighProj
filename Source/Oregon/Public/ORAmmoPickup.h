#pragma once
#include "CoreMinimal.h"
#include "ORPickupBase.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "ORAmmoPickup.generated.h"

class AORFireableInventoryItem;
class AORPlayerCharacter;

UCLASS(Blueprintable)
class AORAmmoPickup : public AORPickupBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StacksToGrant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoStacks;
    
    AORAmmoPickup();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivedAmmo(AORFireableInventoryItem* Item, AORPlayerCharacter* PlayerCharacter, int32 AmmoPickedUP);
    
};

