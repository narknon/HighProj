#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ORStreamingPortalThresholdComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingPortalThresholdComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UORStreamingPortalThresholdComponent();
};

