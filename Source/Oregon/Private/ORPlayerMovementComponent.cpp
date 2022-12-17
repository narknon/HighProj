#include "ORPlayerMovementComponent.h"

class UORDetachedTriggerComponent;

bool UORPlayerMovementComponent::WasRecentlyInMovementType(TEnumAsByte<EMovementMode> MovementType, uint8 CustomMovementType, float TimeOffset) const {
    return false;
}

void UORPlayerMovementComponent::SetHoverState(bool bNewState, TEnumAsByte<EHoverType> NewHoverType) {
}

void UORPlayerMovementComponent::ResetLedgeGrabWalkableFloor() {
}

void UORPlayerMovementComponent::OnZiplineInteractableEnabledChanged(UORDetachedTriggerComponent* Interactable, bool bIsEnabled) {
}

void UORPlayerMovementComponent::OnAnchorInteractableEnabledChanged(UORDetachedTriggerComponent* Interactable, bool bIsEnabled) {
}

void UORPlayerMovementComponent::MarkCanDeactivateSlide() {
}

bool UORPlayerMovementComponent::IsPlayerBouncy() {
    return false;
}

bool UORPlayerMovementComponent::IsHovering() const {
    return false;
}

bool UORPlayerMovementComponent::IsGliding() {
    return false;
}

void UORPlayerMovementComponent::IncrementCurrentFuel(float Diff) {
}

float UORPlayerMovementComponent::GetRemainingJetpackRise() {
    return 0.0f;
}

void UORPlayerMovementComponent::ForceDeactivateSlide() {
}

void UORPlayerMovementComponent::CancelFuelRegen() {
}

void UORPlayerMovementComponent::ActivateFuelRegen() {
}

UORPlayerMovementComponent::UORPlayerMovementComponent() {
    this->CurrentTraversalFuel = 100.00f;
    this->bIgnoreFuel = false;
    this->bRegeneratingFuel = false;
    this->bRegeneratingHasStarted = false;
    this->bShouldSprint = false;
    this->SprintReleaseThreshold = 0.75f;
    this->GlidePhase = EOGP_None;
    this->GlideWasActive = false;
    this->GlideRise_AkEvent = NULL;
    this->GlideHover_AkEvent = NULL;
    this->GlideHoverCameraOffset = 0.00f;
    this->GlideRiseCameraOffset = 0.00f;
    this->GlideCameraOffsetLerpAlpha = 0.20f;
    this->GlideHoverFuelModCurve = NULL;
    this->GlideRiseAccelerationModCurve = NULL;
    this->GlideRiseAccererationTime = 0.00f;
    this->SlideType = EST_Standard;
    this->SlideActivateThreshold = 0.75f;
    this->bShouldActivateSlide = false;
    this->bIsSliding = false;
    this->SlideDotProductBrakingCurve = NULL;
    this->PowerSlideInputLateralScale = 0.20f;
    this->bSlideOnLanding = false;
    this->bHasDashedInAir = false;
    this->MagwallSlideTangentThreshold = 0.75f;
    this->bForceDodge = false;
    this->bUseAirDodgeBraking = false;
    this->bCanDeactivateSlide = false;
    this->bShouldDeactivateSlide = false;
    this->bScrubSlideSpeed = false;
    this->BrakingDecelerationPostAirDodge = 2000.00f;
    this->BrakingDecelerationSlodge = 2000.00f;
    this->GroundFrictionDodge = 0.00f;
    this->GroundFrictionPowerSlide = 2.00f;
    this->SlodgeGravityScale = 2.00f;
    this->SlideDeactivateEffect = NULL;
    this->bTickSlideCosts = false;
    this->bAllowLedgeGrabThroughGeo = false;
    this->bLedgeGrabCheckActive = false;
    this->bActivateMantleFloorOverride = false;
    this->LedgeGrabCooldown = 0.25f;
    this->NextLedgeGrabTime = 0.00f;
    this->LedgeGrabMaxStep = 128.00f;
    this->MinimumLedgeGrab = 32.00f;
    this->LedgeGrabAngleThreshold = 0.50f;
    this->LedgeGrabFloorZDisableTime = 0.10f;
    this->PostBounceEffect = NULL;
    this->Bounce_AkEvent = NULL;
    this->HoverDecelerationFactor = 5.00f;
    this->HoverType = EHT_None;
    this->GroundPoundHoverEffect = NULL;
    this->MagwallFloorType = SurfaceType19;
    this->GravityTweenQuadraticFactor = 0.00f;
    this->GravityTweenXYSpeed = 0.00f;
    this->MeleeMinDistance = 0.00f;
    this->SwingExitAngle = 0.00f;
    this->SwingCurrentAngle = 0.00f;
    this->CurrentAnchorSplineDistance = 0.00f;
    this->ExtraAirFrictionWhileFalling = 5000.00f;
    this->BaselineAirControl = 0.00f;
    this->BaselineBrakingDecelerationFlying = 0.00f;
    this->ExtraAirControlWhileHovering = 1.80f;
    this->ExtraBrakingDecelerationFlyingWhileHovering = 2000.00f;
}

