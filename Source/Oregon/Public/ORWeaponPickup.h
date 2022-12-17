#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ORWeaponPickup.generated.h"

class ASQFireableInventoryItem;
class ASQEquippableInventoryItem;
class AORPlayerCharacter;

UCLASS(Blueprintable)
class OREGON_API AORWeaponPickup : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEquippableInventoryItem* InventoryItemCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQFireableInventoryItem> ItemClass;
    
    AORWeaponPickup();
    UFUNCTION(BlueprintCallable)
    void PickupWeapon(AORPlayerCharacter* Player);
    
};

