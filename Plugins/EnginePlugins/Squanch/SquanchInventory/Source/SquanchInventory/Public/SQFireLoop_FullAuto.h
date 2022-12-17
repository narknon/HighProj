#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "ScalableFloat.h"
#include "EFullAutoState.h"
#include "SQFireLoop_FullAuto.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQFireLoop_FullAuto : public USQFireLoopComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PrefireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PostfireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat QueuedInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFullAutoState> CurrentFiringState;
    
public:
    USQFireLoop_FullAuto();
};

