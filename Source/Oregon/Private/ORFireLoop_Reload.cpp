#include "ORFireLoop_Reload.h"

class UORGlobalEventPayload;

void UORFireLoop_Reload::RetryReload(const UORGlobalEventPayload* EventData) {
}

void UORFireLoop_Reload::ReloadMontageCancelled() {
}

void UORFireLoop_Reload::HandleItemEvent(TArray<FItemEventData> ActiveItemEvents) {
}

UORFireLoop_Reload::UORFireLoop_Reload() {
    this->ParentFireableItem = NULL;
    this->Resource = NULL;
    this->bDoesAttemptAutoReload = true;
    this->bAutoRetryAfterCancelling = true;
    this->bAllowReloadAtFullAmmo = false;
    this->bWasReloadCancelled = false;
}

