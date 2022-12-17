#pragma once
#include "CoreMinimal.h"
#include "SQItemEquipPayload.h"
#include "ORItemEquipPayload_GlideRiseUpgrade.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API UORItemEquipPayload_GlideRiseUpgrade : public USQItemEquipPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GlideGlideRiseModCurveOverride;
    
    UORItemEquipPayload_GlideRiseUpgrade();
};

