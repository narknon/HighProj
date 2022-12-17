#pragma once
#include "CoreMinimal.h"
#include "ESlideType.h"
#include "ORSlidingChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FORSlidingChangedSignature, bool, bIsSliding, TEnumAsByte<ESlideType>, SlideType);

