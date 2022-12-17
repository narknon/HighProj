#pragma once
#include "CoreMinimal.h"
#include "ORInventoryPickup.h"
#include "ORTaskInventoryPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class OREGON_API AORTaskInventoryPickup : public AORInventoryPickup {
    GENERATED_BODY()
public:
    AORTaskInventoryPickup();
};

