#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_FocusLocation.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_FocusLocation : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearOnExit;
    
    UBTService_FocusLocation();
};

