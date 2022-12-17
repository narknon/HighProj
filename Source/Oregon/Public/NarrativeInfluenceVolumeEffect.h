#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NarrativeInfluenceVolumeEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FNarrativeInfluenceVolumeEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInterpolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterpOuter;
    
    OREGON_API FNarrativeInfluenceVolumeEffect();
};

