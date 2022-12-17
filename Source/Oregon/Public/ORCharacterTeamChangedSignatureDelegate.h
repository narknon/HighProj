#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "ORCharacterTeamChangedSignatureDelegate.generated.h"

class AORCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FORCharacterTeamChangedSignature, AORCharacter*, Character, FGenericTeamId, NewTeamId, FGenericTeamId, OldTeamId);

