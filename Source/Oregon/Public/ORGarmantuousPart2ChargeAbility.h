#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "ORGarmantuousPart2ChargeAbility.generated.h"

class AORTriggerVolume;
class AORBaseGarmantuousPart2Character;
class UORGarmantuousPart2MovementComponent;
class UORGarmantuousPart2AnimInstance;
class AORPlayerCharacter;

UCLASS(Blueprintable)
class OREGON_API UORGarmantuousPart2ChargeAbility : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORBaseGarmantuousPart2Character* Garm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORPlayerCharacter* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORGarmantuousPart2MovementComponent* GarmMovementComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORGarmantuousPart2AnimInstance* GarmAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORTriggerVolume* ActiveChargeArea;
    
    UORGarmantuousPart2ChargeAbility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChargeComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleIntroTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleChargeComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginCharge();
    
};

