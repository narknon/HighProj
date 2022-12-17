#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "ORMultiGameplayEffectTriggerVolumeSettings.h"
#include "ORMultiGameplayEffectTriggerVolumeData.h"
#include "ORMultiGETriggerVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORMultiGETriggerVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORMultiGameplayEffectTriggerVolumeSettings> Effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FORMultiGameplayEffectTriggerVolumeData> ActiveEffects;
    
    AORMultiGETriggerVolume();
};

