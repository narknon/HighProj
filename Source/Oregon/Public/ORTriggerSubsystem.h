#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORTriggerSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORTriggerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORTriggerSubsystem();
};

