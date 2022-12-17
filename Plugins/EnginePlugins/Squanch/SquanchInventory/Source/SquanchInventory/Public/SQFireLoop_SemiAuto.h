#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "ScalableFloat.h"
#include "ESemiAutoState.h"
#include "SQFireLoop_SemiAuto.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQFireLoop_SemiAuto : public USQFireLoopComponent {
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
    TEnumAsByte<ESemiAutoState> CurrentFiringState;
    
public:
    USQFireLoop_SemiAuto();
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerPostfire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPrefireTime();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPostfireTime();
    
};

