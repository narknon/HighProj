#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ORGarmFlightControllerMove.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTT_Garmantuous_MoveToActor.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTT_Garmantuous_MoveToActor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetActorKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORGarmFlightControllerMove MoveData;
    
    UBTT_Garmantuous_MoveToActor();
};

