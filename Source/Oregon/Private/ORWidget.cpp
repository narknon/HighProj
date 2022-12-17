#include "ORWidget.h"

class UORGlobalEventPayload;

void UORWidget::UnsubscribeFromEvent(const FGameplayTag EventTag) {
}

void UORWidget::UnsubscribeFromAllEvents() {
}

void UORWidget::SubscribeToEvent(const FGameplayTag EventTag) {
}

void UORWidget::OnUnfocused_Implementation() {
}

void UORWidget::OnUICancel_Implementation() {
}

void UORWidget::OnUIAccept_Implementation() {
}

void UORWidget::OnPushed_Implementation() {
}

void UORWidget::OnPopped_Implementation() {
}

void UORWidget::OnFocused_Implementation() {
}

void UORWidget::OnEventPayloadReceived_Implementation(const UORGlobalEventPayload* Payload) {
}

UORWidget::UORWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->UIAcceptKeys.AddDefaulted(1);
    this->UICancelKeys.AddDefaulted(1);
    this->CachedParent = NULL;
}

