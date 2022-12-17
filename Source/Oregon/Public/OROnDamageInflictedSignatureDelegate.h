#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OROnDamageInflictedSignatureDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FOROnDamageInflictedSignature, UObject*, Damaged, const FHitResult&, HitResult, float, Damage, const FGameplayTagContainer&, DamageTags, const bool, WasKillingBlow);

