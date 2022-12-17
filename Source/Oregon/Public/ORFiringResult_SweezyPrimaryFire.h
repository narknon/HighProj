#pragma once
#include "CoreMinimal.h"
#include "ORFiringResult_Instant.h"
#include "ScalableFloat.h"
#include "ORFiringResult_SweezyPrimaryFire.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORFiringResult_SweezyPrimaryFire : public UORFiringResult_Instant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LockedOnMaxCorrection;
    
    UORFiringResult_SweezyPrimaryFire();
};

