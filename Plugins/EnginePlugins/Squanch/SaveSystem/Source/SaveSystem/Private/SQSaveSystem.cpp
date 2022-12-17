#include "SQSaveSystem.h"

class USaveGame;

void USQSaveSystem::SetActiveGameSaveSlot(FName SlotName) {
}

void USQSaveSystem::RecoverGameSavesIfNecessary() {
}

USaveGame* USQSaveSystem::LoadDiskInstanceForSlot(FName SlotName, int32 UserIdx) {
    return NULL;
}

FName USQSaveSystem::GetSlot() const {
    return NAME_None;
}

void USQSaveSystem::AttemptProfileDataSave() {
}

USQSaveSystem::USQSaveSystem() {
    this->RuntimeInstance = NULL;
    this->SoftSavedInstance = NULL;
    this->DiskInstanceSwapChain.AddDefaulted(2);
    this->TransientInstance = NULL;
    this->ProfileInstance = NULL;
}

