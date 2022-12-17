#pragma once
#include "CoreMinimal.h"
#include "ORGameplayAbility.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_FireItem.generated.h"

class USQFiringResultComponent;
class USQFireLoopComponent;
class ASQFireableInventoryItem;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_FireItem : public UORGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemSlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FireModeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAutoEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEndOnFireLoopComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle AutoEndTimerHandle;
    
public:
    UORGameplayAbility_FireItem();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFireLoopCompleteCallback(ASQFireableInventoryItem* InFireableItem, FGameplayTag InFireModeTag, USQFireLoopComponent* InFireLoop);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFireModeTag() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USQFiringResultComponent* GetFireableItemFireModeFiringResult() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQFireableInventoryItem* GetFireableItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginFire();
    
    UFUNCTION(BlueprintCallable)
    void AutoEndTimerCallback();
    
};

