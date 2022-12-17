#pragma once
#include "CoreMinimal.h"
#include "STOnTalkingChangedSignatureDelegate.generated.h"

class USTPossessableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSTOnTalkingChangedSignature, bool, bIsTalking, USTPossessableComponent*, Speaker);

