#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORHudDrawSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORHudDrawSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UORHudDrawSubsystem();
};

