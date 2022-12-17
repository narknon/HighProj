#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility_FireItem.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_FireItemByTag.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_FireItemByTag : public UORGameplayAbility_FireItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTag;
    
public:
    UORGameplayAbility_FireItemByTag();
};

