#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORNPCUpdateSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORNPCUpdateSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UORNPCUpdateSubsystem();
};

