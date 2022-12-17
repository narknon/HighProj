#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "OnHealthTankEmptiedDelegate.generated.h"

class UObject;
class UORDamageHandlerComponent_Character;
class AORHealthTankItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOnHealthTankEmptied, UORDamageHandlerComponent_Character*, CharDamageComp, AORHealthTankItem*, HealthTank, float, DamageToTank, UObject*, Damager, float, BaseDamageAmt, const FHitResult&, HitResult, const FGameplayTagContainer&, DamageTags);

