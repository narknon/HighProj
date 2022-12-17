#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OROnDiedSignatureDelegate.generated.h"

class UObject;
class AORCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOROnDiedSignature, UObject*, Killer, AORCharacter*, Killed, const FHitResult&, HitResult, const FGameplayTagContainer&, DamageTags);

