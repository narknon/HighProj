#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility_PlayerInteract.h"
#include "ORGameplayAbility_GunInteract.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_GunInteract : public UORGameplayAbility_PlayerInteract {
    GENERATED_BODY()
public:
    UORGameplayAbility_GunInteract();
};

