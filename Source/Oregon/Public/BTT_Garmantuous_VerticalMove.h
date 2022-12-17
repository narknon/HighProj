#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ORGarmFlightControllerMove.h"
#include "BTT_Garmantuous_VerticalMove.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTT_Garmantuous_VerticalMove : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORGarmFlightControllerMove MoveData;
    
    UBTT_Garmantuous_VerticalMove();
};

