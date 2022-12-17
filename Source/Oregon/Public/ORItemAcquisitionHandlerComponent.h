#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORItemAcquisitionRuleTableRow.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ORItemAcquisitionHandlerComponent.generated.h"

class ASQInventoryItem;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORItemAcquisitionHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AcquisitionRulesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORItemAcquisitionRuleTableRow> AcquisitionRules;
    
    UORItemAcquisitionHandlerComponent();
    UFUNCTION(BlueprintCallable)
    void TryProcessAcquisitionRules(const FGameplayTag& ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessRuleShowTutorialOnFirstAcquired(UPARAM(Ref) FORItemAcquisitionRuleTableRow& Rule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessRuleGrantItemsOnAllAcquired(UPARAM(Ref) FORItemAcquisitionRuleTableRow& Rule);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessRuleEquipFirstOfType(FGameplayTag ItemTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerOwnedItemChanged(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireMode, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCurrencyChanged(FGameplayTag Currency, int32 PreviousCount, int32 NewCount, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetAllAcquiredProgress(const FGameplayTag& ItemTag, float& OutAmountOwned, float& OutAmountRequired);
    
};

