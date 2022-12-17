#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "Components/ActorComponent.h"
#include "BlinkFinishedDelegateDelegate.h"
#include "BlinkUpdateDelegateDelegate.h"
#include "ORBlinkAndShrinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UORBlinkAndShrinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoBlinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowBlinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FastBlinkTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve ShrinkCurveScale;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlinkUpdateDelegate OnUpdateBlink;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlinkFinishedDelegate OnBlinkFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeDestroyedOnShrink;
    
    UORBlinkAndShrinkComponent();
    UFUNCTION(BlueprintCallable)
    void RestartBlinkAndShrink();
    
    UFUNCTION(BlueprintCallable)
    void ClearBlinkAndShrinkValues();
    
};

