#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ORAbilityRequirementOverrideData.h"
#include "GameplayTagContainer.h"
#include "EORAIRecordCharacterAbilityUsage.h"
#include "BTService_ORTryAttackMainTarget.generated.h"

class UGameplayAbility;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class OREGON_API UBTService_ORTryAttackMainTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAbilityRequirementOverrideData AbilityRequirementOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORAIRecordCharacterAbilityUsage RecordUsageSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAbilityIsCurrentlyActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
public:
    UBTService_ORTryAttackMainTarget();
protected:
    UFUNCTION(BlueprintCallable)
    void AbilityEndCallback(UGameplayAbility* Ability);
    
};

