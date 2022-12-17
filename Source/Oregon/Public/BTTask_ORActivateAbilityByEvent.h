#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_ORActivateAbilityByEvent.generated.h"

class UGameplayAbility;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORActivateAbilityByEvent : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailTaskOnFailedActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockingTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecordUsageWithController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRecordUsageOnlyOnSuccessfulActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CharacterAbilityTargetActorKey;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
public:
    UBTTask_ORActivateAbilityByEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void AbilityEndCallback(UGameplayAbility* Ability);
    
};

