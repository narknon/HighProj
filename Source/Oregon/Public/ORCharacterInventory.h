#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "CurrencyItemData.h"
#include "ItemSlotDescriptor.h"
#include "SlotData.h"
#include "EquippableItemStack.h"
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "CurrentItemEventsDelegate.h"
#include "ItemEventFiredDelegate.h"
#include "ItemEventData.h"
#include "EInitialEquipState.h"
#include "RemovedItemDelegateDelegate.h"
#include "UnequippedItemDelegateDelegate.h"
#include "EquippedItemDelegateDelegate.h"
#include "CurrencyChangedDelegateDelegate.h"
#include "InventoryLoadedDelegateDelegate.h"
#include "InventoryUnloadingDelegateDelegate.h"
#include "ORCharacterInventory.generated.h"

class ASQEquippableInventoryItem;
class ASQInventoryItem;
class UInventorySet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORCharacterInventory : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemSlotDescriptor> SlotDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInventorySet* InventorySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryUnloadingDelegate InventoryUnloadingDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInventoryLoadedDelegate InventoryLoadedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrencyChangedDelegate CurrencyChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEquippedItemDelegate EquippedItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnequippedItemDelegate UnequippedItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemovedItemDelegate RemovedItemDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemEventFired OwnedItemEventDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentItemEvents CurrentItemEventsDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInventoryLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachePreviousEquip;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSlotData> SlotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FEquippableItemStack> AllInventoryEquippables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FCurrencyItemData> AllInventoryCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockedForEdits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> PreviouslyEquippedItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemEventData> ActiveItemEvents;
    
public:
    UORCharacterInventory();
    UFUNCTION(BlueprintCallable)
    void UnlockInventory();
    
    UFUNCTION(BlueprintCallable)
    bool UnequipItem(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable)
    void SetNewInventorySet(const UInventorySet* NewInventorySet, bool bAppend);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxCurrencyCount(FGameplayTag ItemTag, int32 MaxStackCount);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxConcurrentEquippables(FGameplayTag SlotTag, int32 MaxConcurrentEquippables);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEquippable(FGameplayTag ItemTag, bool bShouldDestroy, bool bRemoveAll, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable)
    void LockInventory();
    
    UFUNCTION(BlueprintCallable)
    void ItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag Mode, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEquipped(FGameplayTag ItemTag, FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASQEquippableInventoryItem*> GetSpecificEquippableItems(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPendingEquippedItem(FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxCurrencyCount(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQEquippableInventoryItem* GetFirstEquippedItem(FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASQEquippableInventoryItem*> GetEquippedItems(FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ASQEquippableInventoryItem* GetEquippableItem(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrencyCount(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ASQEquippableInventoryItem*> GetAllEquippableItems(FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetAllCurrencyItems();
    
    UFUNCTION(BlueprintCallable)
    bool EquipPreviousItem(FGameplayTag SlotTag);
    
    UFUNCTION(BlueprintCallable)
    bool EquipItem(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable)
    void EndFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    void EndFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsEquippableItem(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable)
    int32 ConsumeCurrency(FGameplayTag ItemTag, int32 StackCount, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable)
    void ClearInventory(bool bSkipUnequips, bool bSetupSlotData);
    
    UFUNCTION(BlueprintCallable)
    bool CanFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    bool CanFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    void CancelFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    void CancelFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    void BeginFireItemByTag(FGameplayTag ItemTag, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    void BeginFireItem(FGameplayTag ItemSlot, FGameplayTag FireMode);
    
    UFUNCTION(BlueprintCallable)
    ASQEquippableInventoryItem* AddExistingEquippable(FGameplayTag ItemTag, FGameplayTag SlotTag, ASQEquippableInventoryItem* ItemClass, TEnumAsByte<EInitialEquipState> OverrideEquipState, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable)
    ASQEquippableInventoryItem* AddEquippable(FGameplayTag ItemTag, FGameplayTag SlotTag, TSubclassOf<ASQEquippableInventoryItem> ItemClass, TEnumAsByte<EInitialEquipState> OverrideEquipState, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
    UFUNCTION(BlueprintCallable)
    int32 AddCurrency(FGameplayTag ItemTag, int32 StackCount, TEnumAsByte<EInventoryTransactionType> TransactionType);
    
};

