#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "ORMultiGameplayEffectTriggerVolumeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FORMultiGameplayEffectTriggerVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle Handle;
    
    OREGON_API FORMultiGameplayEffectTriggerVolumeData();
};

