#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "ORStreamingHitchVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORStreamingHitchVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RegionAddress;
    
    AORStreamingHitchVolume();
};

