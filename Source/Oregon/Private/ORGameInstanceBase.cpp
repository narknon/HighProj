#include "ORGameInstanceBase.h"

bool UORGameInstanceBase::ShouldUseRecommendedDebugLoadouts() {
    return false;
}

bool UORGameInstanceBase::HasValidSaveFile() {
    return false;
}

void UORGameInstanceBase::HandleControllerConnectionUIClosed(bool SuccessfulConnection, bool UICancelled, int32 PlatformUserID) {
}

void UORGameInstanceBase::ContinueGame() {
}

void UORGameInstanceBase::BeginNewGame(ESQDifficultySetting InDifficulty) {
}

UORGameInstanceBase::UORGameInstanceBase() {
    this->bDebugLoad = false;
}

