#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HelpTextClearedDelegate.h"
#include "HelpTextUpdatedDelegate.h"
#include "HUDHelpTextWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UHUDHelpTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelpTextUpdated OnHelpTextUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelpTextCleared OnHelpTextCleared;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* HelpText;
    
public:
    UHUDHelpTextWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDisplayTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayRawHelpText(const FText& TextToDisplay, float DisplayTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayHelpTextFromTable(const FName& DataTableRowName, float DisplayTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisplayHelpText(const FText& TextToDisplay, float DisplayTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearHelpText();
    
};

