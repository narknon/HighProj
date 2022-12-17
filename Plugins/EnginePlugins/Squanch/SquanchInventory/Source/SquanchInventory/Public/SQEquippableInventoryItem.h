#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilitySystemInterface.h"
#include "SQInventoryItem.h"
#include "GameplayTagContainer.h"
#include "SQEquippableInventoryItem.generated.h"

class AActor;
class UAbilitySystemComponent;
class USQItemEquipPayload;
class ASQItemAttachment;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API ASQEquippableInventoryItem : public ASQInventoryItem, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemRemovedDropActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SlotTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<USQItemEquipPayload>> EquipPayloadClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQItemEquipPayload*> EquipPayloads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASQItemAttachment> AttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideItemIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEquipOnAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQItemAttachment* ItemAttachment;
    
public:
    ASQEquippableInventoryItem();
    UFUNCTION(BlueprintCallable)
    void UnequipItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreItemEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemEquipped();
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipOnAdd();
    
    UFUNCTION(BlueprintCallable)
    void InitializeAttachment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSlotTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverrideItemIndex() const;
    
    UFUNCTION(BlueprintCallable)
    ASQItemAttachment* GetAttachment();
    
    UFUNCTION(BlueprintCallable)
    void EquipItem();
    
    UFUNCTION(BlueprintCallable)
    void DestroyItemAttachment();
    
    UFUNCTION(BlueprintCallable)
    void BeginUnequipItem();
    
    UFUNCTION(BlueprintCallable)
    void BeginEquipItem();
    
    
    // Fix for true pure virtual functions not being implemented
};

