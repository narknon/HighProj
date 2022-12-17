#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility_PlayerInteract.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_MeleeInteract.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_MeleeInteract : public UORGameplayAbility_PlayerInteract {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemSlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireModeTag;
    
public:
    UORGameplayAbility_MeleeInteract();
};

