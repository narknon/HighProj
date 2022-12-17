#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAddRemoveDelegateDelegate.h"
#include "AbilityFailedDyanmicDelegateDelegate.h"
#include "ORAbilitySystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityFailedDyanmicDelegate K2_AbilityFailedCallbacks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAddRemoveDelegate OnTagChanged;
    
    UORAbilitySystemComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTagCountChanged(const FGameplayTag Tag, int32 Count);
    
};

