#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORSplineInteractableInterface.h"
#include "ORSplineAnchorActor.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORSplineAnchorActor : public AActor, public IORSplineInteractableInterface {
    GENERATED_BODY()
public:
    AORSplineAnchorActor();
    
    // Fix for true pure virtual functions not being implemented
};

