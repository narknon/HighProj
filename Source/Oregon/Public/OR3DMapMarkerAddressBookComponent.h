#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookComponentBase.h"
#include "OR3DMapMarkerAddressBookComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UOR3DMapMarkerAddressBookComponent : public UORStreamingAddressBookComponentBase {
    GENERATED_BODY()
public:
    UOR3DMapMarkerAddressBookComponent();
};

