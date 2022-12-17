#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_ORFindPopoutPoint.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_ORFindPopoutPoint : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector LastKnownLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumChecksOnEitherSide;
    
    UBTService_ORFindPopoutPoint();
};

