#pragma once
#include "CoreMinimal.h"
#include "ORCharacterInventory.h"
#include "ORPlayerInventory.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerInventory : public UORCharacterInventory {
    GENERATED_BODY()
public:
    UORPlayerInventory();
};

