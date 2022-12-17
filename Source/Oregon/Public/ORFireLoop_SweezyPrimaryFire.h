#pragma once
#include "CoreMinimal.h"
#include "SQFireLoop_FullAuto.h"
#include "ItemEventData.h"
#include "ORFireLoop_SweezyPrimaryFire.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_SweezyPrimaryFire : public USQFireLoop_FullAuto {
    GENERATED_BODY()
public:
    UORFireLoop_SweezyPrimaryFire();
    UFUNCTION(BlueprintCallable)
    void HandleSweezyItemEvent(TArray<FItemEventData> ActiveItemEvents);
    
};

