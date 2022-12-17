#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORGameplayAbility.h"
#include "ORGameplayAbility_Execution.generated.h"

class UGameplayEffect;
class USyncedPlayerAnimationComponent;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_Execution : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationDeadlineSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExecutionTimeoutSeconds;
    
private:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<USyncedPlayerAnimationComponent> CachedSyncAnimationComp;
    
public:
    UORGameplayAbility_Execution();
    UFUNCTION(BlueprintCallable)
    void StartSyncedAnimation(USyncedPlayerAnimationComponent* SyncAnimationComp);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncedAnimationComplete(USyncedPlayerAnimationComponent* SyncAnimationComp);
    
    UFUNCTION(BlueprintCallable)
    void FailsafeTimerElapsed();
    
};

