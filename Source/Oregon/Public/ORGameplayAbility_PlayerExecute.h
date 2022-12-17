#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_PlayerExecute.generated.h"

class UGameplayAbility;
class AORAICharacter;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_PlayerExecute : public UORGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MeleeTweenDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExecutableTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExecuteImmunityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ExecuteAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCollisionCheckRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetThresholdTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecuteHealthThreshold;
    
public:
    UORGameplayAbility_PlayerExecute();
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerExecuteLerpTransform();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetAbilityEnded(UGameplayAbility* Ability);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecutionStart(AORAICharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecutionCompleted();
    
};

