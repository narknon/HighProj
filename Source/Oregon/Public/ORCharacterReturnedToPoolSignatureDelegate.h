#pragma once
#include "CoreMinimal.h"
#include "ORCharacterReturnedToPoolSignatureDelegate.generated.h"

class AORCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORCharacterReturnedToPoolSignature, AORCharacter*, Character);

