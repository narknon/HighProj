#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORCollisionSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORCollisionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UORCollisionSubsystem();
};

