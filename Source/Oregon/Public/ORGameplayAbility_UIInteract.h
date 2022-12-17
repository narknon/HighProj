#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_UIInteract.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_UIInteract : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UIAcceptPressTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UIAcceptReleaseTag;
    
    UORGameplayAbility_UIInteract();
};

