#include "ORImpactAudioComponent.h"

class AActor;
class UPrimitiveComponent;
class UORAkComponent;

bool UORImpactAudioComponent::SetORAkComponent(UORAkComponent* InORAkComponent) {
    return false;
}

bool UORImpactAudioComponent::SetCollidingComponent(UPrimitiveComponent* InCollidingComponent) {
    return false;
}

void UORImpactAudioComponent::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UORImpactAudioComponent::Initialize(UPrimitiveComponent* InCollidingComponent, UORAkComponent* InORAkComponent) {
    return false;
}

UORAkComponent* UORImpactAudioComponent::GetORAkComponent() {
    return NULL;
}

UPrimitiveComponent* UORImpactAudioComponent::GetCollidingComponent() {
    return NULL;
}

bool UORImpactAudioComponent::EnableCollisionAudio() {
    return false;
}

bool UORImpactAudioComponent::DisableCollisionAudio() {
    return false;
}

UORImpactAudioComponent::UORImpactAudioComponent() {
    this->ImpactAkEvent = NULL;
    this->LengthThreshold = 50.00f;
}

