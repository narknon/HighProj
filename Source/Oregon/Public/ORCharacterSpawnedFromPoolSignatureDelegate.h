#pragma once
#include "CoreMinimal.h"
#include "ORCharacterSpawnedFromPoolSignatureDelegate.generated.h"

class AORCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORCharacterSpawnedFromPoolSignature, AORCharacter*, Character);

