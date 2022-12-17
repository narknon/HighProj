#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OROnDamageTakenSignatureDelegate.generated.h"

class UObject;
class AORCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOROnDamageTakenSignature, UObject*, Damager, AORCharacter*, Damaged, const FHitResult&, HitResult, float, Damage, const FGameplayTagContainer&, DamageTags);

