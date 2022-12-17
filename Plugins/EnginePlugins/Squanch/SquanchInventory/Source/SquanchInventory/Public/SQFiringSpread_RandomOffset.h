#pragma once
#include "CoreMinimal.h"
#include "SQFiringSpread.h"
#include "ScalableFloat.h"
#include "SQFiringSpread_RandomOffset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQFiringSpread_RandomOffset : public USQFiringSpread {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FireSpreadOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FireSpreadOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxOffsetAngle;
    
public:
    USQFiringSpread_RandomOffset();
};

