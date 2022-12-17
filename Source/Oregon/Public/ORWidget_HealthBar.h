#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "ORWidget_HealthBar.generated.h"

class ASQEquippableInventoryItem;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_HealthBar : public UORWidget {
    GENERATED_BODY()
public:
    UORWidget_HealthBar();
    UFUNCTION(BlueprintCallable)
    void InitHealthBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HealthUpdated(float Change, float NewArmor, float MaxArmor, float NewHealth, float MaxHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HealthTanksEquipped(UPARAM(Ref) TArray<ASQEquippableInventoryItem*>& Tanks);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HealthChanged(float Change, float NewValue, bool Silent);
    
};

