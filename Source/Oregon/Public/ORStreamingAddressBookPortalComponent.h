#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookComponentBase.h"
#include "ORStreamingAddressBookPortalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingAddressBookPortalComponent : public UORStreamingAddressBookComponentBase {
    GENERATED_BODY()
public:
    UORStreamingAddressBookPortalComponent();
};

