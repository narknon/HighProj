#pragma once
#include "CoreMinimal.h"
#include "SQItemEquipPayload.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "ORItemEquipPayload_PlayerHealthUpgrade.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_PlayerHealthUpgrade : public USQItemEquipPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthUpgradeValue;
    
    UORItemEquipPayload_PlayerHealthUpgrade();
};

