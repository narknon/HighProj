#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnHandleImpactApplyImpactDamageToSelfDelegate.generated.h"

class UORAICharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_ThreeParams(bool, FOnHandleImpactApplyImpactDamageToSelf, const FHitResult&, HitResult, const float, VelocityMag, UORAICharacterMovementComponent*, MovementComp);

