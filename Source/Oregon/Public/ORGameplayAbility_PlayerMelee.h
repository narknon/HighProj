#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility_FireItem.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_PlayerMelee.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_PlayerMelee : public UORGameplayAbility_FireItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MeleeTweenDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RagdolledTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StaggeredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShieldedEnemyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FlyingEnemyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BossCharacterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterTooLowForDeepCutTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinisherTargetZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOldExecuteEnabled;
    
public:
    UORGameplayAbility_PlayerMelee();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerMeleeEvent(FGameplayTag CurrentMeleeType);
    
};

