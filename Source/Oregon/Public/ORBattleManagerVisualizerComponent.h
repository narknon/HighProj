#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORBattleManagerVisualizerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORBattleManagerVisualizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UORBattleManagerVisualizerComponent();
};

