#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ORActivateAbilityOnPawn.generated.h"

class UGameplayAbility;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class OREGON_API UBTTask_ORActivateAbilityOnPawn : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* MyOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityClassReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockingTask;
    
public:
    UBTTask_ORActivateAbilityOnPawn();
protected:
    UFUNCTION(BlueprintCallable)
    void AbilityEndCallback(UGameplayAbility* Ability);
    
};

