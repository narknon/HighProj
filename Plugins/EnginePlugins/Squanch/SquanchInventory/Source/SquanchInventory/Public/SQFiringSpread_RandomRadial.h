#pragma once
#include "CoreMinimal.h"
#include "SQFiringSpread.h"
#include "ScalableFloat.h"
#include "SQFiringSpread_RandomRadial.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQFiringSpread_RandomRadial : public USQFiringSpread {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FireSpread;
    
public:
    USQFiringSpread_RandomRadial();
};

