#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "SQAnimNotify_ItemEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SQUANCHINVENTORY_API USQAnimNotify_ItemEvent : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireModeTag;
    
public:
    USQAnimNotify_ItemEvent();
};

