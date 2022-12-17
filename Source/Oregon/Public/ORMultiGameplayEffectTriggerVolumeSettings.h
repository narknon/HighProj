#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORMultiGameplayEffectTriggerVolumeSettings.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FORMultiGameplayEffectTriggerVolumeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayEffectLevel;
    
    OREGON_API FORMultiGameplayEffectTriggerVolumeSettings();
};

