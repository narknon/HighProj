#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "ActorTokenRuntimeData.h"
#include "AttackTokenHandle.h"
#include "AttackToken.h"
#include "GameplayTagContainer.h"
#include "ORAttackTokenSubsystem.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class OREGON_API UORAttackTokenSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, FActorTokenRuntimeData> RegisteredActorTokenCounters;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<uint32, FAttackToken> TokenMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAttackToken> TokensOnCooldown;
    
public:
    UORAttackTokenSubsystem();
    UFUNCTION(BlueprintCallable)
    bool UnregisterFromTokenControl(AActor* TokenActor);
    
    UFUNCTION(BlueprintCallable)
    FAttackTokenHandle TryReserveTargetToken(AActor* TargetTokenActor, UObject* Attacker, const FGameplayTag AttackTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool RequiresTokenToBeAttacked(const AActor* TargetTokenActor) const;
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTargetTokenByHandle(UPARAM(Ref) FAttackTokenHandle& Handle);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterForTokenControl(AActor* TokenActor, TMap<FGameplayTag, int32> InitialTokens);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAvailableTargetToken(const AActor* TargetTokenActor, const FGameplayTag AttackTypeTag) const;
    
};

