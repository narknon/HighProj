#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "ScalableFloat.h"
#include "ELezduitFireState.h"
#include "ORFireLoop_LezduitPrimary.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_LezduitPrimary : public USQFireLoopComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELezduitFireState> CurrentFiringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentFiringTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LoopCycleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PostfireTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat QueuedInputTime;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> CachedTargetables;
    
public:
    UORFireLoop_LezduitPrimary();
};

