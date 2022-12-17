#pragma once
#include "CoreMinimal.h"
#include "UtilityInput.h"
#include "GameplayTagContainer.h"
#include "UAILowOnAmmo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UUAILowOnAmmo : public UUtilityInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventorySlotGameplayTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireModeGameplayTag;
    
    UUAILowOnAmmo();
};

