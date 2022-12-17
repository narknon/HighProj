#pragma once
#include "CoreMinimal.h"
#include "SQItemEquipPayload.h"
#include "AbilityOverrideData.h"
#include "ORItemEquipPayload_AbilityOverride.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_AbilityOverride : public USQItemEquipPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityOverrideData> OverrideData;
    
    UORItemEquipPayload_AbilityOverride();
};

