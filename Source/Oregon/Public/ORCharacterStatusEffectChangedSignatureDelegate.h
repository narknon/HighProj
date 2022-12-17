#pragma once
#include "CoreMinimal.h"
#include "EORAIStatusEffect.h"
#include "ORCharacterStatusEffectChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORCharacterStatusEffectChangedSignature, const EORAIStatusEffect, NewStatusEffect, const EORAIStatusEffect, OldStatusEffect);

