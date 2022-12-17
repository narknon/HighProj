#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "ORWidget_PauseMenu.generated.h"

class UORWidget_PauseMenuTabButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OREGON_API UORWidget_PauseMenu : public UORWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORWidget_PauseMenuTabButton* SystemButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORWidget_PauseMenuTabButton* InventoryButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORWidget_PauseMenuTabButton* WackyPacksButton;
    
    UORWidget_PauseMenu();
};

