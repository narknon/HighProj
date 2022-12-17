#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORBlinkComponent.generated.h"

class USTPossessableComponent;
class UAnimInstance;
class UAnimMontage;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UORBlinkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenBlinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTimeBetweenBlinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopBlinksWhenSpeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BlinkMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlinkingDisabled;
    
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USTPossessableComponent> OwningPossComp;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UAnimInstance> OwningAnimInstance;
    
public:
    UORBlinkComponent();
    UFUNCTION(BlueprintCallable)
    void SetBlinkingDisabled(bool bInIsDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayBlink();
    
    UFUNCTION(BlueprintCallable)
    void OnTalkingChanged(bool bIsTalking);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBlinkTimerFinished();
    
};

