#include "ORSuctionComponent.h"

FVector UORSuctionComponent::GetCurrentSuctionPointLocation() {
    return FVector{};
}

UORSuctionComponent::UORSuctionComponent() {
    this->bNoSuction = false;
    this->bApplyStartingSuctionAffectsWithNoSuction = false;
}

