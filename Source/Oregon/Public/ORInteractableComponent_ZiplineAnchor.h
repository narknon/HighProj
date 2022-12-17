#pragma once
#include "CoreMinimal.h"
#include "ORInteractableComponent_SplineAnchor.h"
#include "ORInteractableComponent_ZiplineAnchor.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent_ZiplineAnchor : public UORInteractableComponent_SplineAnchor {
    GENERATED_BODY()
public:
    UORInteractableComponent_ZiplineAnchor();
};

