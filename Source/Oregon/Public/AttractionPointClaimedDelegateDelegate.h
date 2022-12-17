#pragma once
#include "CoreMinimal.h"
#include "AttractionPointClaimedDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAttractionPointClaimedDelegate, AActor*, AIActor);

