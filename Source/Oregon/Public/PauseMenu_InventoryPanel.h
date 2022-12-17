#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "GameplayTagContainer.h"
#include "PauseMenu_InventoryPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UPauseMenu_InventoryPanel : public UORWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CurrentPanelDisplayTag;
    
    UPauseMenu_InventoryPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTag RequestDisplayItemTag();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool RequestBack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool FocusRequestedItem(FGameplayTag ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddItemToPanel(FGameplayTag ItemTag);
    
};

