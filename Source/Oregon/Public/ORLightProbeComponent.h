#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "ORLightProbeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORLightProbeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UORLightProbeComponent();
};

