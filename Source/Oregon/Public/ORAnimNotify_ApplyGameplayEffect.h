#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ORAnimNotify_ApplyGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, CollapseCategories)
class OREGON_API UORAnimNotify_ApplyGameplayEffect : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameplayEffectLevel;
    
public:
    UORAnimNotify_ApplyGameplayEffect();
};

