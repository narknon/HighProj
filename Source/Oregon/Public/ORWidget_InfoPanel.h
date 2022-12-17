#pragma once
#include "CoreMinimal.h"
#include "ORWidget_HUDPrompt.h"
#include "ORWidget_InfoPanel.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_InfoPanel : public UORWidget_HUDPrompt {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InfoPanel_NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InfoPanel_DescriptionText;
    
public:
    UORWidget_InfoPanel();
};

