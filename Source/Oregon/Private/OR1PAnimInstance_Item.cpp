#include "OR1PAnimInstance_Item.h"

class ASQInventoryItem;
class AORFireableInventoryItem;

void UOR1PAnimInstance_Item::UnblockMelee() {
}

bool UOR1PAnimInstance_Item::ShouldEndMontages() {
    return false;
}

void UOR1PAnimInstance_Item::OwnerItemEventFired(ASQInventoryItem* Item, FGameplayTag EventTag, FGameplayTag FireModeTag, EInventoryTransactionType TransactionType) {
}


AORFireableInventoryItem* UOR1PAnimInstance_Item::GetParentItem() {
    return NULL;
}


void UOR1PAnimInstance_Item::DisableAbilityStateAnims() {
}

void UOR1PAnimInstance_Item::BigEyeModeChanged(bool bBigEyeModeActive) {
}

void UOR1PAnimInstance_Item::AbilityStateChange(bool bEnabled) {
}

UOR1PAnimInstance_Item::UOR1PAnimInstance_Item() {
    this->BankX = 0.00f;
    this->BankY = 0.00f;
    this->bIsInCombat = false;
    this->bIsGroundPounding = false;
    this->bIsInADS = false;
    this->OwnerSpeed = 0.00f;
    this->bIsSprintActive = false;
    this->bIsSlidingOrDashing = false;
    this->DashOffsetY = 0.00f;
    this->DashOffsetX = 0.00f;
    this->MeeleBlockGameplayEffect = NULL;
    this->bEquippedAnimState = false;
    this->bAbilityChargeActive = false;
    this->AbilityChargeAdditiveLayer = NULL;
    this->AbilityStateBlendOutTime = 0.25f;
    this->bEarlyMontageExitADS = false;
    this->bLowerArms = false;
    this->bFirstRaiseActive = false;
    this->ItemFirstRaiseMontage = NULL;
    this->ItemTakeOutMontage = NULL;
    this->ItemPutAwayMontage = NULL;
    this->ItemPutAwayNonCombatMontage = NULL;
    this->ItemTakeOutNonCombatMontage = NULL;
    this->ReloadMontage = NULL;
    this->UpgradedReloadMontage = NULL;
    this->OneHandReloadMontage = NULL;
    this->FireSlideADSMontage = NULL;
    this->FireADSMontage = NULL;
    this->SecondaryFireMontage = NULL;
    this->FireMontage = NULL;
    this->FireSupport1Montage = NULL;
    this->EnterSupportFireMontage = NULL;
    this->AltReloadMontage = NULL;
    this->ChargingMontage = NULL;
    this->ChargedShotMontage = NULL;
}

