#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ORWalkableSoundOverrideVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORWalkableSoundOverrideVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceTypeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> SurfaceTypeOverrideOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeForExitOverrideSounds;
    
    AORWalkableSoundOverrideVolume();
};

