#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ORKrubisJumpPointDisplay.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORKrubisJumpPointDisplay : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UORKrubisJumpPointDisplay();
};

