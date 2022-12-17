#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORAIScriptCommandBase.h"
#include "Engine/EngineTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "ORAIScriptCommand_UseAbility.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORAIScriptCommand_UseAbility : public UORAIScriptCommandBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> AbilityClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutomaticTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpecHandle AbilityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TimerHandle;
    
    UORAIScriptCommand_UseAbility();
    UFUNCTION(BlueprintCallable)
    void HandleTimeout();
    
    UFUNCTION(BlueprintCallable)
    void HandleAbilityEnded(UGameplayAbility* Ability);
    
};

