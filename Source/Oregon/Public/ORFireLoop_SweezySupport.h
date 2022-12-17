#pragma once
#include "CoreMinimal.h"
#include "ORFireLoop_WeaponAbility.h"
#include "ItemEventData.h"
#include "ORFireLoop_SweezySupport.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_SweezySupport : public UORFireLoop_WeaponAbility {
    GENERATED_BODY()
public:
    UORFireLoop_SweezySupport();
    UFUNCTION(BlueprintCallable)
    void HandleSweezyItemEvent(TArray<FItemEventData> ActiveItemEvents);
    
};

