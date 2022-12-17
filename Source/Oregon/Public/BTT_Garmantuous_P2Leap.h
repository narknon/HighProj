#pragma once
#include "CoreMinimal.h"
#include "BTTask_ORActivateAICharAbility.h"
#include "BTT_Garmantuous_P2Leap.generated.h"

class AORAIController;

UCLASS(Blueprintable)
class OREGON_API UBTT_Garmantuous_P2Leap : public UBTTask_ORActivateAICharAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDistanceFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TravelDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORAIController* GarmController;
    
public:
    UBTT_Garmantuous_P2Leap();
};

