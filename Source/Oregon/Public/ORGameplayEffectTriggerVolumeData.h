#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "ORGameplayEffectTriggerVolumeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FORGameplayEffectTriggerVolumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle Handle;
    
    OREGON_API FORGameplayEffectTriggerVolumeData();
};

