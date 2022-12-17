#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "ORGameplayAbility_PlayerGroundPound.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_PlayerGroundPound : public UORGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle GroundPoundActivationTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GroundPoundActivationDelay;
    
public:
    UORGameplayAbility_PlayerGroundPound();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGroundPoundTweenActivation();
    
};

