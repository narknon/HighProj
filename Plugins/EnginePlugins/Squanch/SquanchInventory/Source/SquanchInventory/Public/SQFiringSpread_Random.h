#pragma once
#include "CoreMinimal.h"
#include "SQFiringSpread.h"
#include "ScalableFloat.h"
#include "SQFiringSpread_Random.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQFiringSpread_Random : public USQFiringSpread {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FireSpread;
    
public:
    USQFiringSpread_Random();
};

