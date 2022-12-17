#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ORAbilityRequirementOverrideData.h"
#include "GameplayTagContainer.h"
#include "EORCanUseCharAbilityTargetType.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTD_ORCanUseCharAbilityOnTarget.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTD_ORCanUseCharAbilityOnTarget : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAbilityRequirementOverrideData AbilityRequirementOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORCanUseCharAbilityTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector CustomTargetKey;
    
    UBTD_ORCanUseCharAbilityOnTarget();
};

