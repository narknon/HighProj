#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_ORDisableHitReacts.generated.h"

UCLASS(Blueprintable)
class UBTService_ORDisableHitReacts : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UBTService_ORDisableHitReacts();
};

