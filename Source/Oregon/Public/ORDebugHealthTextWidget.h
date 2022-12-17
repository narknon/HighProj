#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ORDebugHealthTextWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORDebugHealthTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HealthText;
    
public:
    UORDebugHealthTextWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateHealthText(const float CurrentHealth, const float MaxHealth, const float MaxWithoutUpgrades);
    
};

