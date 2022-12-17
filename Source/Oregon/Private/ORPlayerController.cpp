#include "ORPlayerController.h"
#include "ORTargetablesManager.h"

class AActor;
class APawn;

void AORPlayerController::SetViewTargetTransitionParamsOverride(FViewTargetTransitionParams NewOverrideTransitionParams) {
}

void AORPlayerController::SetPlayerLocationFocus(FVector& Location) {
}

void AORPlayerController::SetPlayerActorFocus(AActor* FocusTarget) {
}

void AORPlayerController::SetPauseMenuActiveState(bool bIsActive) {
}

bool AORPlayerController::IsWeaponHiddenByPossessionSwap() {
    return false;
}


bool AORPlayerController::GetPauseMenuActiveState() {
    return false;
}

void AORPlayerController::EndPossessionSwap(bool bCalculateNewPawnLocation) {
}

void AORPlayerController::EndPlayerFocus() {
}

void AORPlayerController::EndBossIntro() {
}

void AORPlayerController::ClearViewTargetTransitionParamsOverride() {
}

void AORPlayerController::BossIntroReturnToPlayerStarted() {
}

void AORPlayerController::BossIntroCameraCutComplete() {
}

void AORPlayerController::ActivatePossessionSwap(APawn* NewPawn) {
}

AORPlayerController::AORPlayerController() {
    this->CachedPlayerPawn = NULL;
    this->bHUDHiddenByPossessionSwap = false;
    this->bWeaponHiddenByPossessionSwap = false;
    this->TargetablesManagerClass = AORTargetablesManager::StaticClass();
    this->TargetablesManager = NULL;
}

