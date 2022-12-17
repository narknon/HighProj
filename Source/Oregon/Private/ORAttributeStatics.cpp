#include "ORAttributeStatics.h"

class UAbilitySystemInterface;
class IAbilitySystemInterface;
class UORDamageableAttributeSet;
class UORCharacterAttributeSet;
class UORPlayerAttributeSet;

float UORAttributeStatics::GetWalkSpeed(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return 0.0f;
}

float UORAttributeStatics::GetSprintSpeed(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return 0.0f;
}

UORPlayerAttributeSet* UORAttributeStatics::GetPlayerSet(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return NULL;
}

float UORAttributeStatics::GetMovementSpeedMod(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return 0.0f;
}

UORDamageableAttributeSet* UORAttributeStatics::GetDamageableSet(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return NULL;
}

float UORAttributeStatics::GetCrouchSpeed(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return 0.0f;
}

UORCharacterAttributeSet* UORAttributeStatics::GetCharacterSet(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return NULL;
}

float UORAttributeStatics::GetCameraSpeedMod(TScriptInterface<IAbilitySystemInterface> ASCOwner) {
    return 0.0f;
}

UORAttributeStatics::UORAttributeStatics() {
}

