#include "ORMapWidget.h"

class UTexture2D;

void UORMapWidget::UpdateWidgets() {
}

void UORMapWidget::UpdateMap() {
}

void UORMapWidget::HandleZoomOutAxis(float AxisValue) {
}

void UORMapWidget::HandleZoomInAxis(float AxisValue) {
}

void UORMapWidget::HandleZoomAxis(float AxisValue) {
}

void UORMapWidget::HandleVerticalScrollAxis(float AxisValue) {
}

void UORMapWidget::HandleHorizontalScrollAxis(float AxisValue) {
}

UTexture2D* UORMapWidget::GetMapTexture() {
    return NULL;
}

void UORMapWidget::DragMap(const FVector2D& Offset) {
}



void UORMapWidget::AdjustZoom(float ZoomAmount, float DeltaTime) {
}

void UORMapWidget::AdjustMapPosition(const FVector2D& Offset, float DeltaTime) {
}

UORMapWidget::UORMapWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BoundsVolume = NULL;
    this->IconParentWidget = NULL;
    this->MinZoom = 0.25f;
    this->MaxZoom = 5.00f;
    this->MapZoom = 1.00f;
    this->HorizontalOffset = 0.00f;
    this->VerticalOffset = 0.00f;
    this->ZoomOffset = 0.00f;
}

