#pragma once
#include "CoreMinimal.h"
#include "STChoiceTableRow.h"
#include "OROnDialogueChoiceRequestedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOROnDialogueChoiceRequestedSignature, const FText&, QuestionText, const FSTChoiceTableRow&, ChoiceData, const FName&, ChoiceID, const bool, bCanCancelChoice);

