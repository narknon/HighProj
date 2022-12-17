#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ORMapElementWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORMapElementWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UORMapElementWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetRotation(float Rotation);
    
};

