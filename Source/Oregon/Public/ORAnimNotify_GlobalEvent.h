#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "ORAnimNotify_GlobalEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class OREGON_API UORAnimNotify_GlobalEvent : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
public:
    UORAnimNotify_GlobalEvent();
};

