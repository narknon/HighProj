#include "ORAIScriptCommand_PlayAnimation.h"

class UAnimMontage;

void UORAIScriptCommand_PlayAnimation::HandleMontageEnding(UAnimMontage* NewMontage, bool bInterrupted) {
}

UORAIScriptCommand_PlayAnimation::UORAIScriptCommand_PlayAnimation() {
    this->Montage = NULL;
    this->bMontageFinished = false;
}

