#include "ORWidget_InteractStationCanvas.h"

class UWidget;
class UORAkComponent;

void UORWidget_InteractStationCanvas::WidgetPushedToStack_Implementation(UWidget* PushedWidget) {
}

void UORWidget_InteractStationCanvas::WidgetPoppedFromStack_Implementation(UWidget* PoppedWidget) {
}

bool UORWidget_InteractStationCanvas::IsInStation() {
    return false;
}

UORAkComponent* UORWidget_InteractStationCanvas::GetManagerORAkComponent() {
    return NULL;
}

UWidget* UORWidget_InteractStationCanvas::GetLastFocusedWidget() {
    return NULL;
}

void UORWidget_InteractStationCanvas::FocusLost_Implementation() {
}

void UORWidget_InteractStationCanvas::FocusGained_Implementation() {
}

void UORWidget_InteractStationCanvas::ExitedStation_Implementation() {
}

void UORWidget_InteractStationCanvas::EnteredStationComplete_Implementation() {
}

void UORWidget_InteractStationCanvas::EnteredStation_Implementation() {
}

UORWidget_InteractStationCanvas::UORWidget_InteractStationCanvas() {
    this->InteractionCanvasPanel = NULL;
    this->ParentInteractionComponent = NULL;
    this->UIToggleFreeLookKeys.AddDefaulted(3);
    this->UIFocusPreviousKeys.AddDefaulted(3);
    this->UIFocusNextKeys.AddDefaulted(3);
}

