#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ORGameplayAbility.generated.h"

class AORAIController;
class UORAbilityActivationData;

UCLASS(Abstract, Blueprintable)
class OREGON_API UORGameplayAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORAbilityActivationData* ActivationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORAbilityActivationData* DeactivationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowWhileLeftArmActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateAbilityOnGranted;
    
public:
    UORGameplayAbility();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAIController* GetOwningORAIControllerFromActorInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AORAIController* GetOwningORAIController(const FGameplayAbilityActorInfo& ActorInfo);
    
};

