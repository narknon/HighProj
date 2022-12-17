#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORPlayerCompassMarkerVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerCompassMarkerVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UORPlayerCompassMarkerVisualizerComponent();
};

