#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_AbilityContextSwapping.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_AbilityContextSwapping : public UORGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ContextualAbilityName;
    
public:
    UORGameplayAbility_AbilityContextSwapping();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAbilityEnded(UGameplayAbility* Ability);
    
};

