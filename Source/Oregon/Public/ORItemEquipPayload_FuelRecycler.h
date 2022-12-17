#pragma once
#include "CoreMinimal.h"
#include "SQItemEquipPayload.h"
#include "ORItemEquipPayload_FuelRecycler.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_FuelRecycler : public USQItemEquipPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GlideHoverFuelModCurveOverride;
    
    UORItemEquipPayload_FuelRecycler();
};

