#pragma once
#include "CoreMinimal.h"
#include "SQProjectileMovementComponent.h"
#include "ORGarmProjectileMovement.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORGarmProjectileMovement : public USQProjectileMovementComponent {
    GENERATED_BODY()
public:
    UORGarmProjectileMovement();
};

