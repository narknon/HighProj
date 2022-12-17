#pragma once
#include "CoreMinimal.h"
#include "ORAICharacterDiedSignatureDelegate.generated.h"

class UObject;
class AORAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORAICharacterDiedSignature, AORAICharacter*, Victim, UObject*, Killer);

