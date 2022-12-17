#pragma once
#include "CoreMinimal.h"
#include "SQFiringSpread.h"
#include "ScalableFloat.h"
#include "SQFiringSpread_EqualRadial.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SQUANCHINVENTORY_API USQFiringSpread_EqualRadial : public USQFiringSpread {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InnerSpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OuterSpreadRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartRollAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRollOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreFirstBullet;
    
public:
    USQFiringSpread_EqualRadial();
};

