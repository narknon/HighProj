#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORWorldSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class OREGON_API UORWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORWorldSubsystem();
};

