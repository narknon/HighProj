#pragma once
#include "CoreMinimal.h"
#include "ORAmmoPickup.h"
#include "GameplayTagContainer.h"
#include "ORAmmoPickup_SpecificItem.generated.h"

UCLASS(Blueprintable)
class AORAmmoPickup_SpecificItem : public AORAmmoPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemName;
    
    AORAmmoPickup_SpecificItem();
};

