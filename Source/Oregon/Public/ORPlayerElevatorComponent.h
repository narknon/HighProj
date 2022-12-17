#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORPlayerElevatorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerElevatorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UORPlayerElevatorComponent();
};

