#pragma once
#include "CoreMinimal.h"
#include "SQFireLoopComponent.h"
#include "GameplayTagContainer.h"
#include "ItemEventData.h"
#include "ORFireLoop_Reload.generated.h"

class USQResourceComponent;
class ASQFireableInventoryItem;
class UORGlobalEventPayload;

UCLASS(Blueprintable)
class OREGON_API UORFireLoop_Reload : public USQFireLoopComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQFireableInventoryItem* ParentFireableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQResourceComponent* Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesAttemptAutoReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRetryAfterCancelling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReloadAtFullAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReloadCancelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TargetFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RetryReloadEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrencyToConsume;
    
    UORFireLoop_Reload();
    UFUNCTION(BlueprintCallable)
    void RetryReload(const UORGlobalEventPayload* EventData);
    
    UFUNCTION(BlueprintCallable)
    void ReloadMontageCancelled();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemEvent(TArray<FItemEventData> ActiveItemEvents);
    
};

