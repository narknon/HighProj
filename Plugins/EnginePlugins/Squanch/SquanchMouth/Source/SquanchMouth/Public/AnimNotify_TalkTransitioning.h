#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_TalkTransitioning.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SQUANCHMOUTH_API UAnimNotify_TalkTransitioning : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransitioning;
    
    UAnimNotify_TalkTransitioning();
};

