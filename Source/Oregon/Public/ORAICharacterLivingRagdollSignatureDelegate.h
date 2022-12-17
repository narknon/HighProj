#pragma once
#include "CoreMinimal.h"
#include "ORAICharacterLivingRagdollSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORAICharacterLivingRagdollSignature, const bool, bInRagdoll);

