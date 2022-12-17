#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Input/Events.h"
#include "EInputDeviceType.h"
#include "UIManagerEventDelegate.h"
#include "UIManager_OnInputDeviceChangedDelegate.h"
#include "UIManagerWidget.generated.h"

class UWidget;
class UORWidget_InteractStationCanvas;

UCLASS(Blueprintable, EditInlineNew, Config=Input)
class OREGON_API UUIManagerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIManager_OnInputDeviceChanged OnUIManagerInputDeviceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIManagerEvent OnViewportResizedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIManagerEvent AFKReminderEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIManagerEvent CultureChangedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAFKTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepeatAFKTimeSec;
    
    UUIManagerWidget();
protected:
    UFUNCTION(BlueprintCallable)
    bool TryUpdateControllerID(const int32 NewControllerID);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerBackBehavior();
    
    UFUNCTION(BlueprintCallable)
    void PushWidget(UWidget* WidgetToPush, bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable)
    UWidget* PopWidget(bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable)
    void PopAllWidgets(bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWindowFocusChanged(bool bIsFocused);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyInputReceived(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnInputReceived();
    
    UFUNCTION(BlueprintCallable)
    void OnDeviceTypeChanged(TEnumAsByte<EInputDeviceType> NewDeviceType);
    
    UFUNCTION(BlueprintCallable)
    void OnCultureChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsPlayerAFK();
    
    UFUNCTION(BlueprintCallable)
    int32 GetWidgetStackCount(UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetTopmostWidget(UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EInputDeviceType> GetCurrentDeviceType();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetAutoFocusWidget(UWidget* WidgetToFocus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelayedFocusWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AutoFocusWidget(UWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    bool AutoFocusTopWidget(UORWidget_InteractStationCanvas* OptionalInteractionCanvas);
    
};

