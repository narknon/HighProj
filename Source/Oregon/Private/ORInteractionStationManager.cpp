#include "ORInteractionStationManager.h"
#include "Components/SceneComponent.h"
#include "ORInteractableComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"

class UORAkComponent;
class UWidgetComponent;
class UORInteractionStationComponent;

void AORInteractionStationManager::UpdateStationComponents(bool bEnteredStation) {
}

void AORInteractionStationManager::ToggleFreeLook() {
}

void AORInteractionStationManager::StartExitAnimation_Implementation() {
}

void AORInteractionStationManager::StartEntranceAnimation_Implementation() {
}

void AORInteractionStationManager::SetStationEnabled(bool bEnabled) {
}

void AORInteractionStationManager::SetIgnoreLookInput(bool bIgnoreInput) {
}

void AORInteractionStationManager::SetExitComponentToFace(USceneComponent* ComponentToFace) {
}

bool AORInteractionStationManager::PlayerHasTagRequirements() {
    return false;
}

void AORInteractionStationManager::PauseStation(bool bPause) {
}





void AORInteractionStationManager::OnHoveredWidgetChanged(UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent) {
}

void AORInteractionStationManager::OnHealthChanged(float Change, float NewValue, bool Silent) {
}

void AORInteractionStationManager::OnCombatStateChanged(const bool bInCombat) {
}

void AORInteractionStationManager::NavigateBack_Implementation() {
}

bool AORInteractionStationManager::IsPlayerInStation() {
    return false;
}

bool AORInteractionStationManager::GetStationEnabled() {
    return false;
}

UORAkComponent* AORInteractionStationManager::GetORAkComponent() {
    return NULL;
}

UORInteractionStationComponent* AORInteractionStationManager::GetCurrentInteractionComponent() {
    return NULL;
}

void AORInteractionStationManager::FocusPreviousComponent() {
}

void AORInteractionStationManager::FocusNextComponent() {
}

void AORInteractionStationManager::FocusComponent(UORInteractionStationComponent* ComponentToFocus) {
}

void AORInteractionStationManager::ExitStation(bool bInstantExit, USceneComponent* OptionalComponentToFace, FVector OffsetFromComponent) {
}

void AORInteractionStationManager::ExitAnimComplete() {
}

void AORInteractionStationManager::EntranceAnimComplete() {
}

void AORInteractionStationManager::EnterStation(bool bInstantEnter, USceneComponent* OverrideComponentToFace) {
}

AORInteractionStationManager::AORInteractionStationManager() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->ItemDetectionSphereRadius = 300.00f;
    this->DebugItemDetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ItemDetectionSphere"));
    this->InteractableComponent = CreateDefaultSubobject<UORInteractableComponent>(TEXT("InteractableComponent"));
    this->PlayerPositionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("PlayerPositionArrow"));
    this->PlayerExitPositionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("PlayerExitPositionArrow"));
    this->bEnabledOnBeginPlay = true;
    this->bAllowManualExit = true;
    this->bDisableStationDuringCombat = true;
    this->bExitStationOnDamage = true;
    this->bUseExitPositionArrow = true;
    this->bAutoSetPushPopVisibility = true;
    this->EntranceTransitionSpeed = 5.00f;
    this->bUseExitTransitionSpeed = false;
    this->ExitTransitionSpeed = 5.00f;
    this->MaxLerpTime = 2.00f;
    this->bSetFOVOnEnter = false;
    this->FOVOnEnter = 0.00f;
    this->FOVTransitionSpeed = 5.00f;
    this->bFreeLookOnEntry = false;
    this->ComponentTransitionSpeed = 15.00f;
    this->ComponentMoveToCameraSpeed = 1.00f;
    this->bHidePlayer = false;
    this->bUnequipWeapon = false;
    this->bHideHud = false;
    this->bDisablePlayerCollision = true;
    this->bMaintainPlayerZ = false;
    this->bDisableFreeLook = false;
    this->bSetInputModeUI = true;
    this->bLockPlayerCameraMovement = false;
    this->bClampLookRotation = false;
    this->MinYaw = 0.00f;
    this->MaxYaw = 360.00f;
    this->MinPitch = -89.90f;
    this->MaxPitch = 89.90f;
}

