#pragma once
#include "CoreMinimal.h"
#include "SQItemEquipPayload.h"
#include "GameplayTagContainer.h"
#include "ORItemEquipPayload_MaxCurrencyUpgrade.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_MaxCurrencyUpgrade : public USQItemEquipPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrencyUpgradeAmmount;
    
    UORItemEquipPayload_MaxCurrencyUpgrade();
};

