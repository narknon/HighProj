#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookComponentBase.h"
#include "ORStreamingAddressBookAnchorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingAddressBookAnchorComponent : public UORStreamingAddressBookComponentBase {
    GENERATED_BODY()
public:
    UORStreamingAddressBookAnchorComponent();
};

