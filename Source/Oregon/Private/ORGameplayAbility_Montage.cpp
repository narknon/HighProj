#include "ORGameplayAbility_Montage.h"

class UAnimMontage;

UAnimMontage* UORGameplayAbility_Montage::PickMontageToPlay_Implementation() {
    return NULL;
}


UORGameplayAbility_Montage::UORGameplayAbility_Montage() {
    this->bAbortIfOtherMontagesPlaying = true;
    this->bAbortIfOtherMontagesPlayingInSameGroup = false;
    this->bEndAbilityOnMontageDuration = false;
    this->PlayingMontage = NULL;
    this->bCallEndAbilityOnMontageComplete = true;
    this->bStopMontageOnAbilityCancelled = true;
}

