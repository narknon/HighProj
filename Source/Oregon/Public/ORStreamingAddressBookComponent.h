#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookComponentBase.h"
#include "ORStreamingAddressBookComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingAddressBookComponent : public UORStreamingAddressBookComponentBase {
    GENERATED_BODY()
public:
    UORStreamingAddressBookComponent();
};

