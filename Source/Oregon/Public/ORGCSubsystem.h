#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORGCSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGCSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UORGCSubsystem();
};

