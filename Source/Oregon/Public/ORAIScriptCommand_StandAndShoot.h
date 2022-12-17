#pragma once
#include "CoreMinimal.h"
#include "ORAIScriptCommandBase.h"
#include "ORAbilityRequirementOverrideData.h"
#include "GameplayTagContainer.h"
#include "ORAIScriptCommand_StandAndShoot.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_StandAndShoot : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAbilityRequirementOverrideData AbilityRequirementOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAbilityIsCurrentlyActive;
    
    UORAIScriptCommand_StandAndShoot();
    UFUNCTION(BlueprintCallable)
    void AbilityEndCallback(UGameplayAbility* Ability);
    
};

