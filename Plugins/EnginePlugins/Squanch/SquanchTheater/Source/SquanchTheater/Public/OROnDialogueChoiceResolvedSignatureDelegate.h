#pragma once
#include "CoreMinimal.h"
#include "ESTChoiceOutput.h"
#include "OROnDialogueChoiceResolvedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOROnDialogueChoiceResolvedSignature, ESTChoiceOutput, Choice, int32, ChoiceIndex, const bool, bAllowRepeatChoice, const FName&, ChoiceID);

