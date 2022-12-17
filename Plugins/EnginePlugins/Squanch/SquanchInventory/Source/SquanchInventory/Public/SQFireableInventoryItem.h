#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQEquippableInventoryItem.h"
#include "GameplayTagContainer.h"
#include "EItemComponentType.h"
#include "FireLoopCompleteSignatureDelegate.h"
#include "ItemComponentAttributeData.h"
#include "FireMode.h"
#include "SQFireableInventoryItem.generated.h"

class USQFiringResultComponent;
class USQFireLoopComponent;
class USQFireableItemComponent;
class USQResourceComponent;
class UItemImpactResult;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API ASQFireableInventoryItem : public ASQEquippableInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireLoopCompleteSignature OnFireLoopComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSkipSpawningDrop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFireMode> FireModeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UItemImpactResult*> HitResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EItemComponentType>, FItemComponentAttributeData> AttributeData;
    
public:
    ASQFireableInventoryItem();
    UFUNCTION(BlueprintCallable)
    void SkipSpawningNextDrop();
    
    UFUNCTION(BlueprintCallable)
    void OverrideImpactResult(FGameplayTag FireModeTag, UItemImpactResult* NewImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OverrideFireModeComponent(FGameplayTag FireModeTag, TSubclassOf<USQFireableItemComponent> NewFireableItemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_ItemCanFire();
    
    UFUNCTION(BlueprintCallable)
    bool ItemCanFire(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    USQResourceComponent* GetResourceComponent(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<USQFireableItemComponent>> GetItemComponents(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, UItemImpactResult*> GetImpactResultList();
    
    UFUNCTION(BlueprintCallable)
    UItemImpactResult* GetImpactResult(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    USQFiringResultComponent* GetFiringResult(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, FFireMode> GetFireModeList();
    
    UFUNCTION(BlueprintCallable)
    USQFireLoopComponent* GetFireLoopComponent(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetAttachmentSkMesh();
    
    UFUNCTION(BlueprintCallable)
    void EndItemFire(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    void CancelItemFire(FGameplayTag Mode);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllFireModes();
    
    UFUNCTION(BlueprintCallable)
    bool BeginItemFire(FGameplayTag Mode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateFiringResult(FGameplayTag Mode);
    
};

