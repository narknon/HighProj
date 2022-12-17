#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OREncounterSpawnsVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UOREncounterSpawnsVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UOREncounterSpawnsVisualizerComponent();
};

