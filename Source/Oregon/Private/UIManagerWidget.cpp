#include "UIManagerWidget.h"

class UWidget;
class UORWidget_InteractStationCanvas;

bool UUIManagerWidget::TryUpdateControllerID(const int32 NewControllerID) {
    return false;
}

void UUIManagerWidget::TriggerBackBehavior() {
}

void UUIManagerWidget::PushWidget(UWidget* WidgetToPush, bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
}

UWidget* UUIManagerWidget::PopWidget(bool bAutoSetGamepadFocus, bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return NULL;
}

void UUIManagerWidget::PopAllWidgets(bool bAutoSetVisibility, UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
}

void UUIManagerWidget::OnWindowFocusChanged(bool bIsFocused) {
}

void UUIManagerWidget::OnKeyInputReceived(const FKeyEvent& InKeyEvent) {
}

void UUIManagerWidget::OnInputReceived() {
}

void UUIManagerWidget::OnDeviceTypeChanged(TEnumAsByte<EInputDeviceType> NewDeviceType) {
}

void UUIManagerWidget::OnCultureChanged() {
}

bool UUIManagerWidget::IsPlayerAFK() {
    return false;
}

int32 UUIManagerWidget::GetWidgetStackCount(UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return 0;
}

UWidget* UUIManagerWidget::GetTopmostWidget(UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return NULL;
}

TEnumAsByte<EInputDeviceType> UUIManagerWidget::GetCurrentDeviceType() {
    return EIDT_KeyboardMouse;
}

UWidget* UUIManagerWidget::GetAutoFocusWidget(UWidget* WidgetToFocus) {
    return NULL;
}

void UUIManagerWidget::DelayedFocusWidget() {
}

bool UUIManagerWidget::AutoFocusWidget(UWidget* WidgetToFocus) {
    return false;
}

bool UUIManagerWidget::AutoFocusTopWidget(UORWidget_InteractStationCanvas* OptionalInteractionCanvas) {
    return false;
}

UUIManagerWidget::UUIManagerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InitialAFKTimeSec = 60.00f;
    this->RepeatAFKTimeSec = 30.00f;
}

