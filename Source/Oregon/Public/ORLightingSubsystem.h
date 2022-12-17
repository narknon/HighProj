#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORLightingSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORLightingSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UORLightingSubsystem();
};

