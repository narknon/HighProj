#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BTUtilitySelectionMethod.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BTUTILITYPLUGIN_API UBTUtilitySelectionMethod : public UObject {
    GENERATED_BODY()
public:
    UBTUtilitySelectionMethod();
};

