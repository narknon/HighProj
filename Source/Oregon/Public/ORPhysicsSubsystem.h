#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORPhysicsSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORPhysicsSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UORPhysicsSubsystem();
};

