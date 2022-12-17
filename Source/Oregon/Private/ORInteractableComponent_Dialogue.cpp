#include "ORInteractableComponent_Dialogue.h"

void UORInteractableComponent_Dialogue::SetHasGunChoice(bool bGunChoice) {
}

bool UORInteractableComponent_Dialogue::HasGunChoice() {
    return false;
}

UORInteractableComponent_Dialogue::UORInteractableComponent_Dialogue() {
    this->bHasGunChoice = false;
}

