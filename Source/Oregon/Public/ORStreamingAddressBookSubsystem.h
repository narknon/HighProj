#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORStreamingAddressBookSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORStreamingAddressBookSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORStreamingAddressBookSubsystem();
};

