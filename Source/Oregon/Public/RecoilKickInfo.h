#pragma once
#include "CoreMinimal.h"
#include "RecoilKickInfo.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FRecoilKickInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UCurveVector> Curve;
    
    OREGON_API FRecoilKickInfo();
};

