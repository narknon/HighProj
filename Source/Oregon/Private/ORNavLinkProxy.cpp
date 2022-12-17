#include "ORNavLinkProxy.h"
#include "Components/SplineComponent.h"

void AORNavLinkProxy::SetNavigationRelevancy(bool bRelevant) {
}

void AORNavLinkProxy::RefreshOctree() {
}

void AORNavLinkProxy::RefreshNavigationModifiers() {
}

bool AORNavLinkProxy::IsRelevant() const {
    return false;
}

bool AORNavLinkProxy::IsLinkEnabled() const {
    return false;
}

void AORNavLinkProxy::EnableLink(bool Enabled) {
}

void AORNavLinkProxy::CopySmartLinkFromSimpleLink(const FNavigationLink& SimpleLink) {
}

AORNavLinkProxy::AORNavLinkProxy() {
    this->bShouldUseSplineTraversal = false;
    this->TraversalTimeCurve = NULL;
    this->TraversalTime = 1.00f;
    this->SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
    this->TimeSinceDisabled = 0.00f;
    this->DisabledCooldown = 1.00f;
}

