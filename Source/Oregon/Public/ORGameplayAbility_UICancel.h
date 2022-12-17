#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_UICancel.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_UICancel : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UICancelTag;
    
    UORGameplayAbility_UICancel();
};

