#pragma once
#include "CoreMinimal.h"
#include "ORWidget_Button.h"
#include "ORWidget_PauseMenuTabButton.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class OREGON_API UORWidget_PauseMenuTabButton : public UORWidget_Button {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* IconImage;
    
    UORWidget_PauseMenuTabButton();
};

