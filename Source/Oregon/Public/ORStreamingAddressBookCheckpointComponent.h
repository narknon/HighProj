#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookComponentBase.h"
#include "ORStreamingAddressBookCheckpointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingAddressBookCheckpointComponent : public UORStreamingAddressBookComponentBase {
    GENERATED_BODY()
public:
    UORStreamingAddressBookCheckpointComponent();
};

