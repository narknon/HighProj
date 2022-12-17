#pragma once
#include "CoreMinimal.h"
#include "ORWidget_InteractStationCanvas.h"
#include "ORWidget_InteractItemButton.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_InteractItemButton : public UORWidget_InteractStationCanvas {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* InteractionButton;
    
    UORWidget_InteractItemButton();
    UFUNCTION(BlueprintCallable)
    void OnUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnHovered();
    
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
};

