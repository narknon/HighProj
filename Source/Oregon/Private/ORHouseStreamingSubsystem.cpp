#include "ORHouseStreamingSubsystem.h"

void UORHouseStreamingSubsystem::ToggleHousePortal() {
}

void UORHouseStreamingSubsystem::SyncPortalStreaming(const FGameplayTag& InRemotePortalId, const FName& InRemotePortalAddress) {
}

void UORHouseStreamingSubsystem::SetPortalStreaming(const FGameplayTag& InRemotePortalId) {
}

void UORHouseStreamingSubsystem::SetHouseExteriorLocation(EORHouseExteriorLocation InState) {
}

FGameplayTag UORHouseStreamingSubsystem::GetRemotePortalId() {
    return FGameplayTag{};
}

EORHouseExteriorState UORHouseStreamingSubsystem::GetExteriorState() const {
    return EORHouseExteriorState::Unloaded;
}

void UORHouseStreamingSubsystem::ClearPortalStreaming() {
}

UORHouseStreamingSubsystem::UORHouseStreamingSubsystem() {
    this->Location = EORHouseExteriorLocation::Xenoslaughter;
}

