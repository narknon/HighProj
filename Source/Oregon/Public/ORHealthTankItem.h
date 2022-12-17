#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SQEquippableInventoryItem.h"
#include "GameplayTagContainer.h"
#include "OnHealthTankEmptyDelegate.h"
#include "OnHealthTankUpdateDelegate.h"
#include "ORHealthTankItem.generated.h"

class UORHealthTankAttributeSet;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API AORHealthTankItem : public ASQEquippableInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthTankUpdate OnHealthTankUpdateEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHealthTankEmpty OnHealthTankEmptyEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORHealthTankAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORHealthTankAttributeSet> CachedAttributes;
    
public:
    AORHealthTankItem();
    UFUNCTION(BlueprintCallable)
    void SetHealthValue(float HealthValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ProcessHealing(float Amount, const FGameplayTagContainer RelatedTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float ProcessDamage(float Amount, const FGameplayTagContainer RelatedTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFull();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth();
    
    UFUNCTION(BlueprintCallable)
    float ApplyHealing(float Amount);
    
    UFUNCTION(BlueprintCallable)
    float ApplyDamage(float Amount);
    
};

